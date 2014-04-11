#include <iostream>
#include <stdlib.h>

using namespace std;

int size; //global

//Use this to set the dangerous level threshold
#define DANGER_LEVEL 100

#include "CSensor.h"
#include "CMotor.h"
#include "DLatch.h"

int main()
{
	//Sensor data;
	int data[] = {100, 101, 105, 110, 210, 100, 102, 110, 150, 100};
	int data2[] = {100, 101, 105, 110, 110, 100, 100, 102, 80, 70};
	
	size = sizeof(data)/sizeof(data[0]);
	
	DLatch latch(data); 
	
	latch.run();
	latch.run(data2);
}