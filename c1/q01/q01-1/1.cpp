#include <iostream>

int main()
{
	int arr[5];

	int i;
	i = 0;
	while (i < 5)
	{
		std::cout<<i + 1<<"번째 정수 입력: ";
		std::cin>>arr[i];
		i++;
	}
	int result;

	result = 0;
	i = 0;
	while (i < 5)
	{
		result += arr[i++];
	}
	std::cout<<"합계: "<< result;
	return (0);
}
