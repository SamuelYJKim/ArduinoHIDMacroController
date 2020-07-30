/*
  Samuel Kim
  Base code created 
  by Tom Igoe
*/

//Arduino recieves signal from android tablet or phone
//then sends command to computer to control OBS Studio shortcuts
#include "Keyboard.h"
#include "SoftwareSerial.h"

char ctrl;
char shift;
char T;
char confirm;
void setup() {
  // open the serial port:
  ctrl = KEY_LEFT_CTRL;
  shift = KEY_LEFT_SHIFT;
  T = 't';
  confirm = '1';
  Serial.begin(9600);
  Serial1.begin(9600);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // check for incoming serial data:
  if (Serial1.available() > 0) {
    // read incoming serial data:
    char inChar = Serial1.read();
    // Type the next ASCII value from what you received:
    sendCommand(inChar);
    Serial1.write(inChar);
  }
}

//standardized commands
void standard() {
  Keyboard.press(ctrl);
  Keyboard.press(shift);
}

//sending keyboard commands in this method
void sendCommand(char command) {
  switch (command) {
    case '1':
      standard();
      Keyboard.press('1');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
    case '2':
      standard();
      Keyboard.press('2');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
    case '3':
      standard();
      Keyboard.press('3');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
    case '4':
      standard();
      Keyboard.press('4');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
    case '5':
      standard();
      Keyboard.press('5');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
    case '6':
      standard();
      Keyboard.press('6');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
    case '7':
      standard();
      Keyboard.press('7');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      standard();
      Keyboard.press(T);
      delay(100);
      Keyboard.releaseAll();
      break;
  }
}
