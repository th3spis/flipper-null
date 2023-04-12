/**
 * Translated from Rubber Ducky scripting to C using Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 * https://dukweeno.github.io/Duckuino/
 * Alternative: https://duckify.huhn.me/
*/

//Tested for Arduino Leonardo/Micro boards

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  //Keyboard.print(F("-/"));
  // Changed the variables from files in C:\Users\XXXX\AppData\Local\Arduino15\libraries\Keyboard\src
  // Keyboard.h ---> *layout = KeyboardLayout_es_ES
  // Keyboard.cpp --> _asciimap = KeyboardLayout_es_ES;
  Keyboard.print(F("https://www.youtube.com/watch?v=dQw4w9WgXcQ"));

  typeKey(KEY_RETURN);

  delay(3000);
  Keyboard.print(F("f")); //Autoplay

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
