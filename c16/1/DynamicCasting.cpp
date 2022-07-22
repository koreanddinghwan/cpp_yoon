#include <iostream>
using namespace std;

class Car{
	private:
		int fuelGauge;
	public:
		Car(int fuel) : fuelGauge(fuel)
		{}
		void ShowCarState() {cout<<"fuel : "<<this->fuelGauge<<endl;}
};

class Truck : public Car
{
	private:
		int freightweight;
	public:
		Truck(int fuel, int weight) : Car(fuel), freightweight(weight) {}
		void ShowTruckState() {ShowCarState(); cout<<"freightweight : "<<freightweight<<endl;}
};

int main(void)
{
	Car *pcar1 = new Truck(80, 200);
	Truck *ptruck1 = dynamic_cast<Truck *>(pcar1); //다운캐스팅

	Car *pcar2 = new Car(120);
	Truck *ptruck2 = dynamic_cast<Truck *>(pcar2);//다운캐스팅

	Truck *ptruck3 = new Truck(70, 150);
	Car *pcar3 = dynamic_cast<Car *>(ptruck3);//업캐스팅
}
