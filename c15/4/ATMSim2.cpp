#include <iostream>
#include <cstring>
using namespace std;

class AccountException
{
	public:
		virtual void ShowExceptionReason() = 0;
};

class DepositException : public AccountException
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

class WithdrawException : public AccountException
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
		void Deposit(int money) throw (AccountException)
		{
			if (money < 0)
			{
				DepositException expn(money);
				throw expn;
			}
			balance += money;
		}
		void WithDraw(int money) throw (AccountException)
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
	} catch (AccountException &expn) {
		expn.ShowExceptionReason();
	}
	myacc.ShowMyMoney();

	try {
		myacc.WithDraw(20000);
	} catch (AccountException &e) {
		e.ShowExceptionReason();
	}
	myacc.ShowMyMoney();
}
