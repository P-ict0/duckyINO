#include <HIDKeyboard.h>
HIDKeyboard keyboard;

void setup() {
  keyboard.begin();
  delay(2000);
}

void loop() {
  keyboard.pressKey(GUI, 'r');
  delay(500);

  keyboard.println("https://www.youtube.com/watch?v=xvFZjo5PgG0&autoplay=1");

  while(1);
}
