// https://burariweb.info
 
#include <Servo.h>      // Servoライブラリの読み込み
 
Servo myservo;          // Servoオブジェクトの宣言
const int SV_PIN = 7;   // サーボモーターをデジタルピン7に
 
void setup(){
 
  myservo.attach(SV_PIN, 500, 2400);  // サーボの割当(パルス幅500~2400msに指定)
  
}
 
void loop(){
 
  myservo.write(0);    // サーボモーターを0度の位置まで動かす
  delay(1000);
 
  myservo.write(40);   // サーボモーターを90度の位置まで動かす
  delay(1000);
 
 
}