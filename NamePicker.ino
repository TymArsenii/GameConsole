byte y_pos[4] = {13, 26, 40, 52};
byte x_pos[7] = {3, 22, 40, 59, 77, 96, 114};
byte x_pos_xyz[6] = {3, 25, 47, 70, 92, 114};
byte cursor_poss[16] = {37, 42, 49, 55, 61, 66, 72, 78, 84, 90, 96, 102, 108, 114, 120, 126};

int8_t pointer_x = 0;
int8_t pointer_y = 0;
bool pointer_type;
byte letters_amount;
uint32_t pointer_timer;

void name_picker()
{
  up.setHoldTimeout(100);
  down.setHoldTimeout(100);
  ok.setHoldTimeout(1500);
  left.setHoldTimeout(100);
  right.setHoldTimeout(100);
  entered_name = "";
  while (true)
  {
    buttons_tick();
    if (millis() - refresh_timer >= REFRESH_RATE)
    {
      oled.clear();
      //draw_battery(100);
      oled.home();
      oled.setScale(1);
      oled.print("Name: ");
      oled.print(entered_name);
      oled.drawBitmap(0, 0, abc, 128, 64);
      draw_picker(pointer_x, pointer_y);
      draw_pointer(letters_amount);
      oled.update();
    }
    if (ok.hold())
    {
      oled.textMode(BUF_REPLACE);
      if (entered_name != "")
      {
        name = entered_name;
        int len = entered_name.length();
        EEPROM.write(30, len);
        for (int i = 0; i < len; i++)
        {
          EEPROM.write(100 + 1 + i, entered_name[i]);
        }
      }
      //EEPROM.put(100, entered_name);
      oled.home();
      oled.setScale(1);
      oled.print("                    ");
      oled.home();
      if (entered_name != "")
      {
        oled.print("Saved!");
      }
      else
      {
        oled.print("Exit");
      }
      oled.update();
      delay(1000);
      return;
    }
    if (ok.click())
    {
      bool mode = true;
      if (pointer_x == 5 && pointer_y == 3)
      {
        if (letters_amount > 0)
        {
          mode = false;
          letters_amount--;
          entered_name.remove(entered_name.length() - 1);
        }
      }
      if (letters_amount < 10 && mode != false)
      {
        letters_amount++;
        if (letters_amount == 1)
        {
          if (pointer_x == 0 && pointer_y == 0)
          {
            entered_name += "A";
          }
          if (pointer_x == 1 && pointer_y == 0)
          {
            entered_name += "B";
          }
          if (pointer_x == 2 && pointer_y == 0)
          {
            entered_name += "C";
          }
          if (pointer_x == 3 && pointer_y == 0)
          {
            entered_name += "D";
          }
          if (pointer_x == 4 && pointer_y == 0)
          {
            entered_name += "E";
          }
          if (pointer_x == 5 && pointer_y == 0)
          {
            entered_name += "F";
          }
          if (pointer_x == 6 && pointer_y == 0)
          {
            entered_name += "G";
          }
          if (pointer_x == 0 && pointer_y == 1)
          {
            entered_name += "H";
          }
          if (pointer_x == 1 && pointer_y == 1)
          {
            entered_name += "I";
          }
          if (pointer_x == 2 && pointer_y == 1)
          {
            entered_name += "J";
          }
          if (pointer_x == 3 && pointer_y == 1)
          {
            entered_name += "K";
          }
          if (pointer_x == 4 && pointer_y == 1)
          {
            entered_name += "L";
          }
          if (pointer_x == 5 && pointer_y == 1)
          {
            entered_name += "M";
          }
          if (pointer_x == 6 && pointer_y == 1)
          {
            entered_name += "N";
          }
          if (pointer_x == 0 && pointer_y == 2)
          {
            entered_name += "O";
          }
          if (pointer_x == 1 && pointer_y == 2)
          {
            entered_name += "P";
          }
          if (pointer_x == 2 && pointer_y == 2)
          {
            entered_name += "Q";
          }
          if (pointer_x == 3 && pointer_y == 2)
          {
            entered_name += "R";
          }
          if (pointer_x == 4 && pointer_y == 2)
          {
            entered_name += "S";
          }
          if (pointer_x == 5 && pointer_y == 2)
          {
            entered_name += "T";
          }
          if (pointer_x == 6 && pointer_y == 2)
          {
            entered_name += "U";
          }
          if (pointer_x == 0 && pointer_y == 3)
          {
            entered_name += "V";
          }
          if (pointer_x == 1 && pointer_y == 3)
          {
            entered_name += "W";
          }
          if (pointer_x == 2 && pointer_y == 3)
          {
            entered_name += "X";
          }
          if (pointer_x == 3 && pointer_y == 3)
          {
            entered_name += "Y";
          }
          if (pointer_x == 4 && pointer_y == 3)
          {
            entered_name += "Z";
          }
        }
        else
        {
          if (pointer_x == 0 && pointer_y == 0)
          {
            entered_name += "a";
          }
          if (pointer_x == 1 && pointer_y == 0)
          {
            entered_name += "b";
          }
          if (pointer_x == 2 && pointer_y == 0)
          {
            entered_name += "c";
          }
          if (pointer_x == 3 && pointer_y == 0)
          {
            entered_name += "d";
          }
          if (pointer_x == 4 && pointer_y == 0)
          {
            entered_name += "e";
          }
          if (pointer_x == 5 && pointer_y == 0)
          {
            entered_name += "f";
          }
          if (pointer_x == 6 && pointer_y == 0)
          {
            entered_name += "g";
          }
          if (pointer_x == 0 && pointer_y == 1)
          {
            entered_name += "h";
          }
          if (pointer_x == 1 && pointer_y == 1)
          {
            entered_name += "i";
          }
          if (pointer_x == 2 && pointer_y == 1)
          {
            entered_name += "j";
          }
          if (pointer_x == 3 && pointer_y == 1)
          {
            entered_name += "k";
          }
          if (pointer_x == 4 && pointer_y == 1)
          {
            entered_name += "l";
          }
          if (pointer_x == 5 && pointer_y == 1)
          {
            entered_name += "m";
          }
          if (pointer_x == 6 && pointer_y == 1)
          {
            entered_name += "n";
          }
          if (pointer_x == 0 && pointer_y == 2)
          {
            entered_name += "o";
          }
          if (pointer_x == 1 && pointer_y == 2)
          {
            entered_name += "p";
          }
          if (pointer_x == 2 && pointer_y == 2)
          {
            entered_name += "q";
          }
          if (pointer_x == 3 && pointer_y == 2)
          {
            entered_name += "r";
          }
          if (pointer_x == 4 && pointer_y == 2)
          {
            entered_name += "s";
          }
          if (pointer_x == 5 && pointer_y == 2)
          {
            entered_name += "t";
          }
          if (pointer_x == 6 && pointer_y == 2)
          {
            entered_name += "u";
          }
          if (pointer_x == 0 && pointer_y == 3)
          {
            entered_name += "v";
          }
          if (pointer_x == 1 && pointer_y == 3)
          {
            entered_name += "w";
          }
          if (pointer_x == 2 && pointer_y == 3)
          {
            entered_name += "x";
          }
          if (pointer_x == 3 && pointer_y == 3)
          {
            entered_name += "y";
          }
          if (pointer_x == 4 && pointer_y == 3)
          {
            entered_name += "z";
          }
        }
      }
    }
    if (up.press() || up.step())
    {
      pointer_y--;
      if (pointer_y < 0)
      {
        pointer_y = 0;
      }
      if (pointer_y == 2)
      {
        if (pointer_x == 5)
        {
          pointer_x = 6;
        }
        if (pointer_x == 4)
        {
          pointer_x = 5;
        }
        else if (pointer_x == 3)
        {
          pointer_x = 3;
        }
        else if (pointer_x == 2)
        {
          pointer_x = 2;
        }
        else if (pointer_x == 1)
        {
          pointer_x = 1;
        }
        else if (pointer_x == 0)
        {
          pointer_x = 0;
        }
      }
    }
    if (down.press() || down.step())
    {
      pointer_y++;
      if (pointer_y == 3)
      {
        if (pointer_x == 0)
        {
          pointer_x = 0;
        }
        else if (pointer_x == 1)
        {
          pointer_x = 1;
        }
        else if (pointer_x == 2)
        {
          pointer_x = 2;
        }
        else if (pointer_x == 3)
        {
          pointer_x = 3;
        }
        else if (pointer_x == 5)
        {
          pointer_x = 4;
        }
        else if (pointer_x == 4)
        {
          pointer_x = 3;
        }
        else if (pointer_x == 6)
        {
          pointer_x = 5;
        }
      }
      if (pointer_y >= 4)
      {
        pointer_y = 3;
      }
    }
    if (right.press() || right.step())
    {
      pointer_x++;
      if (pointer_y < 3)
      {
        if (pointer_x >= 7)
        {
          pointer_x = 6;
        }
      }
      else
      {
        if (pointer_x > 5)
        {
          pointer_x = 5;
        }
      }
    }
    if (left.press() || left.step())
    {
      pointer_x--;
      if (pointer_x < 0)
      {
        pointer_x = 0;
      }
    }
    /*
    if (pointer_y == 3)
    {
      constrain(pointer_x, 0, 4);
    }
    */
  }
}
void draw_picker(byte row, byte col)
{
  if (col < 3)
  {
    oled.roundRect(x_pos[row] - 1, y_pos[col] - 1, x_pos[row] + 11, y_pos[col] + 11, OLED_STROKE);
  }

  else
  {
    oled.roundRect(x_pos_xyz[row], y_pos[col], x_pos_xyz[row] + 10, y_pos[col] + 10, OLED_STROKE);
  }
}
void draw_pointer(byte symbol)
{
  if (millis() - pointer_timer >= 400)
  {
    pointer_timer = millis();
    pointer_type = !pointer_type;
  }
  if (letters_amount < 15)
  {
    oled.fastLineH(7, cursor_poss[symbol], cursor_poss[symbol] + 6, pointer_type ? OLED_FILL : OLED_CLEAR);
  }
  else
  {
    oled.fastLineH(7, cursor_poss[symbol], cursor_poss[symbol] + 6, OLED_CLEAR);
  }
}
