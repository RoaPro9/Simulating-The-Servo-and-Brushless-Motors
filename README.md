# Simulating-The-Servo-and-Brushless-Motors
Simulating The Servo and Brushless motors using Tinkercad.com

## How to wire the Servo motors:
### Hardware Required
- Arduino Uno R3 Board
- Servo Micro Motor
- hook-up wires

### Circuit
Servo motors have three wires: power, ground, and signal. The power wire is normally red and should be linked to the Arduino board's 5V pin. The ground wire is normally and attached to a ground pin on the board. The signal pin is usually yellow and should be linked to the board's PWM pin. Pin number 11 is used in these examples.

![Start Simulating](https://user-images.githubusercontent.com/70070721/179664755-06d30a0d-86aa-4af4-8f27-1b2043307043.png)

### Controlling a servo position using a potentiometer :
Create servo object to control a servo
```

#include <Servo.h>

Servo Theservo;
```
Create a variable to store the servo position
```
int pos =0;
```
Attaches the servo on pin 11 to the servo object
```
void setup (){

Theservo.attach(11);

}
```
Create Two loops:
one goes from 0 degrees to 180 degrees, then let servo to go to position in variable 'pos' and then waits 10ms for the servo to reach the position.
the other one goes from 0 degrees to 180 degrees, then let servo to go to position in variable 'pos' and then waits 10ms for the servo to reach the position.
```
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
```


