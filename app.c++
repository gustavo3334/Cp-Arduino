int ledverde = 11;
int ledazul = 10;
int ledvermelho = 9;
int LDR = A0;
int valorLDR = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledverde, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(LDR, INPUT);
}

void loop() {
  valorLDR = analogRead(LDR);  
  Serial.print("LDR: ");
  Serial.println(valorLDR);    

  apagaLeds();  

  if (valorLDR < 100) {
    digitalWrite(ledverde, HIGH);     
  }
  else if (valorLDR >= 100 && valorLDR < 150) {
    digitalWrite(ledazul, HIGH);      
  }
  else {
    digitalWrite(ledvermelho, HIGH);  
  }

  delay(100);  
}

void apagaLeds() {
  digitalWrite(ledverde, LOW);
  digitalWrite(ledazul, LOW);
  digitalWrite(ledvermelho, LOW);
}
