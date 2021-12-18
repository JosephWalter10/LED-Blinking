void setup()
{
  pinMode(10, OUTPUT);
}
void loop()
{
  for(int i=0;i<=255;i++)
  {
    delay(10);
    analogWrite(10,i);
  }
for(int i=255;i>=0;i--)
  {
  delay(10);
  analogWrite(10,i);
  }
}
