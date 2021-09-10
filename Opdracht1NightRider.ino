const int ledPin = 12;  //Defineer welke leds bij welke poorten hoort
const int ledPin2 = 11;
const int ledPin3 = 10;
const int ledPin4 = 9;
const int ledPin5 = 8;
const int ledPin6 = 7;
const int ledPin7 = 6;
const int ledPin8 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  //zet alle pinmodes op OUTPUT
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
}

//
void loop() {
  //Een while loop die elke pin afgaat van 12 tot en met 5
  int i = 12; //Initializeer en defineer begin waarde
  while( i >= 5){
    turnOff(); //Zet alle pin's uit
    digitalWrite(i, HIGH); //Zet de huidige pin aan
    i--; //Tel af
    delay(100); //Delay van 1 milliseconden.
  }

  //Een while loop die elke pin afgaat van 5 tot en met 12
  i = 5; //Zet waarde weer op 5
  while(i <=12){
    turnOff(); //Zet alle pin's uit
    digitalWrite(i, HIGH); //Zet huidige pin aan
    i++; //Tel op
    delay(100); //Delay van 1 milliseconden.
  }
}

//Methode om alle led's uit te zetten
void turnOff() {
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
}
