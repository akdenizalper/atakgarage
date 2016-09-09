int ledler[]={4,5,6,7};
int sayi=4;
int ldr=A0;
int deger=0;
void setup() {
  // put your setup code here, to run once:
for(int i=0; i<sayi ; i++){
  pinMode(ledler[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
deger=analogRead(ldr);
if(deger>0 && deger<=255){     //Photoresistorun okudugu deger gore led yaktırdım
  digitalWrite(ledler[0],HIGH);
  digitalWrite(ledler[1],LOW);
  digitalWrite(ledler[2],LOW);
  digitalWrite(ledler[3],LOW);
}
if(deger>256 && deger<=511){
   digitalWrite(ledler[0],HIGH);
  digitalWrite(ledler[1],HIGH);
  digitalWrite(ledler[2],LOW);
  digitalWrite(ledler[3],LOW);
  
}
if(deger>512 && deger<=767){
   digitalWrite(ledler[0],HIGH);
  digitalWrite(ledler[1],HIGH);
  digitalWrite(ledler[2],HIGH);
  digitalWrite(ledler[3],LOW);
}
if(deger>768 && deger<=1023){
   digitalWrite(ledler[0],HIGH);
  digitalWrite(ledler[1],HIGH);
  digitalWrite(ledler[2],HIGH);
  digitalWrite(ledler[3],HIGH);
}
delay(100);
}
