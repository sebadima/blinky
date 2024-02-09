#define LED 2

void setup() {
  // Setta la seriale a 115200 baud
  Serial.begin(115200);
  // Setta il pin 2 in modalità OUT
  pinMode(LED,OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(LED,HIGH);
  Serial.println("Led è HIGH");
  delay(2000);
  digitalWrite(LED,LOW);
  Serial.println("Led è LOW");
}
