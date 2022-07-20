#include <iostream>
using namespace std;

int main(void)
{
	int num1,num2;

	cout<<"숫자 2개 입력:";
	cin>>num1>>num2;

	try {
		if (num2 == 0)
			throw num2;
		cout<<"나눗셈 몫: "<<num1/num2<<endl;
		cout<<"나눗셈 나머지:"<<num1 % num2<<endl;
	} catch (int expn) {
		cout<<"계수는 "<<expn<<"이 될 수 없다."<<endl;
		cout<<"프로그램 다시 실행"<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}
