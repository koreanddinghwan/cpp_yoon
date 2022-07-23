#include <iostream>

int main(void)
{

	int num = 0;

	int *p1 = &num;
	
	float *e1 = static_cast<float *>(p1);
	float *e2 = (float *)p1;
	return 0;
}
