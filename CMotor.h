// CMotor Class

class CMotor
{
	private:
		int position_;
		
	public:
		CMotor():position_(0){} // constructor
		
		// Reset the motor to its original position '0'
		void ResetMotor(); 
		
		// moves the motor using absolute positioning (+ or -)
		void MoveMotor(int distance); 
};

void CMotor::ResetMotor()
{
	position_ = 0;
}

void CMotor::MoveMotor(int distance)
{
	cout << "Moving the Motor from " << position_ << " to " << position_ + distance << endl;
	position_ += distance;
}