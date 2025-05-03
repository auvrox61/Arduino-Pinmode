// Toggle_LED_with_Button

const int buttonPin=2;
const int ledPin=13;
bool ledState=false;

void setup() {
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  if(digitalRead(buttonPin)==LOW){
    ledState=!ledState;
    digitalWrite(ledPin,ledState);
    delay(700);
  }
}
