int ledPin = 2; // Definition du pin pour la led
int buttonPin = 3; // Definition du pin pour le button
int buttonState; // Declaration de la variable pour l'etat du boutton

void setup()
{
    pinMode(ledPin, OUTPUT); // OUTPUT est une constante Boolein 0 ou 1
    pinMode(buttonPin, INPUT); // INPUT est une constante Boolein 0 ou 1
}

void loop()
{
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) { // HIGH est une constante Boolein qui a pour valeur 1 qui fournit du 5 V
        digitalWrite(ledPin, LOW); // LOW est une constante Boolein qui a pour valeur 0 qui fournie pas de tension
    }
    else {
        digitalWrite(ledPin, HIGH);
    }
}
