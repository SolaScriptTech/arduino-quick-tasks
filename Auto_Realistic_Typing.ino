#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_es_ES.h>

#define kbd_es_es

// Intended for BadUSB Micro Arduino's
// Helper function to type out a string with human-like delays, typos, and corrections
// Types roughly 85-90 wpm average
void typeString(const char* text) {
  int i = 0;
  int typoCount = 0;
  while (text[i] != '\0') {
    // Simulate a typo roughly every 40-50 chars (about 2-3 per paragraph)
    if ((random(40, 50) == 42) && typoCount < 6 && text[i] != ' ' && text[i] != '\n') {
      // Type a wrong character
      char wrongChar = text[i] == 'e' ? 'r' : 'e'; // Just simple wrong char logic
      Keyboard.print(wrongChar);
      delay(random(320, 370)); // quick pause for typo
      Keyboard.press(KEY_BACKSPACE); // correct it
      Keyboard.releaseAll();
      delay(random(440, 490)); // pause to recover from error
      typoCount++;
    }
    // Type the correct character
    Keyboard.print(text[i]);
    // Add a little extra delay at punctuation or newlines for realism
    if (text[i] == ',' || text[i] == ';' || text[i] == ':') {
      delay(random(220, 320));
    } else if (text[i] == ' ') {
      delay(random(110, 170));
    } else if (text[i] == '.') {
      delay(random(450, 490));
    } else if (text[i] == '\n') { // Place a \n at the end of a paragraph or where you want a blank line. Remember it goes. \n"
      delay(random(600, 645));  
    } else {
      delay(random(120, 165)); // 140 ms avg per char = ~85-90 wpm
    }
    i++;
  }
}




void setup() {
  delay(8500); // Give time for a different sketch to be uploaded before the current sketch starts running
  Keyboard.begin();

  // Seed random for typos
  randomSeed(analogRead(0));

  typeString(
    "I think that this works really well and unless there is someone on the other end watching as it is being typed, especially your point about every language having its own use case. " 
    "I also agree that the most important takeaway is to start with small, meaningful projects, that's what actually builds confidence and keeps you motivated to learn. \n"
    "I think you summed it up really well, then it will do just fine for those programs that just record stats especially your point about every language having its own use case. " 
    "I also agree that the most important takeaway is to start with small, meaningful projects, that's what actually builds confidence and keeps you motivated to learn. "
    );

  Keyboard.end();
}

void loop() {
  // Do nothing, typing is finished
}
