// JUST USING THIS AS VERSION CONTROL
// C++ code
//
#define BUTTON 7

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop()
{
  int btn = digitalRead(BUTTON);
  if (btn == LOW) {
  	Serial.print("BUTTON");
  }
  Serial.print("Hello world!\n");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}