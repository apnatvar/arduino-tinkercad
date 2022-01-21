# arduino-tinkercad

_**Hi there!**_

These are the codes for the module **Engineering Design Project**. I wrote and executed these codes on https://www.tinkercad.com/
My profile would be named as **apnatvarawat90**. You can check the codes with the circuits there.
The codes were downloaded from tinkercad but for some reason the website decided to rename all my codes appending a '1' on each file. 

Below a short description of all the codes in this repository
1. **xor_and_xnor1** -_Circuit Required: Arduino Uno R3_- Small menu driven program, performs XOR/XNOR depending on the input from the user.Prints the output to the serial monitor in tinkercad. 
2. **arduino_based_sanitiser_dispenser1** - _Circuit Required: Arduino Uno R3, 9V Battery, Ultrasonic Distance Sensor, DC Motor, H-bridge Motor Driver_- Detects distance using the ultrasonic sensor to approximate the presence of a hand. Depening on the calculated distance to press the nozzle of the sanitizer bottle giving a light/medium/strong spray. A DC Motor is required to press the nozzle and reset it after a spray. It will have to be attached to an object which would actaully be presing the nozzle.
3. **dc_motor** -_Circuit Required: Arduino Uno R3, H-bridge Motor Driver, 9V Battery, DC Motor_- A smaller program, this helped me learn how to move a DC Motor clockwise and anti-clockwise for activities.
4. **serial_monitor_printing1** - _Circuit Required: Arduino Uno R3_- This program uses the Serial Monitor to print the same value in various number formats. The code in  the commented part also uses the Serial Monitor to print simple strings.
5. **multiple_led_functions1** - _Circuit Required: Arduino Uno R3, 5 Red LED, 5 Resistors_- Blinks 5 LEDs either randomly, sequentially, on and off (one LED only). Code for each has been commented out. Uncomment the needed code inside the _void loop()_function and run to get the appropriate results.
6. **distance1** - _Circuit Required: Arduino Uno R3, 3 Resistors, 3 Red LED, Ultrasonic Distance Sensor_- Uses the ultrasonic sensor to calculate the distance of an object in cm. Depending on how far/close the object is it will illuminate 1/2/3 LEDs.
7. **cd45431** - _Circuit Required: Arduino Uno R3, 7-Segment Decodder, Cathode 7 Segment Display, Resistor_- The variable i in _void loop()_function is assigned a value. You can assign any value that you would like to display or change the code to take input form a user and display that number on the 7 segment display.
8. **and1** - _Circuit Required: Arduino Uno R3, 5 Resistors, 3 Red LED, 2 Pushutton_- Simple circuit to simulate an AND gate. The input is given from the pushbuttons. A led is assigned to each push button to display the input. The third LED is used to display the output. (on for 1 and off for 0).  
9. **xor1** - _Circuit Required: Arduino Uno R3, 5 Resistors, 3 Red LED, 2 Pushutton_- Simple circuit to simulate a XOR gate. A led is assigned to each push button to display the input. The third LED is used to display the output. (on for 1 and off for 0).
10.**nand1** - _Circuit Required: Arduino Uno R3, 5 Resistors, 3 Red LED, 2 Pushutton_- Simple circuit to simulate a NAND gate. A led is assigned to each push button to display the input. The third LED is used to display the output. (on for 1 and off for 0).
11. **digitalread1** - _Circuit Required: Arduino Uno R3, 2 Resistors, Pushbutton, Red LED_- Learning Code. The simplest form of a ciruit with a pushbutton to take an input. The led is on as long as the button is pressed.
12.**a2_74hc731** - _Circuit Required: Arduino Uno R3, 2 Red LED, 2 Resistors, 1 Dual J-K Flip-Flop_- This continuously blinks the two LEDs alternatively.
13. **motion** - _Circuit Required: Arduino Uno R3, PIR Sensor, Resistor, Red LED_- Uses the PIR sensor to detect if there is anything moving in the range of the sensor. If it detects movement, the LED goes to on state
