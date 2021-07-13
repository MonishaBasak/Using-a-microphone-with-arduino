void setup() {
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
 int sensorValue = analogRead(A3);
 float voltage = sensorValue * (5 / 1023);
 Serial.println(voltage);
 delay(10);// put your main code here, to run repeatedly:

}
