#include "manage.h"

int main()
{
	cus data[100];
	int status;
	int	menu;

	status = 1;//현재 상태
	menu = 0;
	while (status)
	{
		show_menu();
		cin>>menu;
		if (menu == 5)
		{
			cout<<"프로그램을 종료합니다.";
			break;
		}
		if (menu == 1)
			make_deposit(data, &status);//에러처리
		if (menu == 2)
			insert_deposit(data);
		if (menu == 3)
			withdraw_deposit(data);//에러처리
		if (menu == 4)
			inquiry_deposit(data);
		menu = 0;
	}
	return 0;
}
