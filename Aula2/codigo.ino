const int led = 3;
const int pot = 0;

void setup ()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

int var;
int var2;
void loop()
{
  Var = analogRead(pot);
  var2 = map(var, 0, 1023, 0, 255);
  Serial.println ("pot: ");
  Serial.println (var);
  Serial.println ("map: ");
  Serial.println (var2);
  analogWrite(led, var2);
  delay(100);
}
