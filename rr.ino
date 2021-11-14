//this script opens music (revelion fane bresteanu 2018) and then make the fake update (W10)
#include "DigiKeyboard.h"
void setup()
{
  //empty
}
void loop()
{
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://youtu.be/slLw1Fbo7I4?t=865");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for (;;) ("");
}
