/* Control brightness of an LED with Potentiometer
 *  Clayton Walker
 */

 int potPin = A0;
 int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  //convert potentiometer value to one the LED can use
  //map value from 0-1023 to 0-255
  int brightness = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);
}
