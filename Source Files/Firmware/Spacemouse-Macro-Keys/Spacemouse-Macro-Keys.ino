#include <PCA9505_9506.h> //Lib for handling I/O expander chip
#include <Keyboard.h> //HID keyboard lib

 
// Key assignments from switch 1 to 12
char Key_Assignment_Array[] = {KEY_F13, KEY_F14, KEY_F15, KEY_F16, KEY_F17, KEY_F18, KEY_F19, KEY_F20, KEY_F21, KEY_F22, KEY_F23, KEY_F24};

// LEDs under each switch 1 to 12
int LED_Array[] = {14, 12, 10, 16, 8, 6, 34, 19, 4, 32, 30, 27};

// GPIO pin for each switch on the I/O expander from 1 to 12
int Switch_Array[] = {13, 11, 9, 15, 7, 5, 33, 18, 3, 31, 29, 28};



PCA9505_06 GPIO;

void setup() {


  GPIO.begin(0x27);   //  0x20 A0=1 A1=1 A2=1

  for (int i = 0; i < 12; i++){
    GPIO.pinMode(LED_Array[i], OUTPUT);   // configure LED_i as output
    GPIO.pinMode(Switch_Array[i], INPUT); // configure SWITCH_i as output   
  }
  
  Keyboard.begin();
}

void loop() {


  for (int i = 0; i < 12; i++){                     //scans through switches 1 to 12
    if (GPIO.digitalRead(Switch_Array[i]) == LOW){  // If SWITCH_i is pressed
      GPIO.digitalWrite(LED_Array[i], HIGH);        // switch on LED_i
      Keyboard.press(Key_Assignment_Array[i]);      // Press KEY_i
    }

    else {
      GPIO.digitalWrite(LED_Array[i], LOW);         // switch off LED_i
      Keyboard.release(Key_Assignment_Array[i]);    // release KEY_i
    } 
  }
}
