const uint8_t snake_clear[] PROGMEM = {
    0x00,
};  //1x1 clear dot
const uint8_t snake_dot[] PROGMEM = {
    0x01,
};  //1x1 - dot

const uint8_t snake_logo[] PROGMEM = {
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
    0xE0,
    0xF0,
    0xF8,
    0xFC,
    0xFC,
    0x7E,
    0x3F,
    0x3F,
    0x38,
    0x00,
    0x80,
    0xF8,
    0xF8,
    0xF8,
    0xFC,
    0xF8,
    0xC0,
    0x00,
    0x00,
    0xE0,
    0xFC,
    0xFC,
    0xFC,
    0x1C,
    0x00,
    0xC0,
    0xF0,
    0xF8,
    0xFC,
    0x7C,
    0xFE,
    0xFC,
    0xC0,
    0x00,
    0x18,
    0xBC,
    0x3C,
    0xFE,
    0xFE,
    0x80,
    0x80,
    0xC0,
    0xE0,
    0xF8,
    0xFC,
    0xBC,
    0xD8,
    0xE8,
    0x3C,
    0x3E,
    0x1F,
    0x1F,
    0x1E,
    0x18,
    0x08,
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
    0x1C,
    0x3F,
    0x3F,
    0x3F,
    0x39,
    0x18,
    0x18,
    0x98,
    0xDC,
    0xFC,
    0xFC,
    0xFC,
    0x7D,
    0x83,
    0xFF,
    0xFF,
    0x03,
    0x07,
    0x1F,
    0x3F,
    0xFC,
    0xFB,
    0x7F,
    0x7F,
    0x1F,
    0xE0,
    0xFE,
    0xFF,
    0xFF,
    0x77,
    0x30,
    0x38,
    0x3F,
    0x7F,
    0xFF,
    0x7F,
    0x6F,
    0x07,
    0x77,
    0xF8,
    0xFF,
    0xFF,
    0x3F,
    0x7F,
    0xFB,
    0xF1,
    0xE0,
    0x03,
    0x0F,
    0xFF,
    0xFC,
    0xFE,
    0xE6,
    0x76,
    0x70,
    0x20,
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
    0x1C,
    0x3E,
    0x3E,
    0x9F,
    0x9F,
    0x8F,
    0xCF,
    0xC7,
    0xC7,
    0x61,
    0x63,
    0x63,
    0x61,
    0xE1,
    0xE0,
    0xE0,
    0xC0,
    0x78,
    0x7C,
    0x34,
    0x20,
    0x48,
    0x4B,
    0x07,
    0x07,
    0x1B,
    0x39,
    0x24,
    0x04,
    0x44,
    0x64,
    0xE4,
    0x82,
    0x07,
    0x0D,
    0x31,
    0xC0,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
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
    0x80,
    0x80,
    0xE0,
    0x78,
    0x3C,
    0x9E,
    0x3B,
    0x3B,
    0xF9,
    0xF9,
    0xBD,
    0xAD,
    0xFE,
    0xF6,
    0x86,
    0x06,
    0x02,
    0x02,
    0x03,
    0x07,
    0x0D,
    0x19,
    0x20,
    0xF1,
    0xD1,
    0xF1,
    0x11,
    0x01,
    0x88,
    0xC0,
    0x64,
    0x36,
    0x1A,
    0x0E,
    0x82,
    0xC2,
    0x62,
    0x33,
    0x99,
    0xCF,
    0x4E,
    0x2B,
    0x33,
    0x1B,
    0x9E,
    0x9E,
    0x8E,
    0x8C,
    0x88,
    0x80,
    0x80,
    0x98,
    0x10,
    0x30,
    0x20,
    0x60,
    0xC0,
    0xC0,
    0x20,
    0x20,
    0x20,
    0x40,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x3E,
    0x63,
    0x6D,
    0x4F,
    0xFF,
    0xFF,
    0x77,
    0x76,
    0xF0,
    0xF3,
    0xFB,
    0xFB,
    0x99,
    0x39,
    0x1B,
    0x3B,
    0x35,
    0x5B,
    0xDB,
    0x9B,
    0x7B,
    0x0F,
    0x1F,
    0x06,
    0xC0,
    0x20,
    0x10,
    0x0D,
    0x06,
    0xC3,
    0x61,
    0x30,
    0x98,
    0xCC,
    0xE6,
    0xC3,
    0x01,
    0xF8,
    0x86,
    0x03,
    0x21,
    0x78,
    0xCC,
    0x96,
    0x7B,
    0x67,
    0xDB,
    0xD9,
    0x9D,
    0x9F,
    0xB0,
    0x38,
    0x1F,
    0x1D,
    0x1F,
    0x3C,
    0x30,
    0xB0,
    0x9F,
    0xDE,
    0x9B,
    0x83,
    0xE6,
    0xFC,
    0xE0,
    0x01,
    0x0E,
    0x78,
    0xD0,
    0x00,
    0x38,
    0x7C,
    0x7C,
    0x7E,
    0xFE,
    0xFE,
    0xFC,
    0xFD,
    0xFB,
    0xF6,
    0xEC,
    0xD9,
    0xB3,
    0xB7,
    0x99,
    0x1D,
    0xFE,
    0xFE,
    0x3D,
    0x1E,
    0xC1,
    0xFF,
    0xFF,
    0xFF,
    0xCC,
    0x9B,
    0x20,
    0x40,
    0xC0,
    0x8E,
    0x8F,
    0x88,
    0x1A,
    0x17,
    0x17,
    0x1F,
    0x3F,
    0x2F,
    0x2E,
    0x3C,
    0x29,
    0x23,
    0x34,
    0x18,
    0x08,
    0x81,
    0x83,
    0xC6,
    0x79,
    0x22,
    0xA4,
    0xC8,
    0x48,
    0x49,
    0x91,
    0x91,
    0x91,
    0x91,
    0x49,
    0x48,
    0xEA,
    0x3D,
    0xB4,
    0x9D,
    0x97,
    0x87,
    0xAF,
    0xBF,
    0xA0,
    0xC0,
    0x4F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
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
    0x00,
    0x00,
    0x00,
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
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};  //72x49
const uint8_t game_over[] PROGMEM = {
    0xE0,
    0xF8,
    0xFC,
    0xFC,
    0xFC,
    0xFE,
    0x1E,
    0x1F,
    0x0F,
    0x1F,
    0x1F,
    0x1F,
    0x3F,
    0x3F,
    0x3F,
    0x1F,
    0x0F,
    0x0E,
    0x00,
    0x00,
    0x00,
    0xC0,
    0xF0,
    0xFC,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFE,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFE,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xBC,
    0xF0,
    0xF8,
    0xFC,
    0xFE,
    0xFE,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x07,
    0x00,
    0x00,
    0xFE,
    0xFE,
    0xFE,
    0xFF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xDF,
    0xCF,
    0xCF,
    0xC7,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xC0,
    0xC0,
    0xDE,
    0x1E,
    0x1E,
    0x9F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x0F,
    0x80,
    0xF0,
    0xFE,
    0xFF,
    0xFF,
    0x7F,
    0x7F,
    0x38,
    0x3B,
    0x3F,
    0x7F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFE,
    0xD0,
    0x00,
    0xE0,
    0xFF,
    0xFF,
    0xFF,
    0xC3,
    0x1F,
    0x3F,
    0x7F,
    0x3F,
    0x3F,
    0x3F,
    0x01,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xF7,
    0xC7,
    0xC7,
    0xC7,
    0xC7,
    0xC3,
    0xC3,
    0xC1,
    0xC1,
    0x00,
    0x01,
    0x03,
    0x03,
    0x03,
    0x07,
    0x87,
    0x87,
    0x87,
    0xC7,
    0xC7,
    0xC7,
    0xC3,
    0xC3,
    0xC3,
    0x81,
    0x80,
    0x82,
    0x03,
    0x03,
    0x03,
    0x03,
    0x81,
    0x81,
    0x80,
    0x80,
    0x80,
    0x00,
    0x00,
    0x03,
    0x07,
    0x03,
    0x03,
    0x83,
    0x81,
    0x80,
    0x81,
    0x83,
    0x03,
    0x03,
    0x83,
    0x81,
    0x81,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x01,
    0x00,
    0x00,
    0x80,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x83,
    0x03,
    0x01,
    0x01,
    0x00,
    0xF0,
    0xFC,
    0xFE,
    0xFF,
    0xFF,
    0xF7,
    0x07,
    0x03,
    0x03,
    0x03,
    0x07,
    0x0F,
    0x1F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x80,
    0x03,
    0x1F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x34,
    0x00,
    0xE0,
    0xF8,
    0xFF,
    0xFF,
    0xFF,
    0xBF,
    0x07,
    0x01,
    0x07,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE7,
    0xE3,
    0xE3,
    0x01,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFB,
    0xE3,
    0x87,
    0x87,
    0x87,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x7F,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0F,
    0x3F,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFC,
    0xF0,
    0xE0,
    0xE0,
    0xE0,
    0xF8,
    0xFF,
    0x7F,
    0x7F,
    0x3F,
    0x1F,
    0x00,
    0x00,
    0x00,
    0x03,
    0x1F,
    0xFF,
    0xFF,
    0xFF,
    0xF8,
    0xFF,
    0xFF,
    0xFF,
    0x7F,
    0x3F,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFD,
    0xF9,
    0xF1,
    0xF1,
    0xE1,
    0xE1,
    0xF1,
    0xF1,
    0xE0,
    0x60,
    0x00,
    0x00,
    0xFF,
    0xFF,
    0xFF,
    0xF7,
    0xC7,
    0x07,
    0x0F,
    0x3F,
    0x7F,
    0xFF,
    0xFE,
    0xFF,
    0xFF,
    0xFC,
    0xF8,
    0xF0,
    0xE0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
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
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
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
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
};  //71x41

