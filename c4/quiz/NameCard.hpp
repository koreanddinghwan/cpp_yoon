#ifndef NAMECARD_HPP
# define NAMECARD_HPP
#include <iostream>
#include <string>

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};
}

class NameCard
{
	private:
		char *name;
		char *corponame;
		char *phonenum;
		int	 grade;
		char *gradename;
		char *get_grade(int grade) const
	public:
		NameCard(const char *myname, const char *corporation, const char *dial,const int mygrade)
		void ShowNameCardInfo() const
		~NameCard()
};
#endif
