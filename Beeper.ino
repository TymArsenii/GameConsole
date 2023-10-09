bool up_is_active;
bool down_is_active;
bool right_is_active;
bool left_is_active;

bool is_exit;

void beeper()
{
  is_exit = false;
  while (true)
  {
    buttons_tick();
    if (millis() - refresh_timer >= REFRESH_RATE)
    {
      oled.clear();

      oled.drawBitmap(28, 20, button_left, 20, 25);
      oled.drawBitmap(81, 20, button_right, 20, 25);
      oled.drawBitmap(53, 43, button_down, 25, 20);
      oled.drawBitmap(53, 0, button_up, 25, 20);

      if (up_is_active)
      {
        oled.rect(60, 5, 70, 15, OLED_FILL);
      }
      if (down_is_active)
      {
        oled.rect(60, 47, 70, 57, OLED_FILL);
      }
      if (left_is_active)
      {
        oled.rect(43, 27, 33, 37, OLED_FILL);
      }
      if (right_is_active)
      {
        oled.rect(95, 27, 85, 37, OLED_FILL);
      }
      if (is_exit == true)
      {
        oled.clear();
        //oled.roundRect(0, 10, 127, 40, OLED_CLEAR);
        oled.roundRect(0, 10, 127, 40, OLED_STROKE);
        oled.textMode(BUF_ADD);
        oled.setScale(2);
        oled.setCursor(35, 2);
        oled.print("EXIT?");
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
      draw_battery(100);

      oled.update();
    }
    if (ok.click())
    {
      is_exit = !is_exit;
    }
    if (right.click())
    {
      if (is_exit == true)
      {
        is_exit = false;
      }
    }
    if (left.click())
    {
      if (is_exit == true)
      {
        return;
      }
    }
    if (is_exit != true)
    {
      if (up.pressing())
      {
        up_is_active = true;
        tone(12, 1000);
      }
      if (up.release())
      {
        up_is_active = false;
        noTone(12);
      }

      if (down.pressing())
      {
        down_is_active = true;
        tone(12, 180);
      }
      if (down.release())
      {
        down_is_active = false;
        noTone(12);
      }

      if (left.pressing())
      {
        left_is_active = true;
        tone(12, 650);
      }
      if (left.release())
      {
        left_is_active = false;
        noTone(12);
      }

      if (right.pressing())
      {
        right_is_active = true;
        tone(12, 400);
      }
      if (right.release())
      {
        right_is_active = false;
        noTone(12);
      }
    }
  }
}
