/*
  Luminosidade
*/

#define PIN_LUM A0

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
 int luminosidade = analogRead(PIN_LUM);                
 Serial.print("Luminosidade = " );              
 Serial.println(luminosidade);  
 
 int luminosidade_perc = map(luminosidade, 0, 1023, 0, 100);
 Serial.print("Luminosidade[%] = " );              
 Serial.print(luminosidade_perc);     
 Serial.println("%");     
 
 delay(3000);
}
