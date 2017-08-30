int trigger=7;
int echo=6;
int rly=13;

long time=0;
long dist=0;
void setup()
{
Serial.begin (9600);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
pinMode(rly,OUTPUT);
}
void loop()
{
digitalWrite(trigger, LOW);
delay(5);
digitalWrite(trigger, HIGH);
delay(10);
digitalWrite(trigger, LOW);
time = pulseIn(echo, HIGH);
dist = (time/2) / 29.1;
Serial.println(dist);
if(dist<15){
  digitalWrite(rly,LOW);
}
if(dist>50){
  digitalWrite(rly,HIGH);
}
delay(1000);
}
