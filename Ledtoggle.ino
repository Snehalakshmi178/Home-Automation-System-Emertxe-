/*WAP to toggle led*/
#define LED  2

void setup() {
  // config pin2 as output pin
  pinMode(LED, OUTPUT);

}

void loop() {
  /*turn ON the LED*/
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);

}
