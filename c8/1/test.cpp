#include <atomic>
#include <iostream>
using namespace std;

class A
{
	public:
		void basefunc()
		{}
};

class B : public A
{
	public:
		void derivedfunc()
		{}
};

int main()
{
	{
		A *ptr1 = new A();
		A *ptr2 = new B();
	}

	{
		A *ptr1 = new B();
		B *ptr2 = ptr1;
	}
	{
		B *ptr1 = new B();
		A *ptr2 = ptr1;
	}
	return 0;
}
