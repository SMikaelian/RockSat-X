void setup()
{
  Serial.begin(57600);
  Serial1.begin(9600);
}

void loop()
{
  Serial.println("Transmitting Data");
  Serial1.println("Transmitting Data");
  delay(100);
}
