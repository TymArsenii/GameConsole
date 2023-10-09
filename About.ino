void about()
{
  oled.autoPrintln(true);
  while (true)
  {
    buttons_tick();
    if (millis() - refresh_timer >= REFRESH_RATE)
    {
      refresh_timer = millis();
      oled.clear();
      oled.home();
      oled.print("Model: GameConsole 1");
      oled.setCursor(0, 1);
      oled.print("OS Version 2.3");
      oled.setCursor(0, 2);
      oled.print("Model number ");
      oled.print(model_number);
      oled.setCursor(0, 3);
      oled.print("Games amont 3");
      oled.setCursor(0, 5);
      oled.print("Made by:                Arsenii Tymoshenko");
      oled.update();
    }
    if (left.press())
    {
      menu_active = 1;
      return;
    }
  }
}
