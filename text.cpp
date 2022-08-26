#include <Arduino.h>
//Declaring all variables as integers
int Z=0,Y=0,X=0;
int x0,x1,x2,x3,x4,x5,x6,x7,x8,x9;
int f;
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(2, OUTPUT);  
}

// the loop function runs over and over again 
void loop()
{
x0=(X&&Y);
x1=(!x0);
x2=(!X);
x3=!Y;
x4=x2&&x3;
x5=!x4;
x6=x3&&Z;
x7=!x6;
x8=x1&&x5&&x7;
x9=!x8;
f=x9;
 digitalWrite(2,f);
 }
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
