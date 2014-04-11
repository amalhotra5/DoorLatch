
//Sensor Class
class CSensor
{
	private:
		int *data_;
		
	public:
		CSensor(){} //Constructor
		CSensor(CSensor &cs):data_(cs.data_){} //Copy Constructor
		~CSensor(){} //Destructor
		
		bool Calibrate(); //calibrates the sensor and returns true
		void ReadData(int data[]); //wrapper 
		double getAverage(); // computes the average of the read data
};

bool CSensor::Calibrate()
{
	cout << "Calibrating the Sensor" << endl;
	return true;
}

void CSensor::ReadData(int data[])
{
	cout << "Reading the data" << endl;
	data_ = data;
}

double CSensor::getAverage()
{
	int sum = 0;
	int i;
	
	for(i = 0; i < size; i++)
		sum += data_[i];
	
	return sum / size;
}