void forward()
{
  digitalWrite(left_motor_forward,HIGH);
  digitalWrite(left_motor_backward,LOW);
  digitalWrite(right_motor_forward,HIGH);
  digitalWrite(right_motor_backward,LOW);
}


void backward()
{
  digitalWrite(left_motor_forward,LOW);
  digitalWrite(left_motor_backward,HIGH);
  digitalWrite(right_motor_forward,LOW);
  digitalWrite(right_motor_backward,HIGH);
}

void left()
{
  digitalWrite(left_motor_forward,LOW);
  digitalWrite(left_motor_backward,HIGH);
  digitalWrite(right_motor_forward,HIGH);
  digitalWrite(right_motor_backward,LOW);
}

void right()
{
  digitalWrite(left_motor_forward,HIGH);
  digitalWrite(left_motor_backward,LOW);
  digitalWrite(right_motor_forward,LOW);
  digitalWrite(right_motor_backward,HIGH);
}

void halt()
{
  digitalWrite(left_motor_forward,LOW);
  digitalWrite(left_motor_backward,LOW);
  digitalWrite(right_motor_forward,LOW);
  digitalWrite(right_motor_backward,LOW);
}


