const int MotorPin1=2;
const int MotorPin2=3;
const int MotorPin3=4;
const int MotorPin4=5; 


void setup()
{
  pinMode(MotorPin1, OUTPUT); 
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  pinMode(MotorPin4, OUTPUT);
}

void loop()
{
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
  digitalWrite(MotorPin4, LOW);
  delay(3000);
  
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
  delay(3000);
 
}
