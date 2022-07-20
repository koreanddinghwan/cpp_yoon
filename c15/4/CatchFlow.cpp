#include <iostream>
using namespace std;

class AAA
{
	public:
		void ShowYou() {cout<<"AAA exception!"<<endl;}
};

class BBB : public AAA
{
	public:
		void ShowYou() {cout<<"BBB exception!"<<endl;}
};

class CCC : public AAA
{
	public:
		void ShowYou() {cout<<"CCC exception!"<<endl;}
};

void ExceptionGenerator(int expn)
{
	if (expn == 1)
		throw AAA();
	else if (expn == 2)
		throw BBB();
	else
		throw CCC();
}

int main(void)
{
	AAA test = CCC();
	try {
		ExceptionGenerator(1);
		ExceptionGenerator(2);
		ExceptionGenerator(1);
	} catch (AAA &expn) {
		expn.ShowYou();
	}
	catch (BBB &expn) {
		expn.ShowYou();
	}
	catch (CCC &expn) {
		expn.ShowYou();
	}
	return 0;
}
