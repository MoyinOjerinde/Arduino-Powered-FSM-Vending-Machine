//assigning pins
int itemSelect = 2; // controls item selection button
int giveCoin = 3; // controls coin insertion button
int idleLED = 4; // controls "idle" state led
int acceptLED = 5; // controls "accepting coins" state led
int dispenseLED = 6; // controls "dispension" state led
int dispenseServo = 9; // controls servo to simulate dispension of items

//setting up coin values
int coinCount = 0; // I am thinking of the coins as Quarters
int requiredCoin = 4; // i used four because four Quarters equal a dollar

//defining states
enum State {IDLE, ACCEPTING_COINS, DISPENSION};
State currentState = IDLE; //starts the simulation in the "IDLE" state

void setup()
{
  pinMode(itemSelect, INPUT);
  pinMode(giveCoin, INPUT);
  pinMode(idleLED, OUTPUT);
  pinMode(acceptLED, OUTPUT);
  pinMode(dispenseLED, OUTPUT);
  pinMode(dispenseServo, OUTPUT);
}

void loop()
{
  bool itemSelected = digitalRead(itemSelect);
  bool coinGiven = digitalRead(giveCoin);
  
  switch (currentState) {
    case IDLE:
    
    // if statement used to transition states
    if (coinGiven) {
      currentState = ACCEPTING_COINS;
      coinCount = 1; // Coin count is reset
    }
    
    // Since state is switched, led format is updated
    digitalWrite(idleLED, HIGH);
    digitalWrite(acceptLED, LOW);
    digitalWrite(dispenseLED, LOW);
    break;
    
    case ACCEPTING_COINS:
    // If coints are inserted, increase the coin amount
    if (coinGiven) {
    coinCount++;
    }
    
    //when enough coins are given, move on to the Dispension State
    if (coinCount >= requiredCoin && itemSelected) {
    currentState = DISPENSION;
    }
    
    //updating leds again since state is switched
    digitalWrite(idleLED, LOW);
    digitalWrite(acceptLED, HIGH);
    digitalWrite(dispenseLED, LOW);
    break;
    
    case DISPENSION:
    // Simulates dispensing the item using the servo motor
    digitalWrite(idleLED, LOW);
    digitalWrite(acceptLED, LOW);
    digitalWrite(dispenseLED, HIGH);
    
    digitalWrite(dispenseServo, HIGH); // start motor
    delay(3000); // wait 3 seconds
    digitalWrite(dispenseServo, LOW); // stop motor
    
    //reset back to idle after dispensing
    currentState = IDLE;
    coinCount = 0;
    break;
  }
  delay(100); //to troubleshoot bouncing
}