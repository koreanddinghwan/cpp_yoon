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
	Derived *ptr2 = new Derived;


	/*dynamic_cast upcasting*/
	Base *base1 = dynamic_cast<Base *>(ptr2);
	base1->VFnc();

	/*dynamic_cast downcasting*/
	Base *ptr1 = new Derived;
	Derived *derive1 = dynamic_cast<Derived *>(ptr1);
	derive1->VFnc();

	Base *ptr3 = new Base;
	Derived *derive2 = dynamic_cast<Derived *>(ptr3);
	derive2->VFnc();
}
