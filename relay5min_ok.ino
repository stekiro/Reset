const int relayPin = D1; // Collega il pin di controllo del relè al pin D1 del NodeMCU

void setup() {
  pinMode(relayPin, OUTPUT); // Imposta il pin del relè come output
}

void loop() {
  digitalWrite(relayPin, HIGH); // Attiva il relè
  delay(1000); // Mantieni il relè attivo per un secondo

  digitalWrite(relayPin, LOW); // Disattiva il relè
  delay(300000); // Attendi 5 minuti (300,000 millisecondi) prima di attivare di nuovo il relè
}
