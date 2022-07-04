#include "manage.h"

int data_index = 0;


void show_menu()
{
	cout<<"----Menu----"<<endl;
	cout<<"1. 계좌개설"<<endl;
	cout<<"2. 입금"<<endl;
	cout<<"3. 출금"<<endl;
	cout<<"4. 전체고객 잔액조회"<<endl;
	cout<<"5. 프로그램 종료"<<endl;
	cout<<"기능을 선택하세요 : ";
}

void make_deposit(cus *data, int *status)
{
	int 	accnumber;
	char	username[20];

	if (::data_index >= 100)
	{
		cout<<"더 이상 계좌를 개설할 수 없습니다.";
		*status = -1;
		return ;
	}
	cout<<"계좌번호를 입력하세요 :";
	cin>>accnumber;
	cout<<"이름을 입력하세요 :";
	cin>>username;
	data[::data_index].accnum = accnumber;
	data[::data_index].name = strdup(username);
	data_index++;
}

void insert_deposit(cus *data)
{
	int accid;
	int	i;

	cout<<"[입  금]";
	cout<<"계좌 ID: ";
	cin>>accid;
	i = 0;
	while (i < ::data_index)
	{
		if (accid == data[i].accnum)
		{
			int amt;
			cout<<"입금액";
			cin>>amt;
			data[i].deposit += amt;
			cout<<"입금완료"<<endl;
			break;
		}
		i++;
	}
	if (i == ::data_index)
	{
		cout<<"계좌를 찾지 못했습니다"<<endl;
	}
}

void withdraw_deposit(cus *data)
{
	int	i;
	int	accid;

	cout<<"[출  금]"<<endl;
	cout<<"계좌 ID: ";
	cin>>accid;
	i = 0;
	while (i < ::data_index)
	{
		if (accid == data[i].accnum)
		{
			int amt;
			cout<<"출금액";
			cin>>amt;
			if (data[i].deposit >= amt)
			{
				data[i].deposit += amt;
				cout<<"출금완료"<<endl;
			}
			else
			{
				cout<<"예금이 적어 출금할 수 없습니다."<<endl;
			}
			break;
		}
		i++;
	}
	if (i == ::data_index)
	{
		cout<<"계좌를 찾지 못했습니다"<<endl;
	}
}

void inquiry_deposit(cus *data)
{
	int	i;

	i = 0;
	while (i < data_index)
	{
		cout<<endl;
		cout<<"계좌ID: "<<data[i].accnum<<endl;
		cout<<"이름: "<<data[i].name<<endl;
		cout<<"잔액: "<<data[i].deposit<<endl;
		i++;
	}
}
