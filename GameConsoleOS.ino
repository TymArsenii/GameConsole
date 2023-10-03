#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978


const uint8_t logo[] PROGMEM = {
    0x00,
    0x80,
    0xF0,
    0x18,
    0x0C,
    0x04,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x06,
    0x1C,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x40,
    0x40,
    0x40,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xC0,
    0x80,
    0x40,
    0x40,
    0x40,
    0xC0,
    0x80,
    0x80,
    0x40,
    0x40,
    0x40,
    0x40,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x40,
    0x40,
    0x40,
    0x80,
    0x00,
    0x00,
    0x80,
    0xF0,
    0x18,
    0x0C,
    0x04,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x06,
    0x0C,
    0x10,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x40,
    0x40,
    0x40,
    0x40,
    0x80,
    0x80,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xC0,
    0x80,
    0x40,
    0x40,
    0x40,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x40,
    0x40,
    0x40,
    0xC0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x40,
    0x40,
    0x40,
    0x40,
    0x80,
    0x80,
    0x00,
    0x00,
    0x02,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x40,
    0x40,
    0x40,
    0x80,
    0x00,
    0x00,
    0x00,
    0x07,
    0x1F,
    0x38,
    0x60,
    0x40,
    0x80,
    0x80,
    0x80,
    0x80,
    0x82,
    0x82,
    0xFE,
    0x7E,
    0x02,
    0x00,
    0x00,
    0x71,
    0xF1,
    0x88,
    0x88,
    0x84,
    0xFF,
    0xFF,
    0x80,
    0x00,
    0x00,
    0x80,
    0xFF,
    0xFF,
    0x80,
    0x00,
    0x00,
    0x80,
    0xFF,
    0xFF,
    0x80,
    0x80,
    0x00,
    0x80,
    0x80,
    0xFF,
    0xFF,
    0x80,
    0x00,
    0x00,
    0x1E,
    0x7F,
    0xE2,
    0xC2,
    0xC2,
    0xC2,
    0x43,
    0x21,
    0x00,
    0x07,
    0x1F,
    0x38,
    0x60,
    0x40,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0xC0,
    0x60,
    0x30,
    0x00,
    0x00,
    0x1E,
    0x7F,
    0x60,
    0xC0,
    0x80,
    0x80,
    0x80,
    0x41,
    0x7F,
    0x1E,
    0x00,
    0x80,
    0xFF,
    0xFF,
    0x80,
    0x00,
    0x00,
    0x80,
    0xFF,
    0xFF,
    0x80,
    0x00,
    0x00,
    0x63,
    0xC7,
    0x86,
    0x8C,
    0x9C,
    0x78,
    0x31,
    0x00,
    0x00,
    0x1E,
    0x7F,
    0x60,
    0xC0,
    0x80,
    0x80,
    0x80,
    0x41,
    0x7F,
    0x1E,
    0x80,
    0x80,
    0xFF,
    0xFF,
    0x80,
    0x80,
    0x00,
    0x1E,
    0x7F,
    0xE2,
    0xC2,
    0xC2,
    0xC2,
    0x43,
    0x21,
    0x00,
};  // logo - 128x16

#include <PinChangeInterrupt.h>

uint32_t refresh_timer;
bool exit_to_menu;
bool pause_break = false;
bool pause = false;
byte battery_charge;
uint32_t battery_timer;

#define OLED_SOFT_BUFFER_64

#include <EncButton.h>
#include <GyverOLED.h>
#include <GyverTimers.h>
#include <SPI.h>

GyverOLED<SSD1306_128x64, OLED_BUFFER, OLED_SPI, 10, 9, 8> oled;  // for ATmega2560
//GyverOLED<SSD1306_128x64, OLED_BUFFER, OLED_SPI, 7, 8, 9> oled;  // for Arduino
//GyverOLED<SSD1306_128x64, OLED_BUFFER, OLED_SPI, 16, 2, 15> oled; // for ESP32

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
  analogReference(INTERNAL);

  oled.init();
  oled.setPower(true);
  oled.clear();
  oled.drawBitmap(0, 15, logo, 128, 16);
  oled.setCursor(33, 5);
  oled.print("by Arsenii");
  oled.update();
  delay(100);

  attachPCINT(digitalPinToPCINT(2), up_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(3), down_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(4), ok_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(5), left_tick, CHANGE);
  attachPCINT(digitalPinToPCINT(6), right_tick, CHANGE);

  up.setStepTimeout(200);
  down.setStepTimeout(200);
  ok.setStepTimeout(100);
  left.setStepTimeout(100);
  right.setStepTimeout(100);

  up.setHoldTimeout(90);
  down.setHoldTimeout(90);
  ok.setHoldTimeout(1000);
  left.setHoldTimeout(1000);
  right.setHoldTimeout(1000);

  oled.setContrast(255);
}

void loop()
{
  global_loop();
  //snake();
  //google_dino();
  //pong();
  menu();
}

void global_loop() { ; }

void draw_battery(byte percent)
{
  /*
  if (millis() - battery_timer >= 800)
  {
    battery_timer = millis();
    battery_charge += 10;
  }
  if (battery_charge > 100)
  {
    battery_charge = 0;
  }*/
  battery_charge = map(analogRead(0), 0, 1023, 0, 100);
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
