#include <iostream>

namespace Parent
{
	int num = 1;
	namespace Daughter
	{
		int num = 2;
	}
	namespace Son
	{
		int num = 3;
	}
}

int main()
{
	std::cout<<Parent::num<<std::endl;
	std::cout<<Parent::Daughter::num<<std::endl;
	std::cout<<Parent::Son::num<<std::endl;
	return 0;
}
