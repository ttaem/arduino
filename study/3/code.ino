const int pot_pin = 1;

void setup ()
{
  Serial.begin(9600);
}

void loop ()
{
  int val;
  
  val = analogRead(pot_pin);
  Serial.println(val);
  delay(500);
}
