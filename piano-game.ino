#include "ArcadePiano.h"

// Key Switch Pins
#define KEY_1_PIN 7
#define KEY_2_PIN 6
#define KEY_3_PIN 5
#define KEY_4_PIN 4

ArcadePiano ap = ArcadePiano(KEY_1_PIN,KEY_2_PIN,KEY_3_PIN,KEY_4_PIN);

void setup() {
  Serial.begin(9600);
  Serial.println("Begin");
  ap.begin();
}

void loop()
{
  ap.printHighScores();
  ap.startGame();
}
