#include <iostream>
using namespace std;

class Base{
	private:
		int fuelGauge;
	public:
		Base(int fuel) : fuelGauge(fuel)
		{}
		void ShowCarState() {cout<<"fuel : "<<this->fuelGauge<<endl;}
};

class Truck : public Base
{
	private:
		int freightweight;
	public:
		Truck(int fuel, int weight) : Base(fuel), freightweight(weight) {}
		void ShowTruckState() {ShowCarState(); cout<<"freightweight : "<<freightweight<<endl;}
};

int main(void)
{
	Base *pcar1 = new Truck(80, 200);
	Truck *ptruck = (Truck *)pcar1; //오류
	
	Base *pcar2 = new Base(120);
	Truck *ptruck2 = (Truck *)pcar2;
	ptruck2->ShowTruckState();
	return 0;
}
