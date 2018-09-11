int left_motor_forward = 10;
int right_motor_forward = 5;
int left_motor_backward = 9;
int right_motor_backward = 7; 
int left_motor_enable = 11; //must be pwm pin
int right_motor_enable = 3; //must be pwm pin
int led_red=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2,OUTPUT);
}



void loop(){
  int i;
  for(i=1;i<=10;i++)
  {

  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  forward();
  delay(10000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(2000);
  digitalWrite(led_red,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  backward();
  delay(10000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(2000);
  digitalWrite(led_red,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  right();
  delay(50);
  halt();
  digitalWrite(led_red,HIGH);
  delay(1000);
  digitalWrite(led_red,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  forward();
  delay(5000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(5000);
  digitalWrite(led_red,LOW);

  
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  left();
  delay(1000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(5000);
  digitalWrite(led_red,LOW);
  
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  backward();
  delay(100);
  halt();
  digitalWrite(led_red,HIGH);
  delay(5000);
  digitalWrite(led_red,LOW);
}
  
  exit(0);

  
}



