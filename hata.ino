//tanımlamalar 
int led1=4;//led
int led2=5;//led
int basla=3;  //??
int dur=2; //interrupt pin

void setup() {
  
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
//bir konuyu ilkkez araştırırken hep referans sayfalarında tanımlamaların nasıl yapıldıgına baklmalısın
//örnegin https://www.arduino.cc/en/Reference/attachInterrupt
//attachInterrupt(0,durdurma,CHANGE) ; bunu şu sekilde yazmanın tavsiye edildigini görebilirsin

//attachInterrupt(digitalPinToInterrupt(pin), ISR, mode);	(recommended)
//attachInterrupt(interrupt, ISR, mode);	(not recommended)
//ama 2 türlüde calışır ayrıntılarını ve nedenlerini araştırabilirsin :D
attachInterrupt(digitalPinToInterrupt(dur), durdurma, CHANGE);
//bu nasıl calışacak ??
//-->dur pini üzerinde herhangi bir change görülürse durdurma caliştirilacak
}

void loop() {
  //burada bi degişik birşey olmuş yapmak istedigin şumu
  // eger başla pini high ise
if(digitalRead(basla)==HIGH){
  //while(digitalRead(basla)==HIGH){} burada parantezler hatalı sonsuz loop ...
digitalWrite(led1,HIGH);
delay(1120);
digitalWrite(led1,LOW);
delay(1120);
digitalWrite(led2,HIGH);
delay(1120);
digitalWrite(led2,LOW);
delay(1120);
  }
}

void durdurma(){
  if(digitalRead(dur)==HIGH){
  digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
}}
