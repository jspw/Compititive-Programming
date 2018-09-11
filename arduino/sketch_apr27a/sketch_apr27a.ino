void setup()
{
  Serial.begin(9600);
}


void loop()
{
  if(Serial.available()){
    int value =0;
    while(1){
      int a=Serial.read();
      if(value== 10)
      {
        break;
      }
      else if(ch== -1)
      {
        continue;
      }
      Serial.println(value);
    }
    
    
  }
}

