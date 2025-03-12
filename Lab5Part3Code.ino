/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
int threshold = 900;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int photoResistor = analogRead(A0);
  // print out the value you read:
  Serial.println(photoResistor);
  if (photoResistor < threshold) {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  }
}

/* 
const int PWMB=10; //speed control pin on the motor driver for the left motor
const int BIN2=9; //control pin 2 on the motor driver for the left motor
const int BIN1=8n // control pin 1 on the motor driver for the left motor
*/

