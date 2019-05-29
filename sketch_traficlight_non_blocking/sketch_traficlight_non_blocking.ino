// set pin numbers:
const int redPin =  13;
const int yellowPin =  12;
const int greenPin =  11;

// Variables will change:
int redState = LOW;
int yellowState = LOW;
int greenState = LOW;
long StartTime = 0;
long interval = 30000;

void setup() {

  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {

  unsigned long CheckTime = millis();
  unsigned long elapsedTime = CheckTime - StartTime;

  if (elapsedTime > interval) {

    StartTime = CheckTime;

  }

  if (elapsedTime < 10000) {
    green();
  }

  if (elapsedTime > 10000 && elapsedTime < 15000 ) {
    yellow();
  }

  if (elapsedTime > 15000  ) {
    red();
  }

  digitalWrite(redPin, redState);
  digitalWrite(greenPin, greenState);
  digitalWrite(yellowPin, yellowState);

}

void green() {
  redState = LOW;
  yellowState = LOW;
  greenState = HIGH;
}

void yellow() {
  redState = LOW;
  yellowState = HIGH;
  greenState = LOW ;
}

void red() {
  redState = HIGH;
  yellowState = LOW;
  greenState = LOW ;
}