int length = 10;
int posX, posY;
int apple_posX = random(10, 119), apple_posY = random(20, 55);
int direction = 1;  // 1 - right; 2 - left; 3 - down; 4 - up
int head_posX = 0, tail_posX = 0;
int head_posY = 11, tail_posY = 0;

//byte posX_arr[129] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//byte posY_arr[129] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

int turn_pos_arr[2][100];  //[a][b] a - x/y; b - turn num;
int snake_pos_arr[2][450];  // [a][b] a - x/y; b - dot amount;
//int snake_pos_y_arr[450];
//int snake_pos_x_arr[450];
int oldest_snake_pos_id = 99;
int tail_dir = 1;  // 1 - right; 2 - left; 3 - down; 4 - up
bool allow_next_click = true;
int next_tail_dir[100];
int turn_amount;
int turn_array_id;
bool allow_clear_tail = true;
bool snake_died = false;
int hi_snake_skore = 32;

void snake()
{
  uint32_t refresh_timer;
  uint32_t move_timer;
  exit_to_menu = false;
  snake_died = false;
  direction = 1;

  tail_posX = 10;
  tail_posY = 20;
  head_posX = 20;
  head_posY = 20;

  /*
  byte write_id = 0;
  snake_pos_x_arr[write_id] = 10;
  snake_pos_x_arr[write_id++] = 11;
  snake_pos_x_arr[write_id++] = 12;
  snake_pos_x_arr[write_id++] = 13;
  snake_pos_x_arr[write_id++] = 14;
  snake_pos_x_arr[write_id++] = 15;
  snake_pos_x_arr[write_id++] = 16;
  snake_pos_x_arr[write_id++] = 17;
  snake_pos_x_arr[write_id++] = 18;
  snake_pos_x_arr[write_id++] = 19;

  write_id = 0;
  snake_pos_y_arr[write_id] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  snake_pos_y_arr[write_id++] = 30;
  */

  oled.clear();
  oled.roundRect(0, 9, 127, 40, OLED_STROKE);
  oled.setCursorXY(20, 45);
  oled.print("BEST SCORE : ");
  oled.print(hi_snake_skore);
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
  oled.fastLineH(25, 15, 65);

  oled.dot(90, 25);

  oled.update();
  pause = false;

  while (true)
  {
    buttons_tick();
    if (right.click())
    {
      snake_died = false;
      break;
    }
    /*
    if (left.click())
    {
      menu();
      return;
      break;
    }
    */
  }

  while (true)
  {
    //Serial.println(mode);
    global_loop();
    buttons_tick();

    if (ok.click())
    {
      pause = !pause;
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

    if (millis() - refresh_timer >= 1000 / 30)  //1000 / REFRESH_RATE
    {
      //draw_battery(75);
      oled.clear();
      if (pause == true)
      {
        oled.roundRect(0, 10, 127, 40, OLED_CLEAR);
        //oled.roundRect(0, 10, 127, 40, OLED_STROKE);
        oled.textMode(BUF_ADD);
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
      oled.home();
      oled.textMode(BUF_REPLACE);
      oled.setScale(1);
      oled.print("Skore: ");
      oled.print(length - 10);

      oled.rect(0, 10, 127, 63, OLED_STROKE);

      oled.dot(apple_posX, apple_posY, 1);

      for (int id = 0; id < 400; id++)
      {
        oled.dot(snake_pos_arr[0][id], snake_pos_arr[1][id], 1);
      }
      draw_battery(battery_charge);
      oled.update();
    }

    if (head_posX == apple_posX && head_posY == apple_posY)
    {
      allow_clear_tail = false;
      length++;
      randomSeed(millis());

      apple_posX = random(10, 120);  //3.126
      apple_posY = random(15, 58);  //12.62
    }
    if (millis() - move_timer >= 25 && pause != true)
    {
      move_timer = millis();
      //direction = 1;
      if (direction == 1 && head_posX < 127)
      {
        head_posX++;
        move_pos_array();
        //Serial.println(head_posX);

        if (allow_clear_tail == true)
        {
          switch (tail_dir)
          {
            case 1:
              tail_posX++;
              break;
            case 2:
              tail_posX--;
              break;
            case 3:
              tail_posY++;
              break;
            case 4:
              tail_posY--;
              break;
          }
        }
      }
      if (direction == 3 && head_posY < 63)
      {
        head_posY++;
        move_pos_array();

        if (allow_clear_tail == true)
        {
          switch (tail_dir)
          {
            case 1:
              tail_posX++;
              break;
            case 2:
              tail_posX--;
              break;
            case 3:
              tail_posY++;
              break;
            case 4:
              tail_posY--;
              break;
          }
        }
      }

      if (direction == 2 && head_posX > 0)
      {
        head_posX--;
        move_pos_array();

        if (allow_clear_tail == true)
        {
          switch (tail_dir)
          {
            case 1:
              tail_posX++;
              break;
            case 2:
              tail_posX--;
              break;
            case 3:
              tail_posY++;
              break;
            case 4:
              tail_posY--;
              break;
          }
        }
      }

      if (direction == 4 && head_posY > 10)
      {
        head_posY--;
        move_pos_array();

        if (allow_clear_tail == true)
        {
          switch (tail_dir)
          {
            case 1:
              tail_posX++;
              break;
            case 2:
              tail_posX--;
              break;
            case 3:
              tail_posY++;
              break;
            case 4:
              tail_posY--;
              break;
          }
        }
      }
    }
    for (int id = 3; id < 400; id++)
    {
      if (head_posX == snake_pos_arr[0][id] && head_posY == snake_pos_arr[1][id])
      {
        snake_died = true;
      }
    }

    if (snake_pos_arr[0][0] == 127 || snake_pos_arr[1][0] == 63 || snake_pos_arr[0][0] == 0 || snake_pos_arr[1][0] == 10)
    {
      snake_died = true;
    }

    if (head_posX == 127 || head_posY == 63 || head_posX == 0 || head_posY == 10)
    {
      snake_died = true;
    }

    if (head_posX == 127 || head_posY == 63 || head_posX == 0 || head_posY == 10)
    {
      snake_died = true;
    }

    if (snake_died == true)  //if (pizdets == true)
    {
      oled.textMode(BUF_ADD);
      oled.roundRect(1, 11, 126, 40, OLED_CLEAR);
      //oled.roundRect(0, 10, 127, 40, OLED_STROKE);
      oled.setScale(2);
      oled.setCursor(9, 2);
      oled.print("GAME OVER");
      oled.setScale(1);
      oled.update();
      delay(1000);

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
        oled.update();
        if (right.click())
        {
          length = 10;

          randomSeed(millis());
          apple_posX = random(10, 119);
          apple_posY = random(20, 55);
          direction = 1;  // 1 - right; 2 - left; 3 - down; 4 - up

          for (int id = 0; id <= 39; id++)
          {
            turn_pos_arr[0][id] = 0;
            turn_pos_arr[1][id] = 0;
            next_tail_dir[id] = 0;
          }
          turn_amount = 0;
          turn_array_id = 0;
          allow_clear_tail = true;

          snake_died = false;
          direction = 1;

          tail_posX = 10;
          tail_posY = 20;
          head_posX = 20;
          head_posY = 20;
          tail_dir = 1;
          oled.clear();
          oled.rect(0, 10, 127, 63, OLED_STROKE);
          
          oled.home();
          oled.print("Skore: ");
          oled.print(length - 10);
          oled.update();
          break;
        }
        if (left.click())
        {
          snake_died = false;
          exit_to_menu = true;
          break;
        }
      }
    }

    if (exit_to_menu == true)
    {
      menu();
      break;
    }

    if (turn_amount == 0)
    {
      for (int id = 1; id <= 39; id++)
      {
        turn_pos_arr[0][id] = 0;
        turn_pos_arr[1][id] = 0;
      }
      turn_array_id = 0;
    }
    if (turn_pos_arr[0][1] == 0 && turn_pos_arr[1][1] == 0)
    {
      turn_array_id = 0;
    }

    if (left.press() && direction != 2 && direction != 1)
    {
      turn_array_id++;
      turn_amount++;
      turn_pos_arr[0][turn_array_id] = head_posX;
      turn_pos_arr[1][turn_array_id] = head_posY;
      direction = 2;
      if (allow_next_click == true || 1 == 1)
      {
        allow_next_click = false;
        next_tail_dir[turn_array_id] = direction;
      }
    }
    if (right.press() && direction != 1 && direction != 2)
    {
      turn_array_id++;
      turn_amount++;
      turn_pos_arr[0][turn_array_id] = head_posX;
      turn_pos_arr[1][turn_array_id] = head_posY;
      direction = 1;
      if (allow_next_click == true || 1 == 1)
      {
        allow_next_click = false;
        next_tail_dir[turn_array_id] = direction;
      }
    }
    if (down.press() && direction != 3 && direction != 4)
    {
      turn_array_id++;
      turn_amount++;
      turn_pos_arr[0][turn_array_id] = head_posX;
      turn_pos_arr[1][turn_array_id] = head_posY;
      direction = 3;
      if (allow_next_click == true || 1 == 1)
      {
        allow_next_click = false;
        next_tail_dir[turn_array_id] = direction;
      }
    }
    if (up.press() && direction != 4 && direction != 3)
    {
      turn_array_id++;
      turn_amount++;
      turn_pos_arr[0][turn_array_id] = head_posX;
      turn_pos_arr[1][turn_array_id] = head_posY;
      direction = 4;
      if (allow_next_click == true || 1 == 1)
      {
        allow_next_click = false;
        next_tail_dir[turn_array_id] = direction;
      }
    }
    if (tail_posX == turn_pos_arr[0][1] && tail_posY == turn_pos_arr[1][1])
    {
      for (int id = 1; id <= turn_array_id + 1; id++)
      {
        turn_pos_arr[0][id] = turn_pos_arr[0][id + 1];
        turn_pos_arr[1][id] = turn_pos_arr[1][id + 1];
      }
      if (turn_array_id > 0)
      {
        turn_array_id--;
      }
      turn_amount--;
      tail_dir = next_tail_dir[1];

      for (int id = 1; id <= turn_array_id + 1; id++)
      {
        next_tail_dir[id] = next_tail_dir[id + 1];
      }
      allow_next_click = true;
    }
  }
}

void move_pos_array(void)
{
  if (length < 449)
  {
    for (byte id = 0; id < 2; id++)
    {
      for (int id2 = 449; id2 > 0; id2--)
      {
        snake_pos_arr[id][id2] = snake_pos_arr[id][id2 - 1];
      }
    }
    if (allow_clear_tail == true)
    {
      for (byte id = 0; id < 2; id++)
      {
        for (int id2 = 449; id2 > length; id2--)
        {
          snake_pos_arr[id][id2] = 0;
        }
        snake_pos_arr[id][0] = (id == 0) ? head_posX : head_posY;
      }
    }
    else
    {
      allow_clear_tail = true;
    }
  }
}
