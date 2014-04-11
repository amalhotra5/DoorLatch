// State Machine
class SMachine
{
	private:
		int *data_;
		bool running;
		CSensor sensor;
		CMotor motor;
		DLatch latch;
	
	public:
		SMachine(int data[], CSensor &cs, CMotor &cm, DLatch &l):data_(data), sensor(cs), motor(cm), latch(l){}
	
		void start(); // Start State of machine
		void run(); // Running state of machine
		void stop(); // Reset the machine so that it can be restarted again
}; 

void SMachine::start()
{
	cout << "Starting the Machine" << endl << endl;
	motor.ResetMotor(); // sets the original position of motor
	running = true;
}
void SMachine::run()
{
	while(running) //keeps on reading the data and moving the motor unless the Door is Open.
	{
		sensor.Calibrate();
		sensor.ReadData(data_);
		motor.MoveMotor(sensor.getAverage());
		
		if(latch.isOpen(motor.getPosition()))
		{
			cout << "The door is now open" << endl << endl;
			running = false;
		}
	}
}
		
void SMachine::stop()
{
	cout << "Stopped" << endl;
	motor.ResetMotor(); // sets the motor back to original pos
	running = false;
}


