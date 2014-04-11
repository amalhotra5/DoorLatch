#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>

using namespace std;
int size; //global

#include "CSensor.h"
#include "CMotor.h"
#include "DLatch.h"
#include "SMachine.h"

int main()
{
	//Sensor data;
	int data[] = {100, 101, 105, 110, 210, 100, 102, 110, 150, 100};
	size = sizeof(data)/sizeof(data[0]);
	
	DLatch latch(1000); // Door latch with value 1000
	CSensor sensor;  // sensor that reads the value
	CMotor motor; //motor 
	
	//State Machine
	SMachine m(data, sensor, motor, latch);
	m.start(); // start mode
	m.run(); // run mode
	m.stop(); // stop mode
}