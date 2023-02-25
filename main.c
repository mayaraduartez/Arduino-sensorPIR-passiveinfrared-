int pinoBuzzer = 13;
int pinoPIR = 12;
int estadoPIR;

void setup()
{
  Serial.begin(9600);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoPIR, INPUT);
}

void loop()
{
  estadoPIR = digitalRead(pinoPIR);
  Serial.println(estadoPIR);
  if(estadoPIR == HIGH){
	tone(pinoBuzzer, 500);    
  }
  else{
   noTone(pinoBuzzer); 
  }
  delay(1000);
}