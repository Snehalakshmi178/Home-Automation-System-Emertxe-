#define BLYNK_TEMPLATE_ID "TMPL3xhuc4ARh"
#define BLYNK_TEMPLATE_NAME "arduino"
#define BLYNK_AUTH_TOKEN "Zr_pLiczX-TfSiNz2jPK-Ja_6h9fluoy"
#include<SPI.h>
#include<Ethernet.h>
#include<BlynkSimpleEthernet.h>

#define LED  2

BLYNK_WRITE(V0){
  int value=param.asInt();
  if(value){
    digitalWrite(LED,1);
  }
  else{
    digitalWrite(LED,0);

  }
}




void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN);  

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();

}
