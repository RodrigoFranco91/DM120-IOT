
#define LED_R D2 
#define LED_G D3
#define LED_B D4


void setup(void)
{
  Serial.begin(115200);
  pinMode(LED_R, OUTPUT); 
  pinMode(LED_G, OUTPUT); 
  pinMode(LED_B, OUTPUT); 
}


void loop()
{    
  analogWrite(LED_R, 255); //PINO RECEBE O VALOR
  analogWrite(LED_G, 0); 
  analogWrite(LED_B, 0); 
  delay(2000);
  analogWrite(LED_G, 255); 
  analogWrite(LED_R, 0); 
  analogWrite(LED_B, 0); 
  delay(2000);
  analogWrite(LED_B, 255);
  analogWrite(LED_R, 0); 
  analogWrite(LED_G, 0); 
  delay(2000);

}
