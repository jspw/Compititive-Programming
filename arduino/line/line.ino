int left_motor_forward = 5;
int right_motor_forward = 2;
int left_motor_backward = 4;
int right_motor_backward = 3; 
int left_motor_enable = 11; //must be pwm pin
int right_motor_enable = 10; //must be pwm pin
int led_red=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7,OUTPUT);
}



void loop(){
  int i;
  for(i=1;i<=10;i++)
  {

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
  backward();
  delay(5000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(5000);
  digitalWrite(led_red,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  right();
  delay(5000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(1000);
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
  forward();
  delay(5000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(5000);
  digitalWrite(led_red,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  backward();
  delay(5000);
  halt();
  digitalWrite(led_red,HIGH);
  delay(5000);
  digitalWrite(led_red,LOW);
}
  
  exit(0);

  
}



