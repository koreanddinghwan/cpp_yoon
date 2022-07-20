#include <iostream>
#include <cstring>
using namespace std;

class DepositException
{
	private:
		int reqDep;
	public:
		DepositException(int money) : reqDep(money)
		{}
		void ShowExceptionReason()
		{
			cout<<"[예외 메시지 :]"<<reqDep<<"는 입금불가"<<endl;
		}
};

class WithdrawException
{
	private:
		int balance;
	public:
		WithdrawException(int money) : balance(money)
		{}
		void ShowExceptionReason()
		{
			cout<<"[예외메시지 : "<<balance<<"잔액부족]"<<endl;
		}
};

class Account
{
	private:
		char accNum[50];
		int balance;
	public:
		Account(const char *acc, int money) : balance(money)
		{
			strcpy(accNum, acc);
		}
		void Deposit(int money) throw (DepositException)
		{
			if (money < 0)
			{
				DepositException expn(money);
				throw expn;
			}
			balance += money;
		}
		void WithDraw(int money) throw (WithdrawException)
		{
			if (money > balance)
				throw WithdrawException(balance);
			balance -= money;
		}
		void ShowMyMoney()
		{
			cout<<"잔고 : "<<balance<<endl;
		}
};

int main(void)
{
	Account myacc("1234-1234", 5000);

	try {
		myacc.Deposit(2000);
		myacc.Deposit(-300);
	} catch (DepositException &expn) {
		expn.ShowExceptionReason();
	}
	myacc.ShowMyMoney();

	try {
		myacc.WithDraw(20000);
	} catch (WithdrawException &e) {
		e.ShowExceptionReason();
	}
	myacc.ShowMyMoney();
}
