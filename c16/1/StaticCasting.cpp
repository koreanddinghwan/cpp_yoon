#include <iostream>
#include <exception>
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
	Base *base1 = new Derived;
	Derived *derive = static_cast<Derived *>(base1);
	derive->VFnc();

	Base *base2 = new Base;
	Derived *error = static_cast<Derived *>(base2);
	error->VFnc();
	return 0;
}
