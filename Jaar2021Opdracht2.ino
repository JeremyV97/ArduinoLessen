//Instantieer en definier de poorten
const int ledPin = 11;
const int buttonPin = 2;
      bool lastStatus = false;  //Hou de status bij van de LED
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //pinMode instellen zodat we ze kunnen gebruiken
  pinMode(buttonPin, INPUT); //ledPin is OUTPUT want we willen ertegen praten, buttonPin is INPUT want we willen wat hij te zeggen heeft
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == HIGH){ //Als de knop word ingedrukt gaan we de if statement in
    lastStatus = !lastStatus; //We draaien de boolean om door te zeggen dat de boolean het tegenovergestelde is van zijn huidige waarde
    digitalWrite(ledPin, lastStatus); //We geven deze waarde door aan de led
    delay(500); //We laten de arduino even wachten zodat het lampje niet héél snel aan en uit gaat
  }
}
