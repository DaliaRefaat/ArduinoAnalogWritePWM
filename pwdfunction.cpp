int ledPin = 11;
// Simulate analogWrite function
void simulateAnalogWrite(int pin, int value) {
 // Ensure the value is within the valid range (0 to 255)
 value = constrain(value, 0, 255);
 // Simulate PWM by toggling the pin state based on the duty cycle
 int dutyCycle = map(value, 0, 255, 0, 1023);
 for (int i = 0; i < 256; ++i) {
 if (i < dutyCycle) {
 digitalWrite(pin, HIGH);
 } else {
 digitalWrite(pin, LOW);
 }
 }
}
void setup() {
 pinMode(ledPin, OUTPUT);
}
void loop() {
 for (int ledVal = 0; ledVal <= 255; ++ledVal) {
 simulateAnalogWrite(ledPin, ledVal);
 delay(15);
 }
 for (int ledVal = 255; ledVal >= 0; --ledVal) {
 simulateAnalogWrite(ledPin, ledVal);
 delay(15);
 }
 delay(1000);
}