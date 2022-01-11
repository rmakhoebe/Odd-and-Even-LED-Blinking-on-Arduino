
int del=1000; // variable define the delay
void setup() 
{
 // make pins 2, 3, 4 and up to 13 as digital output pins
 //Instead of initializing individually, we make use of for loop
 // to initialize all pins 
 for(int i=2; i<=13; i++)
  {
    pinMode(i,OUTPUT); // declare pins as a output
  }

}

void loop()
{
  // this for loop makes an even number of digital output pins
  // digital high
  for(int i=2; i<=13; i++)
  {
  if(i%2==0)
  {digitalWrite(i,HIGH);
  delay(del);
  digitalWrite(i,LOW);
  delay(del);
  }
}
/*// this for loop makes all pins digital low

//for(int i=2; i<=13; i++)
{
  digitalWrite(i,LOW);
 delay(del);
}*/
// this for loop makes an odd number of digital output pins
// digital high
for(int i=2; i<=13; i++)
{
  if(i%2==1)
  {
    digitalWrite(i,HIGH);
  delay(del);
  digitalWrite(i,LOW);
  delay(del);
  }
}
/*// this for loop makes an even number of digital output pins
// digital low
for(int i=2; i<=13; i++)
{
  digitalWrite(i,LOW);
  delay(del);
}*/
}
