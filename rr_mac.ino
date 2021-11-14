#include "DigiKeyboard.h"
void setup() {
  // empty
}

void loop() 
{
  // Initialise digispark
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(600);

  // Hits cmd+space to open spotlight
  DigiKeyboard.sendKeyStroke( KEY_SPACE,MOD_GUI_LEFT );
  DigiKeyboard.delay(600);

  // Enters the rickroll link and presses enter
  DigiKeyboard.print("https://youtu.be/slLw1Fbo7I4?t=865");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // Starts the fake update
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for (;;) {/* Stops the loop */}
}
