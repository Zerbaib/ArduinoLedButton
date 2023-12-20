int ledPin = 2;
int buttonPin = 3;
int buttonState;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
        digitalWrite(ledPin, LOW);
    }
    else {
        digitalWrite(ledPin, HIGH);
    }
}