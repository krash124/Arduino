const int LED=9;
const int BTN=2;

void setup() {
  pinMode (LED, OUTPUT);
  pinMode (BTN, INPUT);
}

void loop() {
  if (digitalRead(BTN)==LOW){
    digitalWrite(LED, LOW);
  }
  
  else{
    digitalWrite(LED, HIGH);
  }
}