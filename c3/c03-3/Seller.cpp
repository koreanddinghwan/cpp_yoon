#include <iostream>
using namespace std;
class FruitSeller
{
	private:
		int APPLE_PRICE;
		int numOfApples;
		int myMoney;
	public:
		void InitMembers(int price, int num, int money); //멤버변수 초기화 기능
		int SaleApple(int money); //사과를 파는 기능
		void ShowSalesResult() const;//현재 상태 보여주는 기능
};

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

int FruitSeller::SaleApple(int money) //사과를 파는 기능
{
	int num = money/1000; //사과는 개당 1000원
	numOfApples -= num;//판매한 갯수만큼 사과 줄어듦
	myMoney += money;//구매액 만큼 보유하는 돈 증가
	return num;//구매된 사과 갯수 반환
}

void FruitSeller::ShowSalesResult() const //현재 상태 보여주는 기능
{
	cout<<"남은 사과 :" <<numOfApples<<endl;
	cout<<"판매 수익 :" <<myMoney<<endl;
}
