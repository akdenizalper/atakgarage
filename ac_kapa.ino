int led1=4;//led
int led2=5;//led
int dur=2; //interrupt pin
bool durum=0;//durumu belirtir

void setup() {
  
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
attachInterrupt(digitalPinToInterrupt(dur), durdurma, CHANGE);
digitalWrite(led1,LOW);//1 kere söndürücek
digitalWrite(led2,LOW);//1 kere söndürücek
//dur pini üzerinde herhangi bir değişme görülürse durdurma caliştirilacak
}

void loop() {
//digitalWrite(led1,LOW); //interrupt olmadıkça sönük ledler sönük
//digitalWrite(led2,LOW);
digitalWrite(led1,durum);
digitalWrite(led2,durum);

}

void durdurma(){
   durum=!durum;
   /*while(digitalRead(dur)==HIGH || digitalRead(dur)==LOW){ //ledin açılması yada kapanması için süreklilik sağlıyor
      if(digitalRead(dur)==HIGH){ //anahtar kapanınca ledler yanıyor
  digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
if(digitalRead(dur)==LOW){ //anahtar kapanınca ledler sönüyor
  digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
}
}}*/
}
