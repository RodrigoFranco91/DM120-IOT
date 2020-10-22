
#define BUZZER D5


void setup(void)
{
  Serial.begin(115200);
  pinMode(BUZZER, OUTPUT);
}


void loop()
{  

  digitalWrite(BUZZER, HIGH); 
  delay(2000);
  digitalWrite(BUZZER, LOW);   
  delay(2000);
}
