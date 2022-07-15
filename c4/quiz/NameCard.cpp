#include "NameCard.hpp"

NameCard::char *get_grade(int grade)
{
	char *rtn;

	try
	{
		grade
	}
	catch (COMP_POS::CLERK)
	{
		rtn = new char[];
	}
}

NameCard::NameCard(const char *myname, const char *corporation, const char *dial,const int mygrade)
{
	grade = mygrade;
	gradename = get_grade(grade);
	len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname);
	len = strlen(corporation) + 1;
	corponame = new char[len];
	strcpy(corponame, corporation);
	len = strlen(dial) + 1;
	phonenum = new char[len];
	phonenum = strcpy(phonenum, dial);
}

NameCard::void ShowNameCardInfo()
{
	cout<<"이름 : "<<name<<endl;
	cout<<"회사 : " <<corponame<<endl;
	cout<<"전화번호 : "<<phonenum<<endl;
	cout<<"직급 : " <<gradename<<endl;
}

NameCard::~NameCard()
{
	delete name;
	delete corponame;
	delete phonenum;
	cout<<"destructor called"<<endl;
}
