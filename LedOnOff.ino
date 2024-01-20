// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
