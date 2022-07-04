#ifndef SELLER_H
#define SELLER_H
#include <iostream>
using namespace std;
#include "Buyer.h"
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
#endif
