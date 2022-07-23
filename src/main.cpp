#include <Arduino.h>
// DONANIM PLUS ELEKTRONİK
// İNSTAGRAM tolgasytp
// TWİTTER TSytpp
// AKILLI ÇÖP KUTUSU
#include<Servo.h>
Servo servo;
int const trigPin = 6;
int const echoPin = 5;
void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
servo.attach(3);
}
void loop()
{      
int sure, mesafe;
digitalWrite(trigPin, HIGH); 
delay(1);
digitalWrite(trigPin, LOW);

sure = pulseIn(echoPin, HIGH);

mesafe = (sure/2) / 29.1;
    
if (mesafe <= 50 && mesafe >= 0) { // 50 cm den yakınsa eliniz kapağı açacak değilse zaten kapalı :) Geri kalan herşeyi daha önce anlatmıştım onun için anlatmıyorum eski yazılarımdan giderebilirsiniz eksiğinizi.. :)
  servo.write(50);
    delay(3000);
} else {
  servo.write(160);
}
delay(60);
}