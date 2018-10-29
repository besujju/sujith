int val = 0;  
void setup()
{
pinMode(2, INPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
Serial.begin(9600);
Serial.print("LOW");
delay(2000);
}
void loop() 
{
val = digitalRead(2);
if(val==0)
{       
digitalWrite(3,LOW );  
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);   
Serial.print("HIGH");
delay(2000);
 }
if(val==0)
{       
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
Serial.print("LOW");
}
}


