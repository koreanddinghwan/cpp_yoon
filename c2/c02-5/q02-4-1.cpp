#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char	str1[] = "test";
	char	str2[] = "string";
	char	buffer[20];

	cout<<"result of strlen(str1) : "<<strlen(str1)<<endl;
	
	char	*result1;
	
	result1 = strcpy(buffer, str1);
	cout<<"result of strcpy(buffer,str1) : "<<result1<<endl;

	result1 = strcat(buffer, str2);
	cout<<"result of strcat(buffer, str2) : "<<result1<<endl;

	int	result2;

	result2 = strcmp(str1, str2);
	cout<<"result of strcmp(str1, str2) : "<<result2<<endl;
	return 0;
}
