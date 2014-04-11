//Sensor Class

class CSensor
{
	private:
		int reading_;
		
	public:
	
		//Takes the reading from the Sensor and uses it to calibrates the sensor
		bool Calibrate(); 
		
		//Reads data from the sensor and stores the average value as the current reading
		void ReadData(int data[]);
		
		//returns the value of the reading;
		int Value();
};

bool CSensor::Calibrate()
{
	cout << "Calibrating the Sensor" << endl;
	return true;
}

void CSensor::ReadData(int data[])
{
	cout << "Reading the data" << endl;
	
	int sum = 0;
	int i;
	
	for(i = 0; i < size; i++)
		sum += data[i];
	
	reading_ = sum / size;
}

int CSensor::Value()
{
	return reading_;
}