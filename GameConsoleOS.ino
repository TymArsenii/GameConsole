#include <PinChangeInterrupt.h>

uint32_t refresh_timer;
bool exit_to_menu;
bool pause = false;
byte battery_charge;
uint32_t battery_timer;

#define OLED_SOFT_BUFFER_64

#include <EncButton.h>
#include <GyverOLED.h>
#include <GyverTimers.h>
#include <SPI.h>

GyverOLED<SSD1306_128x64, OLED_BUFFER, OLED_SPI, 7, 8, 9> oled;

Button up(2);
Button down(3);
Button ok(4);
Button left(5);
Button right(6);

#define REFRESH_RATE 60  //Hz
#define BOTTOM_HEIGHT 40

void setup()
{
  Serial.begin(500000);
  oled.init();
  oled.setPower(true);
  oled.clear();

  attachPCINT(digitalPinToPCINT(2), up_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(3), down_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(4), ok_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(5), left_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(6), right_tick, CHANGE);

  up.setStepTimeout(100);
  down.setStepTimeout(100);
  ok.setStepTimeout(100);
  left.setStepTimeout(100);
  right.setStepTimeout(100);

  up.setHoldTimeout(90);
  down.setHoldTimeout(1000);
  ok.setHoldTimeout(1000);
  left.setHoldTimeout(1000);
  right.setHoldTimeout(1000);

  oled.setContrast(250);
}

void loop()
{
  global_loop();
  //pong();
  menu();
}

void global_loop() { ; }

void draw_battery(byte percent)
{
  if (millis() - battery_timer >= 800)
  {
    battery_timer = millis();
    battery_charge += 10;
  }
  if (battery_charge > 100)
  {
    battery_charge = 0;
  }
  oled.clear(80, 0, 127, 8);
  if (battery_charge < 10)
  {
    oled.setCursorXY(95, 0);
  }
  else if (battery_charge >= 10 && battery_charge < 100)
  {
    oled.setCursorXY(90, 0);
  }
  else if (battery_charge == 100)
  {
    oled.setCursorXY(85, 0);
  }
  oled.print(battery_charge);
  oled.print("%");
  oled.setCursorXY(110, 0);
  oled.drawByte(0b11111111);
  for (byte i = 0; i < 100 / 8; i++)
  {
    if (i < (percent) / 8)
      oled.drawByte(0b11111111);
    else
      oled.drawByte(0b10000001);
  }
  oled.drawByte(0b11111111);
  oled.drawByte(0b00111100);
  oled.drawByte(0b00111100);
}

void buttons_tick()
{
  up.tick();
  down.tick();
  left.tick();
  right.tick();
  ok.tick();
}

void up_tick(void) { up.pressISR(); }
void down_tick(void) { down.pressISR(); }
void ok_tick(void) { ok.pressISR(); }
void right_tick(void) { right.pressISR(); }
void left_tick(void) { left.pressISR(); }
