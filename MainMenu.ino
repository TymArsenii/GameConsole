#define APPS_AMOUNT 3

byte pointer = 1;
byte row_y_pos_arr[] = {11, 22, 33, 44, 55};

void menu()
{
  buttons_tick();
  down.setStepTimeout(200);

  if (millis() - refresh_timer >= 1000 / REFRESH_RATE)
  {
    oled.clear();
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

    pointer_print(pointer);
    oled.update();
  }
  if (down.press() || down.step())
  {
    pointer++;

    if (pointer > APPS_AMOUNT)
    {
      pointer = APPS_AMOUNT;
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
        snake();
        break;
      case 2:
        google_dino();
        break;
      case 3:
        pong();
        break;
    }
  }
}

void pointer_print(int line) { oled.roundRect(0, row_y_pos_arr[line - 1] - 2, 127, row_y_pos_arr[line - 1] + 8, OLED_STROKE); }
