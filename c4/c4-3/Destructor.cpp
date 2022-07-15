#include <iostream>
#include <string>
using namespace std;

class Person
{
	private:
		char *name;
		int age;
	public:
		Person(const char *myname, const int myage)
		{
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy(name, myname);
			age = myage;
		}
		void ShowPersonInfo() const
		{
			cout<<"이름: "<<name<<endl;
			cout<<"나이: "<<age<<endl;
		}
		~Person()
		{
			delete []name;
			cout<<"destructor called!"<<endl;
		}
};

int main()
{
	Person man1("myukang", 24);
	Person man2("myunghwan", 24);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return (0);
}
