#include "q01-4.h"

void BestComImpl::SimpleFunc(void)
{
	std::cout<<"BestCom 함수"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout<<"ProgCom 함수"<<std::endl;
}

void ProgComImpl::DoubleFunc(void)
{
	std::cout<<"ProgCom의 두번째 함수"<<std::endl;
	SimpleFunc();
}
