#include "Buyer.h"
#include "Seller.h"

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
}
void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	numOfApples+=seller.SaleApple(money);
	myMoney -= money;
}
void FruitBuyer::ShowBuyResult() const//현재 상태 보여주는 기능
{
	cout<<"현재 잔액 :" <<myMoney<<endl;
	cout<<"사과 개수 :" <<numOfApples<<endl;
}
