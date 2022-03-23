int celsius = 0;
int sensor = 0;


void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  
sensor = analogRead(A0);
  
 celsius = map((( sensor - 20) * 3.04), 0, 1023, -40, 125);

 
  if(celsius > 20)
  {
  digitalWrite(3,HIGH);
  }else
  {
   digitalWrite(3,LOW);
  }
  
  
  Serial.print("A temp em graus celsius e de: ");
  Serial.print(celsius);
  Serial.print("C");
  Serial.println("");
  delay(100); 
  
}
