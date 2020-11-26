/*
********** github.com/vinojv96 *****
*/
int sensorPin = A0;
int sensorValue = 0;


void setup() {
pinMode(10,OUTPUT);
Serial.begin(9600);

}

void loop() {
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue);
if(sensorValue > 800) // Adjust the sensor value if needed
{
  Serial.println("led on");
  digitalWrite(10, HIGH);
  delay(30000);//this delay avoids flickering of light in the dusk or dawn time
}
else
digitalWrite(10, LOW);
delay(sensorValue);
}

