#include <iostream>
using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main(void)
{
	try {
		SimpleFuncOne();
	} catch (int expn) {
		cout<<"μμΈμ½λ"<<expn<<endl;
	}
	return 0;
}

void SimpleFuncOne(void)
{
	cout<<"SimpleFuncOne()"<<endl;
	SimpleFuncTwo();
}

void SimpleFuncTwo(void)
{
	cout<<"SimpleFuncTwo()"<<endl;
	SimpleFuncThree();
}

void SimpleFuncThree(void)
{
	cout<<"SimpleFuncThree()"<<endl;
	throw -1;
}
