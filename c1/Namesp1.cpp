#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout<<"BestCom의 함수"<<std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout<<"ProgCom의 함수"<<std::endl;
	}
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}
