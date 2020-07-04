int pinoledverm = 12;
int pinoledazul = 11;
int pinopir = 3;
int acionamento;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinoledverm, OUTPUT);
  pinMode(pinoledazul, OUTPUT);
  pinMode(pinopir, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  acionamento = digitalRead(pinopir);
  if(acionamento == LOW){
    digitalWrite(pinoledverm, LOW);
    digitalWrite(pinoledazul, HIGH);
  }else{
    digitalWrite(pinoledverm, HIGH);
    digitalWrite(pinoledazul, LOW);
  }
}
