#define GAME_AMOUNT 4
#define START_AMOUNT 4

byte pointer = 1;
byte row_y_pos_arr[] = {11, 22, 33, 44, 55};

String entered_name;

void start_menu()
{
  up.setHoldTimeout(100);
  down.setHoldTimeout(100);
  ok.setHoldTimeout(1000);
  left.setHoldTimeout(1000);
  right.setHoldTimeout(1000);
  buttons_tick();

  if (millis() - refresh_timer >= 1000 / REFRESH_RATE)
  {
    oled.clear();

    draw_battery(battery_charge);
    refresh_timer = millis();
    oled.setScale(1);
    byte start_x = 5;
    oled.textMode(BUF_ADD);

    oled.setCursorXY(start_x, row_y_pos_arr[0]);
    oled.print("Play!");
    oled.setCursorXY(start_x, row_y_pos_arr[1]);
    if (beep_is_active == true)
    {
      oled.print("Beep - ON");
    }
    else
    {
      oled.print("Beep - OFF");
    }
    oled.setCursorXY(start_x, row_y_pos_arr[2]);
    oled.print("Change name");
    oled.setCursorXY(start_x, row_y_pos_arr[3]);
    oled.print("About");

    pointer_print(pointer);
    oled.update();
  }
  if (down.press() || down.step())
  {
    pointer++;

    if (pointer > GAME_AMOUNT)
    {
      pointer = GAME_AMOUNT;
    }
  }
  if (up.press() || up.step())
  {
    pointer--;

    if (pointer < 1)
    {
      pointer = 1;
    }
  }
  if (ok.click() || right.click())
  {
    switch (pointer)
    {
      case 1:
        menu_active = 2;
        break;
      case 2:
        beep_is_active = !beep_is_active;
        if (beep_is_active == true)
        {
          tone(12, 450, 50);
        }
        EEPROM.put(500, beep_is_active);
        break;
      case 3:
        name_picker();
        break;
      case 4:
        about();
        break;
    }
  }
}

void games_menu()
{
  buttons_tick();

  up.setHoldTimeout(100);
  down.setHoldTimeout(100);
  ok.setHoldTimeout(1000);
  left.setHoldTimeout(1000);
  right.setHoldTimeout(1000);

  down.setStepTimeout(200);

  if (millis() - refresh_timer >= 1000 / REFRESH_RATE)
  {
    oled.clear();

    oled.setScale(1);
    oled.setCursor(3, 0);
    oled.print("<");
    oled.setCursorXY(4, 0);
    oled.print("-");
    oled.setCursorXY(9, 0);
    oled.print("-");
    oled.setCursor(17, 0);
    oled.print("BACK");

    draw_battery(battery_charge);
    refresh_timer = millis();
    oled.setScale(1);
    byte start_x = 5;
    oled.textMode(BUF_ADD);

    oled.setCursorXY(start_x, row_y_pos_arr[0]);
    oled.print("Snake");
    oled.setCursorXY(start_x, row_y_pos_arr[1]);
    oled.print("Google dino");
    oled.setCursorXY(start_x, row_y_pos_arr[2]);
    oled.print("Pong");
    oled.setCursorXY(start_x, row_y_pos_arr[3]);
    oled.print("Beeper");

    pointer_print(pointer);
    oled.update();
  }
  if (down.press() || down.step())
  {
    pointer++;

    if (pointer > GAME_AMOUNT)
    {
      pointer = GAME_AMOUNT;
    }
  }
  if (up.press() || up.step())
  {
    pointer--;

    if (pointer < 1)
    {
      pointer = 1;
    }
  }
  if (left.click())
  {
    menu_active = 1;
  }
  if (ok.click() || right.click())
  {
    switch (pointer)
    {
      case 1:
        snake();
        break;
      case 2:
        google_dino();
        break;
      case 3:
        pong();
        break;
      case 4:
        beeper();
        break;
    }
  }
}

void pointer_print(int line) { oled.roundRect(0, row_y_pos_arr[line - 1] - 2, 127, row_y_pos_arr[line - 1] + 8, OLED_STROKE); }
