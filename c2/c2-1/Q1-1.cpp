#include <iostream>
using namespace std;


void myplus(int &ref1)
{
	ref1++;
}

void myrev(int &ref1)
{
	ref1 = ref1*(-1);
}

int main()
{
	int num1;
	int num2;

	num1 = 10;
	num2 = 20;
	myplus(num1);
	myrev(num2);
	cout<<num1<<endl;
	cout<<num2<<endl;
	return (0);
}
