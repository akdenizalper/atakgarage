// avr-libc eklemezsen calişmaz belkide calişirda gene ekle :D
//#include <avr/io.h> 
//#include <avr/interrupt.h>

int led=13;     //tamam cok güzel birşeyi bulmuşsun
boolean durum=LOW; //burada boolean true false degerleri alabilen bir degişken ancak boolean degil bool diye tanımlanıyor 
//hata olmuş düzeltirsin ama once serialprint ile serialmonitorden kontrol et belkide calişiyordur
void setup() {
  // put your setup code here, to run once: <-- ŞUNLARI SİL 
pinMode(led,OUTPUT); //led output tanımlandı
cli(); //interruptları kapatan bir komut bu sayede aşagıdaki işlemleri yaparken bir interruptin araya girip işi bozmasını engelliyoruz
//burdan sonrası aslında arduinodan cıkıyor avr nin mimarisine giriyor
//şuana kadar herşey kolaydı yok digitalwrite yok serialprint olmadı analogwrite 
//aslında işler alt katmanda dogru registerlara dogru bitleri set etmekle alakalı
//http://www.avrbeginners.net/architecture/timers/timers.html bu linkden iyi bilgi alabilirsin


TCNT1=0; //--> bunu 0lamak timeri 0 lamak demektir
TCCR1A=0; // --> bu a ve b registerlari timeri istedigin sekilde ayarlamanı saglar
TCCR1B=0; //--> 2 tane 8bit registeri 0 lamış bunun karşılıgının ne oldugunu datasheetten ilgili bölüme bakarak bulmalısın
OCR1A=15624; //-->The Output Compare register can be used to generate an Interrupt after the number of clock ticks written to it
TCCR1B |=(1<<WGM12);// turn on CTC mode
TCCR1B |=(1<<CS12) | (1<<CS10);// 1:1024 prescaling for timer1
TIMSK1 |= (1 << OCIE1A);// enable timer compare interrupt

//işler bitigine göre interruptları açabiliriz
sei();
}

//isr interrupt service routine timer 1 için
ISR(TIMER1_COMPA_vect){
 durum=!durum;
 digitalWrite(led,durum);
}
void loop() {
  // put your main code here, to run repeatedly: <<-- bunları sil
delay(10000);

}
