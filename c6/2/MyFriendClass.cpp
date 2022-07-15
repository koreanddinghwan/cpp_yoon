#include <iostream>
#include <cstring>
using namespace std;

class Boy;

class Girl
{
	friend class Boy;
	private:
		char phNum[20];
	public:
		Girl(const char *num)
		{
			strcpy(phNum, num);
		}
		void ShowYourFriendInfo(Boy &frn);
};

class Boy
{
	friend class Girl;
	private:
		int height;
	public:
		Boy(int len) : height(len)
		{}
		void ShowYourFriendInfo(Girl &frn);
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
	cout<<"Her phnum : " << frn.phNum<<endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
	cout<<"His height : " << frn.height<<endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("123412341234");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
}
