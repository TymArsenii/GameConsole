#define APPS_AMOUNT 3

byte pointer = 1;
byte row_y_pos_arr[] = {11, 22, 33, 44, 55};

void menu()
{
  buttons_tick();

  if (millis() - refresh_timer >= 1000 / REFRESH_RATE)
  {
    oled.clear();
    draw_battery(battery_charge);
    refresh_timer = millis();
    oled.setScale(1);
    byte start_x = 5;
    byte start_y = 0;
    oled.textMode(BUF_ADD);

    oled.setCursorXY(start_x, row_y_pos_arr[0]);
    oled.print("Snake");
    oled.setCursorXY(start_x, row_y_pos_arr[1]);
    oled.print("Google dino");
    oled.setCursorXY(start_x, row_y_pos_arr[2]);
    oled.print("Pong");
    /*
    oled.setCursorXY(start_x, row_y_pos_arr[2]);
    oled.print("Google dino");
    oled.setCursorXY(start_x, row_y_pos_arr[3]);
    oled.print("Google dino");
    oled.setCursorXY(start_x, row_y_pos_arr[4]);
    oled.print("Google dino");
    */

    pointer_print(pointer);
    oled.update();
  }
  if (down.click())
  {
    pointer++;

    if (pointer > APPS_AMOUNT)
    {
      pointer = APPS_AMOUNT;
    }
  }
  if (up.click())
  {
    pointer--;

    if (pointer < 1)
    {
      pointer = 1;
    }
  }
  if (ok.click())
  {
    if (pointer == 1)
    {
      snake();
    }
    else if (pointer == 2)
    {
      google_dino();
    }
  }
}

void pointer_print(int line) 
{ 
  oled.roundRect(0, row_y_pos_arr[line-1]-2, 127, row_y_pos_arr[line-1]+8, OLED_STROKE); 
}
