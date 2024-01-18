//Line order test function of trolley wheel
int tDelay = 3000; //The delay time is 3S
int D1 = 5;      // Definition of IO port
int D2 = 6;       
int D3 = 9;      
int D4 = 10;      

//Function initialization
void setup() 
{
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT); 
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);  

}

//Principal function
void loop() 
{
  Forward_rotation(); //Car forward
  delay(tDelay);      //delayed
  stop_it();          //Car stop
  delay(500);         //delayed
  reversal();         //Car back
  delay(tDelay);      //delayed
  stop_it();          //delayed
  delay(500);         //delayed
  TurnLeft();         //Car turn left
  delay(tDelay);      //delayed
  stop_it();          //Car stop
  delay(500);         //delayed
  TurnRight();         //Car turn right
  delay(tDelay);      //delayed
  stop_it();          //delayed
  delay(500);         //delayed

}
void Forward_rotation()
{
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}
void reversal()
{
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}

void TurnLeft(){
  digitalWrite(D1, HIGH);
  analogWrite(D2, LOW);
  digitalWrite(D3, LOW);
  analogWrite(D4, HIGH);
}

void TurnRight(){
  analogWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  analogWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}

void stop_it()
{
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
}

