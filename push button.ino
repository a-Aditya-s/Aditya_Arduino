int ledpin=13;
 int buttonpin=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT);

}

void loop() {

int buttonState=digitalRead(buttonpin);
Serial.println("hello");
if(buttonState==HIGH){
  digitalWrite(ledpin,HIGH);
}
else
{
  digitalWrite(ledpin,LOW);
}
}
