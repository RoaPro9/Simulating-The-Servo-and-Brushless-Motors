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

### Arduino Code
Controlling a servo position using a potentiometer :
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
the other one goes from 180 degrees to 0 degrees, then let servo to go to position in variable 'pos' and then waits 10ms for the servo to reach the position.
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
### Start Simulation


https://user-images.githubusercontent.com/70070721/179669291-327d7499-586b-44f8-a552-71891ebd7db1.mp4

## How to wire the Brushless motor
control a small DC (Brushless) motor using an Arduino and a transistor.

### Hardware Required
- Arduino Uno R3 Board
- Small 6V DC Motor
- PN2222 Transistor
- 1N4001 diode
- 270 Ω Resistor (red, purple, brown stripes)
- Breadboard
- hook-up wires

### Circuit
Firstly, make sure that the transistor is the right way around. The flat side of the transistor should be on the right-hand side of the breadboard.
Secondly the striped end of the diode should be towards the +5V power line 
see the image below!
![Funky Snaget-Vihelmo](https://user-images.githubusercontent.com/70070721/179676098-0738028a-cc9b-449f-8919-a2c971464af8.png)

### Arduino Code
```
// C++ code
//


int motorPin = 10;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(motorPin, speed);
    }
  }
} 
```
The transistor acts like a switch, controlling the power to the motor, Arduino pin 3 is used to turn the transistor on and off and is given the name 'motorPin' .
In the 'loop' function, the command 'Serial.parseInt' is used to read the number entered as text in the Serial Monitor and convert it into an 'int'.

You could type any number here, so the 'if' statement on the next line only does an analog write with this number if the number is between 0 and 255.

The small DC motor, is likely to use more power than an Arduino digital output can handle directly. If we tried to connect the motor straight to an Arduino pin, there is a good chance that it could damage the Arduino.

A small transistor like the PN2222 can be used as a switch that uses just a little current from the Arduino digital output to control the much bigger current of the motor.


