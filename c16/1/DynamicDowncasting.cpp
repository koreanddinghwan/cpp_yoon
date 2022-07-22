#include <iostream>
using namespace std;

class Base
{
	public:
		void VFnc(void)
		{
			cout<<"This is Base"<<endl;
		}
};

class Derived : public Base
{
	public:
		void VFnc(void)
		{
			cout<<"This is Derived!"<<endl;
		}
};

int main(void)
{
	Derived *ptr2 = new Derived;

	/*dynamic_cast upcasting*/
	Base *base1 = dynamic_cast<Base *>(ptr2);
}
