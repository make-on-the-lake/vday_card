#define LED_PIN 0

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); 
    delay(8000);
    digitalWrite(LED_PIN, LOW);
    delay(8000);
}

