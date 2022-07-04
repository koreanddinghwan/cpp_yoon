#include <iostream>

int main()
{
	int		sold;

	sold = 0;

	while (1)
	{
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin>>sold;
		if (sold == -1)
			break;
		std::cout<<"이번 달 급여: "<<50 + sold * 0.12<<"만원"<<std::endl;
	}

	return 0;
}
