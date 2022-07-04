#include <iostream>

int main()
{

	int num;

	std::cout<<"숫자를 입력하세요"<<std::endl;
	std::cin>>num;

	int i = 1;
	while (i < 10)
	{
		std::cout<<num<<" x "<<i<<" = "<<i * num<<std::endl;
		i++;
	}


	return 0;
}
