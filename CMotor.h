// CMOtor Class
class CMotor
{
	private:
		int position_;
		
	public:
		CMotor():position_(0){} // constructor
		CMotor(CMotor &cm):position_(cm.position_){} // copy constructor
		
		void ResetMotor(); // brings the motor to its original position
		void MoveMotor(int distance); // moves the motor by that distance
		int getPosition(); // returns the position of the motor
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

int CMotor::getPosition()
{
	return position_;
}