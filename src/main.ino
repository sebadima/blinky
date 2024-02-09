#define LED 2

void setup() {
  // Setta la seriale a 115200 baud
  Serial.begin(115200);
  // Setta la porta 2 in modalità OUT
  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  Serial.println("Led è HIGH");
  delay(1000);
  digitalWrite(LED,LOW);
  Serial.println("Led è LOW");
  delay(1000);
}
