C++ Program

To compile the program in Windows/Linux use the c++11 version
* Clone the directory
* Run the following command on windows cygwin or linux terminal
	g++ -std=c++11 -W -Wall main.cpp

There is also a compiled executable provided in the exe folder	
/***************************************************************
There are 2 test cases for the driver class(main).
In first, the sensor senses the DANGER LEVEL and Opens the Door Latch by 
	moving the motor to the average of the sensed data.

In Second, the sensor finds the value to be less than DANGER_LEVEL and closes
	the door by moving the motor back to the average of sensed data.
*********************************************************************/

