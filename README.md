# Arduino-Powered-FSM-Vending-Machine
A FSM (FInite-State-Machine) is an abstract machine that presents a finite number of states and is able to transition between these states depending on the input and condition the machine is currently in. Utilizing this concept, I was able to create a Vending Machine Model using an Arduno microcontroller, led lights, and buttons, that mimics the states that a Vending Machine might be in depending on different inputs.

__The different states present in this model Vending Machine are the following:__

### Idle 
- Waiting for coin input
- No other actions taken at this time

### Accepting Coins
- Transitioned to after user inputs coins 
- Add value of coins inputed to total
- Automatically transitioned to "Item Selection" if enough coins are inserted

### Item Selection
- User can press button to select an item
- Checks if total inputed is enough for selected item
- Transitions to either "Dispension" or back to "Accepting Coins" depending on if coin value is met

### Dispension
- Represents change dispension via led
- Returns back to "idle" state
