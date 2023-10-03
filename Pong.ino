#define ROCKET_LENGTH 15  // multiple to 5
#define ROCKET_STEP 5
#define BALL_SIZE 2
#define X_OFFSET 5

int ball_speed;
int enemy_speed;
bool allow_move;
int move_x = 1, move_y = 2;
int pong_enemy_count;
int pong_my_count;

int ball_pos[2];  // x/y;

int8_t my_rocket_pos = 31;
int8_t enemy_rocket_pos = 31;

int8_t times_faster = 2;

void pong()
{
  uint32_t move_ball_timer;
  uint32_t ai_timer;
  uint32_t ball_angle_timer;

  up.setStepTimeout(60);
  down.setStepTimeout(60);

  oled.clear();
  oled.roundRect(0, 9, 127, 40, OLED_STROKE);
  oled.setCursorXY(20, 45);
  oled.print(F("WIN GOAL: 10:10"));
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
  oled.fastLineV(0 + X_OFFSET + 2, 15, 15 + 8);
  oled.fastLineV(127 - X_OFFSET - 2, 19, 19 + 8);
  oled.circle(50, 25, 1, OLED_FILL);
  oled.update();

  while (true)
  {
    draw_battery(battery_charge);
    oled.update();
    buttons_tick();
    if (right.click() || ok.click())
    {
      my_rocket_pos = 31;
      enemy_rocket_pos = 31;
      pause = false;

      ball_pos[0] = 64;
      ball_pos[1] = 32;
      pong_enemy_count = 0;
      pong_my_count = 0;
      break;
    }

    if (left.click())
    {
      up.setStepTimeout(200);
      down.setStepTimeout(200);
      menu();
      return;
      break;
    }
  }

  while (true)
  {
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
      up.setStepTimeout(200);
      down.setStepTimeout(200);
      menu();
      return;
      break;
    }
    if (millis() - refresh_timer >= 1000 / REFRESH_RATE)  //1000 / REFRESH_RATE
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
      oled.home();
      oled.setScale(1);
      oled.print(pong_my_count);
      oled.print(":");
      oled.print(pong_enemy_count);
      //oled.dot(ball_pos[0], ball_pos[1], 1);
      draw_battery(battery_charge);
      /*
      oled.dot(ball_pos[0] / 10, ball_pos[1] / 10, 1);
      oled.dot(ball_pos[0] / 10 + 1, ball_pos[1] / 10 + 1, 1);
      oled.dot(ball_pos[0] / 10 + 1, ball_pos[1] / 10 + 2, 1);
      oled.dot(ball_pos[0] / 10 - 1, ball_pos[1] / 10 + 2, 1);
      oled.dot(ball_pos[0] / 10 - 1, ball_pos[1] / 10 + 1, 1);
      oled.dot(ball_pos[0] / 10 - 1, ball_pos[1] / 10, 1);
      oled.dot(ball_pos[0] / 10 + 1, ball_pos[1] / 10, 1);
      oled.dot(ball_pos[0] / 10, ball_pos[1] / 10 + 1, 1);
      oled.dot(ball_pos[0] / 10, ball_pos[1] / 10 + 2, 1);
*/

      oled.circle(ball_pos[0], ball_pos[1], BALL_SIZE, OLED_FILL);

      oled.fastLineV(0 + X_OFFSET, my_rocket_pos, my_rocket_pos + ROCKET_LENGTH);
      oled.fastLineV(127 - X_OFFSET, enemy_rocket_pos, enemy_rocket_pos + ROCKET_LENGTH);

      oled.update();
    }
    //Serial.println(ball_pos[1] / 10);
    if (millis() - move_ball_timer >= 40 / times_faster && pause != true)
    {
      move_ball_timer = millis();

      ball_pos[0] += move_x;
      ball_pos[1] += move_y;

      if (ball_pos[1] > 63 || ball_pos[1] < 10)
      {
        move_y = -move_y;
      }
      if (ball_pos[0] >= 127 - X_OFFSET - BALL_SIZE || ball_pos[0] <= 0 + X_OFFSET + BALL_SIZE)
      {
        for (byte id = 0; id < ROCKET_LENGTH; id++)
        {
          if (ball_pos[0] < 63)
          {
            if (my_rocket_pos + id == ball_pos[1])
            {
              tone(12, 450, 50);
              if (id < 2)
              {
                move_x = 3;
                move_y = 1;

                times_faster = 2;
              }
              else if (id >= 2 && id < 5)
              {
                move_x = 2;
                move_y = 1;
                times_faster = 3;
              }
              else if (id >= 5 && id < 8)
              {
                if (times_faster != 5)
                {
                  ball_angle_timer = millis();
                }
                move_x = 1;
                move_y = 0.5;
                times_faster = 5;
              }
              else if (id >= 8 && id < 11)
              {
                move_x = 1;
                move_y = 2;
                times_faster = 3;
              }
              else if (id >= 11)
              {
                move_x = 1;
                move_y = 3;
                times_faster = 2;
              }
              //move_x = -move_x;
            }
          }
          else if (ball_pos[0] > 63)
          {
            if (enemy_rocket_pos + id == ball_pos[1])
            {
              tone(12, 450, 50);
              if (id < 2)
              {
                move_x = 3;
                move_y = 1;

                times_faster = 2;
              }
              else if (id >= 2 && id < 5)
              {
                move_x = 2;
                move_y = 1;
                times_faster = 3;
              }
              else if (id >= 5 && id < 8)
              {
                if (times_faster != 5)
                {
                  ball_angle_timer = millis();
                }
                move_x = 1;
                move_y = 0.5;
                times_faster = 5;
              }
              else if (id >= 8 && id < 11)
              {
                move_x = 1;
                move_y = 2;
                times_faster = 3;
              }
              else if (id >= 11)
              {
                move_x = 1;
                move_y = 3;
                times_faster = 2;
              }
              move_x = -move_x;
            }
          }
        }
      }
      if (ball_pos[0] > 127 - X_OFFSET)
      {
        int melody[] = {NOTE_E7, NOTE_B6, NOTE_G6, NOTE_D7, NOTE_E7, NOTE_FS7, NOTE_G7, NOTE_A7};
        int noteDurations[] = {150, 150, 150, 150, 150, 150, 150, 300};

        // Play the winner melody
        for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++)
        {
          tone(12, melody[i], noteDurations[i]);
          delay(noteDurations[i]);
          noTone(12);
        }
        pong_my_count++;

        move_x = 1;
        move_y = 2;
        times_faster = 3;

        bool side = random(2);
        side ? move_x = -move_x : move_x = move_x;

        ball_pos[0] = 64;
        ball_pos[1] = random(15, 60);

        my_rocket_pos = 31;
        enemy_rocket_pos = 31;
        if (pong_my_count >= 10)
        {
          oled.home();
          oled.setScale(1);
          oled.print(pong_my_count);
          oled.print(":");
          oled.print(pong_enemy_count);
          oled.textMode(BUF_ADD);
          oled.roundRect(0, 10, 127, 40, OLED_CLEAR);
          oled.roundRect(0, 10, 127, 40, OLED_STROKE);
          oled.setScale(2);
          oled.setCursor(18, 2);
          oled.print("YOU WON!");
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
          oled.update();
          while (true)
          {
            buttons_tick();
            if (right.click() || ok.click())
            {
              my_rocket_pos = 31;
              enemy_rocket_pos = 31;
              pause = false;

              ball_pos[0] = 64;
              ball_pos[1] = random(15, 60);
              pong_enemy_count = 0;
              pong_my_count = 0;
              break;
            }
            else if (left.click())
            {
              up.setStepTimeout(200);
              down.setStepTimeout(200);
              menu();
              return;
              break;
            }
          }
        }
      }
      if (ball_pos[0] < 0 + X_OFFSET)
      {
        tone(12, 250, 200);
        delay(200);
        tone(12, 70, 350);
        pong_enemy_count++;

        move_x = 1;
        move_y = 2;
        times_faster = 3;

        bool side = random(2);
        side ? move_x = -move_x : move_x = move_x;

        ball_pos[0] = 64;
        ball_pos[1] = random(15, 60);

        my_rocket_pos = 31;
        enemy_rocket_pos = 31;
        delay(1000);

        if (pong_enemy_count >= 10)
        {
          oled.home();
          oled.setScale(1);
          oled.print(pong_my_count);
          oled.print(":");
          oled.print(pong_enemy_count);
          oled.textMode(BUF_ADD);
          oled.roundRect(0, 10, 127, 40, OLED_CLEAR);
          oled.roundRect(0, 10, 127, 40, OLED_STROKE);
          oled.setScale(2);
          oled.setCursor(14, 2);
          oled.print("YOU LOST!");
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
          oled.update();
          while (true)
          {
            buttons_tick();
            if (right.click() || ok.click())
            {
              my_rocket_pos = 31;
              enemy_rocket_pos = 31;
              pause = false;

              ball_pos[0] = 64;
              ball_pos[1] = 32;
              pong_enemy_count = 0;
              pong_my_count = 0;
              break;
            }
            else if (left.click())
            {
              up.setStepTimeout(200);
              down.setStepTimeout(200);
              menu();
              return;
              break;
            }
          }
        }
      }
    }

    if (down.press() || down.step())
    {
      if (my_rocket_pos + ROCKET_LENGTH < 63)
      {
        my_rocket_pos += ROCKET_STEP;
      }
      if (my_rocket_pos > 64 - ROCKET_LENGTH)
      {
        my_rocket_pos = 64 - ROCKET_LENGTH;
      }
    }
    if (up.press() || up.step())
    {
      if (my_rocket_pos > 0)
      {
        my_rocket_pos -= ROCKET_STEP;
      }
      if (my_rocket_pos < 10)
      {
        my_rocket_pos = 10;
      }
    }
    if (millis() - ai_timer >= 13)  //13
    {
      ai_timer = millis();
      if (millis() - ball_angle_timer >= 1000 && times_faster == 5)
      {
        if (enemy_rocket_pos + ROCKET_LENGTH / 3 > ball_pos[1])
        {
          enemy_rocket_pos -= 1;
        }
        else
        {
          enemy_rocket_pos += 1;
        }
      }
      else
      {
        if (enemy_rocket_pos + ROCKET_LENGTH / 2 > ball_pos[1])
        {
          enemy_rocket_pos -= 1;
        }
        else
        {
          enemy_rocket_pos += 1;
        }
      }
      if (enemy_rocket_pos > 63 - ROCKET_LENGTH)
      {
        enemy_rocket_pos = 63 - ROCKET_LENGTH;
      }
      else if (enemy_rocket_pos < 10)
      {
        enemy_rocket_pos = 10;
      }
    }
  }
}
