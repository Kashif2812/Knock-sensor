#define knockPin  3 // define sensor pin
#define ledPin    2  // define led pin

int knockPin_state=1;  // variable to hold last state of sensor pin

void setup ()
{
  
  pinMode (ledPin, OUTPUT) ;  // set pin mode of led at output
  pinMode (knockPin, INPUT_PULLUP) ;  // set pin mode of sensor pin on inputu pull up
}
void loop ()
{
  if(digitalRead(knockPin)==LOW)  // chechinkg if sensor pin goes Low
  {
    if( knockPin_state==1)   // checking if knock pin state equal to 1
    {
      digitalWrite(ledPin,HIGH);  // then led pin will be high
    }
    knockPin_state=0;    // knock pin state will be 0
      delay(1000);      // wait for 1 second 
      digitalWrite(ledPin,LOW);// then turn off Led
  }
  else
  {
knockPin_state=1;   // otherwise knock pin state will be equal to 1
} 
}   
