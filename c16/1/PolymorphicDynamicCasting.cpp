#include <iostream>
using namespace std;

class Base
{
	public:
		virtual void VFnc(void)
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
	Base *ptr1 = new Derived;
	Derived *ptr2 = new Derived;

	/*dynamic_cast upcasting*/
	Base *base1 = dynamic_cast<Base *>(ptr2);
	

	/*dynamic_cast downcasting*/
	Derived *derive1 = dynamic_cast<Derived *>(ptr1);
}
