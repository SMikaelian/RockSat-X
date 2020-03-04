void setup() {
  Serial2.begin(57600);
  Serial.begin(9600);
}

void loop()
{
  while(true)
  {
    Serial.print(Serial2.readString());
    //Serial2.print(Serial2.readString());
    Serial.println("Receving Data.");
  }
} 
