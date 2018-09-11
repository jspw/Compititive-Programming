#include <SoftwareSerial.h>// import the serial library

SoftwareSerial BT(10, 14 ); // RX, TX
int ledpin = 2; // led on D13 will show blink on / off
int BluetoothData; // the data given from Computer

void setup() {
  // put your setup code here, to run once:
  BT.begin(38400);
  Serial.begin(9600);
  BT.println("Bluetooth On please press 1 or 0 blink LED ..");
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (BT.available()) {
    BluetoothData = BT.read();
    if (BluetoothData == '1') { // if number 1 pressed ....
      digitalWrite(ledpin, HIGH);
      BT.println("LED  On D13 ON ! ");
    }
    if (BluetoothData == '0') { // if number 0 pressed ....
      digitalWrite(ledpin, LOW);
      BT.println("LED  On D13 Off ! ");
    }
  }
  delay(100);// prepare for next data ...
}
