// C++ code
//
#include <Servo.h>


Servo Theservo;
int pos =0;
void setup (){

Theservo.attach(11);

}
void loop(){
for( pos=0 ; pos <= 180 ; pos += 1){
    Theservo.write(pos);
    delay(10);

}
for( pos=180 ; pos >=180 ; pos -= 1){
    Theservo.write(pos);
    delay(10);
    
}

}

