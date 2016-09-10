int led[]={4,5,6,7,8,9,10};
int sayi=8;
void setup() 
{
  //init
  for(int i=0; i<sayi; i++){
pinMode(led[i],OUTPUT);
}
}

void loop() {
//bunları bir fonsiyona yazıp ordan cagirsana
//countr(int a);
digitalWrite(led[0],HIGH);  //basit bir sayaç ??????

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],HIGH);

digitalWrite(led[5],HIGH);

digitalWrite(led[6],LOW);
delay(500);

  
digitalWrite(led[0],LOW);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],LOW);

digitalWrite(led[4],LOW);

digitalWrite(led[5],LOW);

digitalWrite(led[6],LOW);
delay(500);

digitalWrite(led[0],HIGH);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],LOW);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],HIGH);

digitalWrite(led[5],LOW);

digitalWrite(led[6],HIGH);
delay(500);


digitalWrite(led[0],HIGH);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],LOW);

digitalWrite(led[5],LOW);

digitalWrite(led[6],HIGH);
delay(500);

digitalWrite(led[0],LOW);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],LOW);

digitalWrite(led[4],LOW);

digitalWrite(led[5],HIGH);

digitalWrite(led[6],HIGH);
delay(500);



digitalWrite(led[0],HIGH);

digitalWrite(led[1],LOW);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],LOW);

digitalWrite(led[5],HIGH);

digitalWrite(led[6],HIGH);
delay(500);


digitalWrite(led[0],HIGH);

digitalWrite(led[1],LOW);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],HIGH);

digitalWrite(led[5],HIGH);

digitalWrite(led[6],HIGH);
delay(500);


digitalWrite(led[0],HIGH);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],LOW);

digitalWrite(led[4],LOW);

digitalWrite(led[5],LOW);

digitalWrite(led[6],LOW);
delay(500);


digitalWrite(led[0],HIGH);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],HIGH);

digitalWrite(led[5],HIGH);

digitalWrite(led[6],HIGH);
delay(500);

digitalWrite(led[0],HIGH);

digitalWrite(led[1],HIGH);

digitalWrite(led[2],HIGH);

digitalWrite(led[3],HIGH);

digitalWrite(led[4],LOW);

digitalWrite(led[5],HIGH);

digitalWrite(led[6],HIGH);
delay(500);



}


