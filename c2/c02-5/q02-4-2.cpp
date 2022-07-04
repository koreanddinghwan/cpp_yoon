#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int	arr[5];

	int i = 0;
	srand((unsigned int)time(0));
	while (i < 5)
	{
		arr[i] = rand() % 100;
		i++;
	}

	i = 0;
	while (i < 5)
	{	
		cout<<i + 1<<"번째 수: "<<arr[i]<<endl;
		i++;
	}
	return 0;
}
