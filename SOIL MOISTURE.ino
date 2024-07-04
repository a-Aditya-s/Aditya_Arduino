int sm=9;
int wl=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(wl,OUTPUT);
  pinMode(sm,INPUT);

}

void loop() {

int soilState=digitalRead(sm);
Serial.println("hello");
if(soilState==HIGH){
  digitalWrite(wl,LOW);
}
else
{
  digitalWrite(wl,HIGH);
}
}
