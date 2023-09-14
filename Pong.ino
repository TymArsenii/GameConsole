byte my_height;
byte enemy_height;

int ball_speed;
int enemy_speed;
bool allow_move;

int count;

byte ball_pos[2];  // x/y;

void pong()
{
  unsigned long move_ball_timer;

  ball_pos[0] = 120;
  ball_pos[1] = 58;
  while (true)
  {
    global_loop();
    if (millis() - refresh_timer >= 1000 / REFRESH_RATE)  //1000 / REFRESH_RATE
    {
      oled.dot(ball_pos[0], ball_pos[1], 1);
      draw_battery(battery_charge);
      oled.update();
    }

    if (millis() - move_ball_timer >= 100)
    {
      move_ball_timer = millis();

      oled.dot(ball_pos[0], ball_pos[1], 0);

      count++;

      if(count >=8)
      {
        count = 8;
        
      }

      allow_move = true;

      if (allow_move == true)
      {
        allow_move = false;
        ball_pos[1] = round(ball_pos[0] - count);
      }
      ball_pos[0] = round(ball_pos[1] - count);
    }
  }
}
