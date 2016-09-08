
int led=4;
int led2=8;
int led3=9;
int buton=5;
int buton2=6;
int buton3=7;
int butondurumu;
int butondurumu2;
int butondurumu3;
void setup() {
// put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(buton,INPUT);
pinMode(buton2,INPUT);
pinMode(buton3,INPUT);
}

void loop() {
// put your main code here, to run repeatedly:
butondurumu=digitalRead(buton);
butondurumu2=digitalRead(buton2);
butondurumu3=digitalRead(buton3);
if(butondurumu==HIGH){
digitalWrite(led2,HIGH);
}
else if(butondurumu2==HIGH){
digitalWrite(led,HIGH);
delay(30);
digitalWrite(led,LOW);
delay(30);
digitalWrite(led2,HIGH);
delay(30);
digitalWrite(led2,LOW);
delay(30);
}
else if(butondurumu3==HIGH){
digitalWrite(led,HIGH);
digitalWrite(led3,HIGH);
}
else{
digitalWrite(led,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
}
}
