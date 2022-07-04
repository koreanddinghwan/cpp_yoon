#include <iostream>
using namespace std;

int RefRetFunc(int &ref1)
{
	ref1++;
	return (ref1);
}

int main(void)
{
	int num1=1;
	int num2=RefRetFunc(num1);
	
	num1++;
	num2++;
	cout<<"num1: "<<num1<<endl;
	cout<<"num2: "<<num2<<endl;
	return 0;
}
