//Author:- Amit kumar
//Date:-31/11/2019

//Code:-  Infrared /IR Sensor connect this to Arduino 
const int ir=4;// pin define in Arduino
int input = 0;

void setup() 
{                
  pinMode(8, OUTPUT);          // Pin 8 has an LED connected on most Arduino boards:  
  pinMode(ir,INPUT);    //Pin 4 is connected to the output of Ir sensor
  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(ir)==HIGH)      //Check the sensor output
  {
     Serial.print("object not\t \t");
    digitalWrite(8, HIGH);   // set the LED on
  }
  else
  {
    Serial.print("object are there \t");
    digitalWrite(8, LOW);    // set the LED off
  }
input= digitalRead(ir);
Serial.print("output \t");
Serial.println(input);
delay(500);              // wait for a second
}
