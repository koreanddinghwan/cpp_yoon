#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	private:
		int age;
		char name[50];
	public:
		Person(const int myage, const char *myname) : age(myage)
		{
			strcpy(name, myname);
		}
		void WhatYourName() const
		{
			cout<<"My name is "<<name<<endl;
		}
		void HowOldAreYou() const
		{
			cout<<"I am "<<age<<" years old"<<endl;
		}
};

class UnivStudent : public Person
{
	private:
		char major[50];
	public:
		UnivStudent(const char * myname, const int myage, const char *mymajor) : Person(myage, myname)
		{
			strcpy(major, mymajor);
		}
		void WhoAreYou() const
		{
			WhatYourName();
			HowOldAreYou();
			cout<<"My Major is "<<major<<endl;
		}
};

int main(void)
{
	UnivStudent ustd1("LEE", 22, "Com Sci");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Elec");
	ustd2.WhoAreYou();
	return 0;
}
