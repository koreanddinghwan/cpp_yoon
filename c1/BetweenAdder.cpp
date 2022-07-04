#include <iostream>

int main()
{
	int val1, val2;
	int	result = 0;
	std::cout<<"두개의 숫자입력: ";
	std::cin>>val1>>val2;

	if(val1<val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;

	}
	else
	{
		int i = val2 + 1;
		while (i < val1)
		{
			result += i++;
		}
	}
	std::cout<<"두 개 숫자 사이 값들의 합: "<< result << std::endl;
	return (0);
}
