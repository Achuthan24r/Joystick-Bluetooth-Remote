

int joyX = A0;   // Left / Right
int joyY = A1;   // Forward / Backward
int autoBtn = 7;
int manualBtn = 8;

void setup() {
  pinMode(autoBtn, INPUT_PULLUP);
  pinMode(manualBtn, INPUT_PULLUP);

  Serial.begin(9600);   // HC-05 Bluetooth
}

void loop() {

  int xVal = analogRead(joyX);
  int yVal = analogRead(joyY);

  // Forward
  if (yVal > 700) {
    Serial.write('F');
    delay(100);
  }
  // Backward
  else if (yVal < 300) {
    Serial.write('B');
    delay(100);
  }
  // Left
  else if (xVal < 300) {
    Serial.write('L');
    delay(100);
  }
  // Right
  else if (xVal > 700) {
    Serial.write('R');
    delay(100);
  }
  // Stop
  else {
    Serial.write('S');
    delay(100);
  }

  // Mode switching
  if (digitalRead(autoBtn) == LOW) {
    Serial.write('A');
    delay(300);
  }

  if (digitalRead(manualBtn) == LOW) {
    Serial.write('M');
    delay(300);
  }
}
