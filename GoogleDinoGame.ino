const uint8_t dino_left[] PROGMEM = {
    0xE0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xFE,
    0xFF,
    0xFD,
    0xBF,
    0xAF,
    0x2F,
    0x2F,
    0x0E,
    0x03,
    0x07,
    0x0F,
    0x1E,
    0xFF,
    0xBF,
    0x1F,
    0x1F,
    0x7F,
    0x47,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Dino on the left foot

const uint8_t dino_right[] PROGMEM = {
    0xE0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xFE,
    0xFF,
    0xFD,
    0xBF,
    0xAF,
    0x2F,
    0x2F,
    0x0E,
    0x03,
    0x07,
    0x0F,
    0x1E,
    0x3F,
    0x7F,
    0x5F,
    0x1F,
    0xFF,
    0x87,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Dino on the right foot

const uint8_t dino_die[] PROGMEM = {
    0xE0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xFE,
    0xF1,
    0xF5,
    0xB1,
    0xBF,
    0x3F,
    0x1F,
    0x1E,
    0x03,
    0x07,
    0x0F,
    0x1E,
    0xFF,
    0xBF,
    0x1F,
    0x1F,
    0xFF,
    0x87,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Dino died :-(

const uint8_t dino_roached_left[] PROGMEM = {
    // 16x8 - Dino bended down on the left foot
    0x03,
    0x06,
    0x6C,
    0x5C,
    0x1C,
    0xFE,
    0xBE,
    0x1E,
    0x7E,
    0x5E,
    0x0E,
    0x1C,
    0x3E,
    0x2A,
    0x2E,
    0x0E,
};  // 16x8 - Dino bended down on the left foot

const uint8_t dino_roached_right[] PROGMEM = {
    // 16x8 - Dino bended down on the left foot
    0x03,
    0x06,
    0xEC,
    0x9C,
    0x1C,
    0x7E,
    0x5E,
    0x1E,
    0x7E,
    0x5E,
    0x0E,
    0x1C,
    0x3E,
    0x2A,
    0x2E,
    0x0E,
};  // 16x8 - Dino bended down on the left foot

const uint8_t cactus_small[] PROGMEM = {
    // 16x16 - Small cactus
    0x00,
    0x00,
    0x00,
    0xE0,
    0xC0,
    0x00,
    0xF8,
    0xFC,
    0xFC,
    0xF8,
    0x80,
    0xFC,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x03,
    0x07,
    0x06,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
};  // 16x16 - Small cactus id=1

const uint8_t cactus_big[] PROGMEM = {
    // 24x16 - Big cactus
    0xF0,
    0x00,
    0xFC,
    0xFE,
    0xFE,
    0xC0,
    0x7C,
    0x00,
    0xF0,
    0x00,
    0xF8,
    0xFC,
    0x60,
    0x3E,
    0x00,
    0x80,
    0x00,
    0xF8,
    0x80,
    0xF8,
    0xFC,
    0xF8,
    0x30,
    0x1F,
    0x03,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x01,
    0x03,
    0xFF,
    0xFF,
    0x00,
    0x1F,
    0x30,
    0xFF,
    0x60,
    0x3C,
    0x01,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
};  // 24x16 - Big cactus id=2

const uint8_t birdR[] PROGMEM = {

    0x30,
    0x38,
    0x3C,
    0x3C,
    0x3F,
    0x3F,
    0x7F,
    0x7C,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xF0,
    0xE0,
    0xE0,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7F,
    0xFF,
    0x7F,
    0x1F,
    0x0F,
    0x0F,
    0x0F,
    0x07,
    0x07,
    0x07,
    0x07,
    0x07,
    0x03,
    0x03,
    0x03,
    0x00,
};  // 24x16 - Bird with raised wings id=3

const uint8_t birdL[] PROGMEM = {
    0x00,
    0x80,
    0xC0,
    0xE0,
    0xF0,
    0xF0,
    0xF0,
    0xC0,
    0x0F,
    0xFE,
    0xF8,
    0xF8,
    0xF0,
    0xE0,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x07,
    0x0E,
    0x1F,
    0x7F,
    0x7F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFC,
    0xFC,
    0xF8,
    0xF8,
    0x78,
    0x68,
    0x68,
    0x68,
};  // 24x16 - Bird with lowered wings id=3

const uint8_t dino_way[] PROGMEM = {
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
};  //128x1 - Dino way
const uint8_t dino_logo[] PROGMEM = {
    0xF8,
    0x0C,
    0x06,
    0x03,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0xC1,
    0xE1,
    0x61,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xE1,
    0xC1,
    0xC1,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0xF9,
    0xFD,
    0xFD,
    0xF9,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0xF1,
    0xF9,
    0xF9,
    0xF1,
    0x01,
    0x81,
    0xC1,
    0x81,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x81,
    0xC1,
    0x81,
    0x01,
    0x01,
    0xF9,
    0xFD,
    0xFD,
    0xFD,
    0xF9,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x03,
    0x06,
    0x0C,
    0xF8,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x80,
    0x80,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x7F,
    0x6F,
    0x6F,
    0x6F,
    0x6F,
    0x0F,
    0x0F,
    0x0F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xF8,
    0xFC,
    0xF8,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0xFC,
    0xFE,
    0xFC,
    0x00,
    0xC0,
    0xE0,
    0xC0,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xC0,
    0xFF,
    0x7F,
    0x3F,
    0x80,
    0xC0,
    0x80,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0x80,
    0x80,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0xFC,
    0xFE,
    0xFC,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3F,
    0x7F,
    0xFE,
    0xFC,
    0xF8,
    0xF0,
    0xF0,
    0xF8,
    0xFC,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x02,
    0x02,
    0x0E,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x1F,
    0x3F,
    0x7F,
    0x70,
    0x70,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x30,
    0x30,
    0x3F,
    0x1F,
    0x0F,
    0x00,
    0x3F,
    0x7F,
    0xFF,
    0xC0,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0xFC,
    0xFC,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0xFC,
    0xFD,
    0x03,
    0x07,
    0x07,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x30,
    0x30,
    0x3F,
    0x1F,
    0x0F,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0x80,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x11,
    0x03,
    0x07,
    0x0F,
    0xFF,
    0x7F,
    0x3F,
    0x1F,
    0x0F,
    0x0F,
    0x3F,
    0x2F,
    0x23,
    0x01,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x11,
    0x13,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0x03,
    0x13,
    0x11,
    0x10,
    0x10,
    0x10,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x10,
    0x80,
    0xFF,
    0x00,
    0x01,
    0x03,
    0x06,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x05,
    0x05,
    0x05,
    0x05,
    0x05,
    0x04,
    0x04,
    0x04,
    0x04,
    0x04,
    0x06,
    0x03,
    0x01,
    0x00,
};  //117x35 - Dino logo
const uint8_t dino_mirrored[] PROGMEM = {
    0x0E,
    0x2F,
    0x2F,
    0xAF,
    0xBF,
    0xFD,
    0xFF,
    0xFE,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x80,
    0xE0,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x07,
    0x8F,
    0xFF,
    0x1F,
    0xBF,
    0xFF,
    0x1E,
    0x0F,
    0x07,
    0x03,
};  //16x16 - Dino mirrored
const uint8_t dino_normal[] PROGMEM = {
    0xE0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xFE,
    0xFF,
    0xFD,
    0xBF,
    0xAF,
    0x2F,
    0x2F,
    0x0E,
    0x03,
    0x07,
    0x0F,
    0x1E,
    0xFF,
    0xBF,
    0x1F,
    0xFF,
    0x8F,
    0x07,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};  //16x16 - Dino normal

#define DINO_GRAVITY 0.175f
#define DINO_GROUND 47  //px

bool dino_feet;
bool dino_move_direction;
byte dino_height;
byte prev_dino_height;
bool roached;
bool enemy_type;
byte active_enemy_id = 1;  //1 - small cactus; 2 - big cactus; 3 - bird
float dino_speed;
bool no_enemies = true;
bool bird_wings_type;
int enemy_pos = -25;  //x
bool dino_died;
int dino_skore;
int hi_dino_skore = 905;
//int night_day_change[] = {20, 60, 100, 200, 300, 400, 600, 900, 1000, 1300, 1500, 1900, 2000, 2200};
bool dino_night;
int game_speed = 100;
int new_enemy_delay = 0;

void google_dino()
{
  uint32_t dino_step_timer;
  uint32_t dino_jump_timer;
  uint32_t refresh_timer;
  uint32_t enemy_timer;
  uint32_t temp_enemy_timer;
  uint32_t enemy_move_timer;
  uint32_t bird_wings_timer;
  uint32_t skore_timer;
  uint32_t new_enemy_timer = millis();
  uint32_t speed_timer;

  exit_to_menu = false;

  dino_height = BOTTOM_HEIGHT;

  dino_died = false;
  enemy_pos = -25;
  new_enemy_delay = 800;

  oled.clear();
  oled.roundRect(0, 9, 127, 40, OLED_STROKE);
  oled.setCursorXY(20, 45);
  oled.print(F("BEST SCORE:"));
  oled.print(hi_dino_skore);
  oled.setScale(1);
  oled.setCursor(3, 7);
  oled.print("<");
  oled.setCursorXY(4, 56);
  oled.print("-");
  oled.setCursorXY(9, 56);
  oled.print("-");
  oled.setCursor(17, 7);
  oled.print("MENU");
  oled.setCursor(89, 7);
  oled.print("PLAY");
  oled.setCursor(120, 7);
  oled.print(">");
  oled.setCursorXY(120, 56);
  oled.print("-");
  oled.setCursorXY(115, 56);
  oled.print("-");
  oled.drawBitmap(10, 24, dino_left, 15, 16);
  oled.drawBitmap(46, 24, cactus_big, 24, 16);
  oled.drawBitmap(94, 14, birdL, 24, 16);
  oled.update();

  while (true)
  {
    buttons_tick();
    if (right.click())
    {
      dino_died = false;
      enemy_pos = -25;
      Timer5.setFrequency(100);
      Timer5.enableISR();
      break;
    }
    if (left.click())
    {
      menu();
      return;
      break;
    }
  }

  while (true)  // main game loop
  {
    global_loop();
    buttons_tick();
    if (ok.click())
    {
      pause = !pause;
      Timer5.setFrequency(80);
      Timer5.enableISR();
    }
    if (right.click())
    {
      pause = false;
    }
    if (left.click() && pause == true)
    {
      menu;
      return;
      break;
    }

    if (millis() - refresh_timer >= 1000 / REFRESH_RATE)
    {
      oled.clear();
      if (pause == true)
      {
        oled.textMode(BUF_ADD);
        oled.roundRect(0, 10, 127, 40, OLED_CLEAR);
        oled.roundRect(0, 10, 127, 40, OLED_STROKE);
        oled.setScale(2);
        oled.setCursor(35, 2);
        oled.print("PAUSE");
        oled.setScale(1);
        oled.setCursor(3, 4);
        oled.print("<");
        oled.setCursorXY(4, 32);
        oled.print("-");
        oled.setCursorXY(9, 32);
        oled.print("-");
        oled.setCursor(17, 4);
        oled.print("MENU");
        oled.setCursor(89, 4);
        oled.print("PLAY");
        oled.setCursor(120, 4);
        oled.print(">");
        oled.setCursorXY(120, 32);
        oled.print("-");
        oled.setCursorXY(115, 32);
        oled.print("-");
      }

      refresh_timer = millis();
      //oled.clear(0, 0, 30, 63);

      oled.setCursor(0, 0);
      oled.print("HI");
      oled.setCursor(15, 0);
      oled.print(hi_dino_skore);
      oled.print(":");
      oled.print(dino_skore);

      if (dino_died == false)
      {
        if (roached == false)
        {
          oled.drawBitmap(5, dino_height, dino_feet ? dino_left : dino_right, 15, 16);
        }
        else
        {
          oled.drawBitmap(5, dino_height + 8, dino_feet ? dino_roached_left : dino_roached_right, 16, 8);
        }
      }
      else
      {
        oled.drawBitmap(5, dino_height, dino_die, 15, 16);
      }

      oled.drawBitmap(0, DINO_GROUND + 16, dino_way, 128, 1);
      switch (active_enemy_id)
      {
        case 1:
          oled.drawBitmap(enemy_pos, DINO_GROUND, cactus_small, 16, 16);
          break;
        case 2:
          oled.drawBitmap(enemy_pos, DINO_GROUND, cactus_big, 24, 16);
          break;
        case 3:
          oled.drawBitmap(enemy_pos, DINO_GROUND - 12, bird_wings_type ? birdR : birdL, 24, 16);
          break;
      }
      draw_battery(battery_charge);
      if (dino_died == true)
      {
        oled.textMode(BUF_ADD);
        oled.roundRect(0, 10, 127, 40, OLED_CLEAR);
        oled.roundRect(0, 10, 127, 40, OLED_STROKE);
        oled.setScale(2);
        oled.setCursor(9, 2);
        oled.print("GAME OVER");
        oled.setScale(1);
        oled.update();
        delay(500);

        oled.setCursor(3, 4);
        oled.print("<");
        oled.setCursorXY(4, 32);
        oled.print("-");
        oled.setCursorXY(9, 32);
        oled.print("-");
        oled.setCursor(17, 4);
        oled.print("MENU");
        oled.setCursor(89, 4);
        oled.print("PLAY");
        oled.setCursor(120, 4);
        oled.print(">");
        oled.setCursorXY(120, 32);
        oled.print("-");
        oled.setCursorXY(115, 32);
        oled.print("-");
        oled.update();
        while (true)
        {
          buttons_tick();
          oled.textMode(BUF_REPLACE);
          draw_battery(battery_charge);
          if (right.click())
          {
            dino_height = BOTTOM_HEIGHT;
            dino_jump_timer = millis();
            refresh_timer = millis();
            dino_step_timer = millis();
            enemy_timer = millis();
            temp_enemy_timer = millis();
            enemy_move_timer = millis();
            bird_wings_timer = millis();
            skore_timer = millis();

            dino_skore = 0;
            dino_died = false;
            game_speed = 100;
            enemy_pos = -25;
            new_enemy_delay = 700;
            break;
          }
          if (left.click())
          {
            exit_to_menu = true;
            break;
          }
        }
      }
      else
      {
        oled.update();
      }
    }
    if (exit_to_menu == true)
    {
      menu();
      break;
    }
    if (millis() - skore_timer >= 100 && pause != true)
    {
      skore_timer = millis();
      dino_skore++;
    }
    if (millis() - speed_timer > 800)
    {
      speed_timer = millis();
      if (game_speed < 200)
      {
        game_speed++;
        if (pause != true)
        {
          Timer5.setFrequency(game_speed);
          Timer5.enableISR();
        }
      }
    }
    if (millis() - dino_step_timer >= 110 && pause != true)
    {
      dino_step_timer = millis();
      dino_feet = !dino_feet;
    }
    if (millis() - bird_wings_timer >= 200 && pause != true)
    {
      bird_wings_timer = millis();
      bird_wings_type = !bird_wings_type;
    }
    if (no_enemies == true && millis() - new_enemy_timer >= new_enemy_delay && pause != true)
    {
      new_enemy_timer = millis();
      active_enemy_id = 0;
      no_enemies = false;
      if (dino_skore >= 120 && active_enemy_id != 3)
      {
        active_enemy_id = random(1, 4);  // 1 - small cactus; 2 - big cactus; 3 - bird
        if (active_enemy_id == 3)
        {
          new_enemy_delay = 1700;
        }
        else
        {
          new_enemy_delay = 0;
        }
      }
      else
      {
        active_enemy_id = random(1, 3);  // 1 - small cactus; 2 - big cactus; 3 - bird
        new_enemy_delay = 0;
      }
      //active_enemy_id = 1;
      if (active_enemy_id == 1)
        enemy_pos = 144;
      if (active_enemy_id == 2 || active_enemy_id == 3)
        enemy_pos = 152;
    }

    if (pause != true)
    {
      if (dino_height < 27)
      {
        if (active_enemy_id != 2 && active_enemy_id != 1 && active_enemy_id == 3 && roached == false && enemy_pos <= 15 && enemy_pos >= -11)  //15; -11
        {
          dino_died = true;
        }
        if (active_enemy_id == 2 && active_enemy_id != 1 && active_enemy_id != 3 && dino_height > DINO_GROUND - 16 && enemy_pos <= 18 && enemy_pos >= -19)  //18; -19
        {
          dino_died = true;
        }
        if (active_enemy_id != 2 && active_enemy_id == 1 && active_enemy_id != 3 && dino_height > DINO_GROUND - 16 && enemy_pos <= 16 && enemy_pos >= -8)  //18; -8
        {
          dino_died = true;
        }
      }
      else if (dino_height >= 27)
      {
        if (active_enemy_id != 2 && active_enemy_id != 1 && active_enemy_id == 3 && roached == false && enemy_pos <= 15 && enemy_pos >= -11)  //15; -11
        {
          dino_died = true;
        }
        if (active_enemy_id == 2 && active_enemy_id != 1 && active_enemy_id != 3 && dino_height > DINO_GROUND - 16 && enemy_pos <= 15 && enemy_pos >= -19)  //15; -19
        {
          dino_died = true;
        }
        if (active_enemy_id != 2 && active_enemy_id == 1 && active_enemy_id != 3 && dino_height > DINO_GROUND - 16 && enemy_pos <= 10 && enemy_pos >= -8)  //14; -8
        {
          dino_died = true;
        }
      }
    }

    if (up.click() && dino_height == DINO_GROUND && dino_died == false && pause != true)
    {
      dino_speed = -2.8;
      dino_height -= 4;
    }
    else if ((up.holding()) && dino_height == DINO_GROUND && dino_died == false && pause != true)
    {
      dino_speed = -3.3;
      dino_height -= 5;
    }
    if (down.pressing() && dino_died == false && pause != true)
    {
      roached = true;
      dino_height = DINO_GROUND;
    }
    if (!down.pressing())
    {
      roached = false;
    }

    if (millis() - dino_jump_timer >= 15)
    {
      dino_jump_timer = millis();

      dino_speed += (float)DINO_GRAVITY;

      dino_height += (float)dino_speed;
      if (dino_height >= DINO_GROUND)
      {
        dino_height = DINO_GROUND;
        dino_speed = 0.0;
      }
      //Serial.println(dino_height);
    }
  }
}

ISR(TIMER5_A)
{
  if (enemy_pos >= -24)
  {
    enemy_pos--;
  }
  else
  {
    no_enemies = true;
  }
}
