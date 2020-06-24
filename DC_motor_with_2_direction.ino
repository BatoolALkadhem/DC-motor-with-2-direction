const int relay1=3;
const int relay2=5;

void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

}

void loop()
{
  digitalWrite(relay1, HIGH);
  delay(900); 
  digitalWrite(relay1, LOW);
  delay(900);
  
  digitalWrite(relay2, HIGH);
  delay(900); 
  digitalWrite(relay2, LOW);
  delay(900);
}
