int MotorA_IN1 = 2;
int MotorA_IN2 = 3;
int MotorB_IN3 = 4;
int MotorB_IN4 = 5;
int MotorA_PWM = 9;
int MotorB_PWM = 10;
int spd = 150;
char sms;

int F_Light=7;
int B_Light=8;
int buzer=6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(MotorA_IN1,OUTPUT);
pinMode(MotorA_IN2,OUTPUT);
pinMode(MotorB_IN3,OUTPUT);
pinMode(MotorB_IN4,OUTPUT);
pinMode(MotorA_PWM,OUTPUT);
pinMode(MotorB_PWM,OUTPUT);

pinMode(F_Light,OUTPUT);
pinMode(B_Light,OUTPUT);
pinMode(buzer,OUTPUT);
}



void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  sms = Serial.read();
}
analogWrite(MotorA_PWM,spd);
analogWrite(MotorB_PWM,spd);
   
if(sms == 'S')
{
CarStop();
}
if(sms == 'F')
{
CarForward();
}
if(sms == 'B')
{
CarBackward();
}
if(sms == 'R')
{
CarRight();
}
if(sms == 'L')
{
CarLeft();
}
if(sms=='I')
{
CarF_Right();
}
if(sms=='G')
{
CarF_Left();
}
if(sms=='J')
{
CarB_Right();
}
if(sms=='H')
{
CarB_Left();  
}

if(sms == '0')
{
spd=0;
}
if(sms == '1')
{
spd=30;
}
if(sms == '2')
{
spd=60;
}
if(sms == '3')
{
spd=90;
}
if(sms == '4')
{
spd=120;
}
if(sms == '5')
{
spd=150;
}
if(sms == '6')
{
spd=180;
}
if(sms == '7')
{
spd=210;
}
if(sms == '8')
{
spd=240;
}
if(sms == '9')
{
spd=255;
}
if(sms=='W')
{digitalWrite(F_Light,HIGH);}
if(sms=='w')
{digitalWrite(F_Light,LOW);}
if(sms=='U')
{digitalWrite(B_Light,HIGH);}
if(sms=='u')
{digitalWrite(B_Light,LOW);}
if(sms=='V')
{digitalWrite(buzer,HIGH);}
if(sms=='v')
{digitalWrite(buzer,LOW);}
}

void CarForward()
{
  digitalWrite(MotorA_IN1,HIGH);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,HIGH);
  digitalWrite(MotorB_IN4,LOW);
}

void CarBackward()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,HIGH);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,HIGH);
}

void CarF_Right()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,HIGH);
  digitalWrite(MotorB_IN4,LOW);
}

void CarF_Left()
{
  digitalWrite(MotorA_IN1,HIGH);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,LOW);
}

void CarStop()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,LOW);
}
void CarRight()
{
digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,HIGH);
  digitalWrite(MotorB_IN3,HIGH);
  digitalWrite(MotorB_IN4,LOW);  
}
void CarLeft()
{
 digitalWrite(MotorA_IN1,HIGH);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,HIGH);  
}
void CarB_Right()
{   
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,HIGH);   
}
void CarB_Left()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,HIGH);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,LOW); 
}