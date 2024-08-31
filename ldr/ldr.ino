#define GARDEN_LIGHTS  3
#define LDR            A0

void setup() {
  // put your setup code here, to run once:
  pinMode(GARDEN_LIGHTS,OUTPUT);
  pinMode(LDR,INPUT);


}
unsigned int adc_val;

void loop() {
  // put your main code here, to run repeatedly:
  adc_val=analogRead(A0);
  adc_val=255-(adc_val/4);
  analogWrite(GARDEN_LIGHTS,adc_val);
  delay(100);

}
