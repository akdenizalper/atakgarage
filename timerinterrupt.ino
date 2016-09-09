int led=13;     //OYLE BI TIMER INTERRUPT I GORMEK ICIN YAZDIM AMA HIC BIRSEY ANALMADIM :)
boolean durum=LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
cli();

TCNT1=0;
TCCR1A=0;
TCCR1B=0;
OCR1A=15624;
TCCR1B |=(1<<WGM12);
TCCR1B |=(1<<CS12) | (1<<CS10);
TIMSK1 |= (1 << OCIE1A);
sei();
}
ISR(TIMER1_COMPA_vect){
 durum=!durum;
 digitalWrite(led,durum);
}
void loop() {
  // put your main code here, to run repeatedly:
delay(10000);

}
