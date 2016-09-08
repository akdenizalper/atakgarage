int led1=4;
int led2=5;
int basla=3;
int dur=2;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
attachInterrupt(0,durdurma,RISING) ;
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(basla)==HIGH){
  //while(digitalRead(basla)==HIGH){}
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
  digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
}
