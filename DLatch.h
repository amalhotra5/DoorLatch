// Class DLatch

class DLatch
{
	private:
		int value_;
	
	public:
		DLatch(int x):value_(x){}
		DLatch(DLatch &dl):value_(dl.value_){}
		
		bool isOpen(int y); // checks if the door is open by comparing the motor position to the door latch value.
};

bool DLatch::isOpen(int y)
{
	if(y >= value_)
		return true;
	
	return false;
}