#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char *MakeStrAdr(int num)
{
	char	*str;

	str = new char[num];
	return (str);
}

int main()
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout<<str<<endl;
	delete []str;
	return 0;
}
