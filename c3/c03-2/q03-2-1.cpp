#include <iostream>

using namespace std;

class Calculator
{
private:
	int	AddCount;
	int	DivCount;
	int	MinCount;
	int	MulCount;
public:
	void	Init();
	double	Add(double a, double b);
	double	Div(double a, double b);
	double	Min(double a, double b);
	double	Mul(double a, double b);
	void	ShowOpCount();
};

void	Calculator::Init()
{
	AddCount = 0;
	DivCount = 0;
	MinCount = 0;
	MulCount = 0;
}

double	Calculator::Add(double a, double b)
{
	AddCount++;
	return (a + b);
}

double	Calculator::Div(double a, double b)
{
	DivCount++;
	return (a / b);
}
double	Calculator::Min(double a, double b)
{
	MinCount++;
	return (a - b);
}
double	Calculator::Mul(double a, double b)
{
	MulCount++;
	return (a * b);
}

void	Calculator::ShowOpCount()
{
	cout<<"덧셈: "<<AddCount<<" 뺄셈: "<<MinCount<<" 곱셈: "<<MulCount<<" 나눗셈:"<<DivCount<<endl;
}

int main()
{
	Calculator	cal;
	cal.Init();
	cal.ShowOpCount();
	return 0;
}
