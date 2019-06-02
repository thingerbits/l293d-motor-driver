#define In1 7
#define In2 6
#define In3 5
#define In4 4
#define EnA 9
#define EnB 10

int mot1control = A0;
int mot2control = A1;

int mot1Speed = 0;
int mot2Speed = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(In1,OUTPUT);
pinMode(In2,OUTPUT);
pinMode(In3,OUTPUT);
pinMode(In4,OUTPUT);
pinMode(EnA,OUTPUT);
pinMode(EnB,OUTPUT);

}

void loop() {

mot1Speed = analogRead(mot1control);
mot2Speed = analogRead(mot2control);

analogWrite(EnA,mot1Speed);
analogWrite(EnB,mot2Speed);


stop1();
delay(5000);
forword();
delay(5000);
backword();
delay(5000);
left();
delay(5000);
right();
delay(5000);

}

void stop1(){
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
  }

void forword(){
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  }

void backword(){
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  }
void left(){
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  }
void right(){
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW); 
  }    
