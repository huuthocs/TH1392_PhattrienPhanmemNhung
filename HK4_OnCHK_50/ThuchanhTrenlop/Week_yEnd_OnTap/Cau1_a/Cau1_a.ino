#define ledA 2

unsigned long time_cur = 0;
unsigned long time_last = 0;
unsigned long time_ledA = 5000;

void setup() {
  pinMode(ledA, OUTPUT);
}

void loop() {
  time_cur = millis();
  if(time_cur - time_last < time_ledA){
    digitalWrite(ledA, !digitalRead(ledA));
    time_cur = time_last;
  } else {
    digitalWrite(ledA, LOW);
  }
}
