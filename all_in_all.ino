#include <RCSwitch.h>

const int motor_opening = 7;
const int motor_opening1 = 6;
const int motor_closing = 5;
const int motor_closing1 = 4;
const int light = 3;
const int limit_switch  = 2;
const int solenoid = 8;
 const int button_A = 9;
 const int button_c = 10;
 void setup(){
   pinMode(motor_opening,OUTPUT); // cotrol solid state reley in frowar  and reverse 
   pinMode(motor_opening1,OUTPUT);
   pinMode(solenoid,OUTPUT);
   pinMode(motor_closing,OUTPUT);
   pinMode(motor_closing1,OUTPUT);
   pinMode(light,OUTPUT); //light bulb indicator       
    pinMode(limit_switch,INPUT); // end stop for openning and cl
    
    osing 
     pinMode(button_A,INPUT);//
     pinMode(button_c,INPUT);
  }
  void loop()
  {
    START:
    while(digitalRead(button_A)==LOW)
    {};
    goto OPENING_DOOR;

    OPENING_DOOR:
    digitalWrite(light,HIGH);
    digitalWrite(solenoid,HIGH);
    digitalWrite(motor_opening,HIGH);
    digitalWrite(motor_opening1,HIGH);
     
    IF_STATEMENT_FOR_OPENING:
     if(digitalRead(button_c)==HIGH)
     {
      digitalWrite(motor_opening,LOW);
      digitalWrite(motor_opening1,LOW);
      digitalWrite(light,LOW);
     delay(1000);
     while(digitalRead(button_c)==LOW){};
     goto OPENING_DOOR;
     };
     if(digitalRead(limit_switch)== HIGH)
     {digitalWrite(motor_opening,LOW);
      digitalWrite(motor_opening1,LOW);
     delay(10000);
     goto CLOSING_DOOR;
     };
     goto IF_STATEMENT_FOR_OPENING;

 CLOSING_DOOR:
      digitalWrite(light,HIGH);
      digitalWrite(motor_closing,HIGH);
      digitalWrite(motor_closing1,HIGH);


  IF_STATEMENT_FOR_CLOSING:
   if(digitalRead(button_c)==HIGH);
   {digitalWrite(motor_closing,LOW);
    digitalWrite(motor_closing1,LOW);
   digitalWrite(light,LOW);
   delay(1000);
   while(digitalRead(button_c)==LOW){};
   goto CLOSING_DOOR;};
   
   if(digitalRead(limit_switch)==LOW);
   {digitalWrite(motor_closing,LOW);
    digitalWrite(motor_closing1,LOW);
    digitalWrite(light,LOW);
    digitalWrite(solenoid,LOW);
    goto START;};
    goto IF_STATEMENT_FOR_CLOSING;
       };
       ///////////////////////////////////////////// bluetooth mode
      
         
