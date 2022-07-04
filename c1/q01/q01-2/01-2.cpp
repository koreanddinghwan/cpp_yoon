#include <iostream>

void swap(double *p1, double *p2)
{
	double	t;

	t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void swap(char *p1, char *p2)
{
	char	t;

	t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void swap(int *p1, int *p2)
{
	int	t;

	t = *p1;
	*p1 = *p2;
	*p2 = t;
}

int main()
{
	int num1 = 20;
	int num2 = 30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;

	char ch1='A';
	char ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;

	double dbl1=1.111;
	double dbl2=5.555;
	swap(&dbl1, &dbl2);
	std::cout<<dbl1<<' '<<dbl2<<std::endl;


	return 0;
}
