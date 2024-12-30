const int analogPin = A0;  // Signal input
const int samplingFreq = 1000;  // 10 Hz (10 samples per second)

void setup() {
    Serial.begin(9600);  // High baud rate for fast transfer
}

void loop() {
    int sensorValue = analogRead(analogPin);  // Read the analog input
    Serial.println(sensorValue);  // Send the value to the serial monitor
    delay(25000 / samplingFreq);  // Wait for the next sample
}