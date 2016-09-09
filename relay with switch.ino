#define RELAY 8
int led=12;
int sw=3;
void setup() {
  // put your setup code here, to run once:
pinMode(RELAY,OUTPUT);
pinMode(sw,INPUT);
pinMode(led,OUTPUT);
digitalWrite(led,HIGH);
}

void loop() {
  if(digitalRead(sw)==HIGH){  //anahtarla açıp kapama yapmayı sağladım
digitalWrite(RELAY,HIGH);   /* genel olarak rölenin ledi yanınca boardaki led söndü, led yanınca rölenin ledi söndü */
delay(800);
digitalWrite(led,LOW);
digitalWrite(RELAY,LOW);
delay(800);
digitalWrite(led,HIGH);
}
else{                       //anahtar açık iken sistem kapandı
  digitalWrite(led,LOW);
  digitalWrite(RELAY,HIGH);
  
}
}
