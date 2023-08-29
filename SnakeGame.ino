void google_dino()
{
  uint32_t dino_step_timer;
  uint32_t dino_jump_timer;
  uint32_t refresh_timer;
  uint32_t enemy_timer;
  uint32_t temp_enemy_timer;

  dino_height = BOTTOM_HEIGHT;
  oled.drawBitmap(0, 60, dino_way, 128, 1);
  while (true)  // main game loop
  {
    up.tick();
    down.tick();
    left.tick();
    right.tick();
    ok.tick();
    if (ok.press())
    {
      mode = !mode;
      break;
    }
    if (millis() - refresh_timer >= 1000 / REFRESH_RATE)
    {
      oled.clear();
      //oled.drawBitmap(0, 60, way, 128, 1);
      refresh_timer = millis();
      //oled.clear(0, 0, 30, 63);
      if (roached == false)
      {
        oled.drawBitmap(5, dino_height, dino_feet ? dino_left : dino_right, 16, 16, BITMAP_NORMAL);
      }
      else
      {
        oled.drawBitmap(5, dino_height + 8, dino_feet ? dino_roached_left : dino_roached_right, 16, 8, BITMAP_NORMAL);
      }
      if (dino_height != prev_dino_height)
      {
        prev_dino_height = dino_height;
        //oled.clear(5, dino_height - 16, 21, dino_height);  //0, 30, 20, 63 for dino
        oled.clear(5, dino_height, 5 + 16, dino_height + 16);
        if (dino_height == BOTTOM_HEIGHT)
        {
          oled.drawBitmap(0, 60, dino_way, 128, 1);
        }
      }
      oled.update();
    }
    if (millis() - dino_step_timer >= 100)
    {
      dino_step_timer = millis();
      dino_feet = !dino_feet;
    }

    if (millis() - temp_enemy_timer >= 33)
    {
      temp_enemy_timer = millis();
      enemy_type = !enemy_type;
      enemy_type = false;
      if (enemy_pos <= -10)
      {
        enemy_pos = 130;
      }
      //oled.clear();
      //enemy_pos = 130;
      switch (enemy_type)
      {
        case true:
          oled.drawBitmap(enemy_pos, BOTTOM_HEIGHT, cactus_small, 16, 16);
          break;
        case false:
          oled.clear(enemy_pos - 24, BOTTOM_HEIGHT, enemy_pos + 24, BOTTOM_HEIGHT - 24);
          oled.drawBitmap(enemy_pos, BOTTOM_HEIGHT, cactus_big, 24, 16);
          break;
      }
    }
    if (millis() - enemy_timer >= 8)
    {
      enemy_timer = millis();
      enemy_pos--;
    }

    if (millis() - dino_jump_timer >= 7)
    {
      dino_jump_timer = millis();
      if (dino_move_direction == true && dino_height > 10)
      {
        dino_height--;
      }
      else
      {
        dino_move_direction = false;
      }
      if (dino_move_direction == false && dino_height < BOTTOM_HEIGHT)
      {
        dino_height++;
      }
    }

    if ((up.pressing()) && dino_height == BOTTOM_HEIGHT)
    {
      //Serial.println(F("Up"));
      dino_jump_timer = millis();
      dino_move_direction = true;
    }
    if (down.pressing())
    {
      //Serial.println(F("Down"));
      roached = true;
      oled.clear(5, dino_height, 5 + 16, dino_height + 16);
      oled.drawBitmap(0, 60, dino_way, 128, 1);
      dino_height = BOTTOM_HEIGHT;
      dino_move_direction = false;
    }
    if (down.release())
    {
      roached = false;
    }
    //Serial.println(enemy_pos);
  }
}
