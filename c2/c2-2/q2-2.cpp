#include <iostream>
using namespace std;

int main()
{
	const int num = 10;
	const int	*p = &num;
	const int *(&rp) = p;

	cout<<*rp<<endl;
	cout<<*p<<endl;

	return 0;
}
