int led[8]={15,14,13,12,11,10,9,8};
const byte sw=6;
void setup() {
  
for(int i=0;i<8;i++)
{
  pinMode(led[i],OUTPUT);
}  
pinMode(sw,INPUT);
}

void loop() 
{
bool val=digitalRead(sw);
if(val)
{
    for(int h=0;h<2;h++)
  {
    for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
    }
  delay(300);
    for(int ij=0;ij<8;ij++)
    {
      digitalWrite(led[ij],LOW);
    }
  delay(300);
  }
   //left shift
  for(int j=8;j>=0;j--)
    {      
      digitalWrite(led[j],HIGH);
      delay(300);
      digitalWrite(led[j],LOW);
    }
    delay(300);
    //all light
    for(int h=0;h<2;h++)
    {
    for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
    }
  delay(300);
    for(int ij=0;ij<8;ij++)
    {
      digitalWrite(led[ij],LOW);
    }
  delay(300);
  }
    //right shift
      for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
      delay(300);
      digitalWrite(led[j],LOW);
    }
    delay(300);
     
}
else
{//left shift
  for(int j=8;j>=0;j--)
    {      
      digitalWrite(led[j],HIGH);
      delay(300);
      digitalWrite(led[j],LOW);
    }
        //right shift
      for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
      delay(300);
      digitalWrite(led[j],LOW);
    }
    delay(300);
  }
}
