#include "DigiKeyboard.h"
void setup() {

}

void loop() 
{
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(600);

  
  DigiKeyboard.sendKeyStroke( KEY_SPACE,MOD_GUI_LEFT );
  DigiKeyboard.delay(600);

  
  DigiKeyboard.print("https://youtu.be/slLw1Fbo7I4?t=865");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for (;;) {/* Stops the loop */}
}
