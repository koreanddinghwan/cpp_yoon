#include <iostream>


void Swapptr(int* &ptr1, int* &ptr2)
{
	int *t;

	t = ptr2;
	ptr2 = ptr1;
	ptr1 = t;
}

int main()
{
	int num1 = 5;
	int *ptr1=&num1;
	int num2 = 10;
	int *ptr2=&num2;
	std::cout<<*ptr1<<std::endl;
	std::cout<<*ptr2<<std::endl;
	Swapptr(ptr1, ptr2);
	std::cout<<*ptr1<<std::endl;
	std::cout<<*ptr2<<std::endl;
	return (0);
}	
