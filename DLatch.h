// Class DLatch

/*
This class takes readings from the sensor and manipulates the motor to close or open
the door as needed depending on the readings.
*/
class DLatch
{
	private:
		CMotor motor;
		CSensor sensor;

	public:
		DLatch(int data[])
		{
			//Setup the entire system
			motor.ResetMotor();
			
			if(sensor.Calibrate())
				sensor.ReadData(data);
		}
		
		void run();
		void run(int data[]); // checks if the door needs to be open by comparing the motor position to DANGER_LEVEL VALUE.
};

void DLatch::run(int data[])
{
	//Read the current data
	sensor.ReadData(data);
	
	run();
}

void DLatch::run()
{
	//Check the sensor for the current levels
	if (sensor.Value() >= DANGER_LEVEL)
	{
		//Latch needs to be opened to vent dangerous levels of gas/heat/pressure
		cout << "Dangerous levels detected - venting area..." << endl;
		
		motor.MoveMotor(sensor.Value());
	}
	else
	{
		//Level aren't dangerous so you can close the vent
		cout << "Dangerous levels clear - closing vent..." << endl;
		motor.MoveMotor(-1 * sensor.Value());
	}
}