#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;


void	print_error(int errnum)
{
	if (errnum == 1)
	{
		cout<<"초기화 실패"<<endl;
	}
	else
	{
		cout<<"직사각형 초기화 실패"<<endl;
	}
}

int main()
{
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
		print_error(1);
	if (!pos1.InitMembers(2, 4))
		print_error(1);

	Point pos2;
	if (!pos2.InitMembers(5, 9))
		print_error(1);

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		print_error(2);
	if (!rec.InitMembers(pos1, pos2))
		print_error(2);

	rec.ShowRecInfo();
	return 0;
}
