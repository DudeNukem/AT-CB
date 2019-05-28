// Easiest way of doing this is with delay but it may introduce other bugs, should use millis.

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  // Randomly blinks B-LED/pin 3
  digitalWrite(4, LOW);
  delay(random(500, 1500 + 1)); // Wait for random(500, 1500 + 1) millisecond(s)
  digitalWrite(4, HIGH);
  delay(random(0, 250 + 1)); // Wait for random(0, 250 + 1) millisecond(s)
  if (digitalRead(2) == HIGH) {
    // G-LED/pin4 flashes on impact/pin2
    digitalWrite(3, HIGH);
    delay(random(1000, 2000 + 1)); // Wait for random(1000, 2000 + 1) millisecond(s)
    digitalWrite(3, LOW);
  }
}
