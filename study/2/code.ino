const int led_pin = 13;
const int btn_pin = 2;

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin, INPUT);
}

void loop()
{
  int val = digitalRead(btn_pin);
  if(val == HIGH) {
    digitalWrite(led_pin, HIGH);
  }
  else {
    digitalWrite(led_pin, LOW);
  }
  
}
