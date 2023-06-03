#include <Servo.h>

Servo myservo; // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup()
{
    myservo.attach(2); // attaches the servo on pin 2 to the servo object
}

void loop()
{
    val = analogRead(potpin);        // reads the value of the potentiometer (value between 0 and 1023)
    val = map(val, 1023, 0, 0, 180); // scale it to use it with the servo (value between 0 and 180)
    myservo.write(val);              // sets the servo position according to the scaled value
    delay(15);                       // waits for the servo to get there
}

// int pos = 0; // variable to store the servo position

// void loop()
// {
//     for (pos = 0; pos <= 180; pos += 10)
//     { // goes from 0 degrees to 180 degrees
//         // in steps of 1 degree
//         myservo.write(pos); // tell servo to go to position in variable 'pos'
//         delay(15);          // waits 15ms for the servo to reach the position
//     }
//     for (pos = 180; pos >= 0; pos -= 10)
//     {                       // goes from 180 degrees to 0 degrees
//         myservo.write(pos); // tell servo to go to position in variable 'pos'
//         delay(15);          // waits 15ms for the servo to reach the position
//     }
// }