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

## Tools
- TinkerCad - Used to prototype circuits and code
- Arduino Uno - Used code and execute FSM code
- 3Leds, 2 pushbuttons, Servomotor, Breadboard, Jumper wires - Used to simulate machine components and create circuit

## Results/Future Actions
In this project, I designed and implemented a simple "coin-operated" vending machine simulation using an Arduino Uno. This project involved using LEDs, Pushbuttons, and a servo motor to simulate the operations of a vending machine. My main goal, was to create a finite state machine (FSM) to handle four key states, IDLE, ACCEPTING_COINS, ITEM_SELECTION, and DISPENSION based on user input "coins and item selection".

Here are some **key takeaways** that I've gained from this project:

- **Understanding Finite State Machines**: This project was a big lesson for implementing FSM in embeded systems. I had to learn how to structure code for different states and troubleshoot how to transition between them smoothly based on user input without causing bugs or errors. I feel like I have learned alot in terms of C++ coding and circuit design.
- **Basic Debugging and Troubleshooting**: A major challenge I faced during this project was circuit issues, especially in the case of controlling the buttons. Initially, I would have situations where the button would bounce, meaning that it sometimes registered multiple inputs at once, navigating through many different stages instead of just moving on to the next state. By adding a debugging mechanism in my code, I was able to improve some of the responsiveness of the system and make sure that these problems didnt persist.
- **Microcontroller Programming and Circuit Design**: This project was also a huge lesson in Arduino programming, I was able to get better at handling inputs/outputs, using conditional statements and stratagetically implementing delays.

### Looking forward
Looking forward, I would like to possbily add a bit more to this project, implementing extra parts that I wasnt able to during prototyping such as:
- Different coin values (Dimes, Nickels, etc)
- Utilize a 12C OLED display to showcase text so that the user can learn a little more about what they're doing
- Inventory tracking
- Wireless mobile notifications, possibly by utilizing an ESP32
- and more


Overall, this project was a very fun learning experience, and im excited to continue developing my skills to tackle more in the future




