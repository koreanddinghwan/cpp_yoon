#include <iostream>
#include <string>
using namespace std;

class Computer
{
	private:
		char owner[50];
	public:
		Computer(const char *name)
		{
			strcpy(owner, name);
		}
		void Calculate()
		{
			cout<<"계산합니다."<<endl;
		}
};

class NoteBookComp : public Computer
{
	private:
		int Battery;
	public:
		NoteBookComp(const char *name, int initChag) : Computer(name), Battery(initChag)
		{}
		void Charging() {Battery += 5;}
		void UseBattery() {Battery--;}
		void MovingCal()
		{
			if (GetBatteryInfo() < 1)
			{
				cout<<"충전하세여"<<endl;
				return ;
			}
			cout<<"이동하면서 ";
			Calculate();
			UseBattery();
		}
		int GetBatteryInfo() {return Battery;}
};

class TabletNotebook : public NoteBookComp
{
	private:
		char regstPenModel[50];
	public:
		TabletNotebook(const char *name, int initChag, const char *pen) : NoteBookComp(name, initChag)
		{
			strcpy(regstPenModel, pen);
		}
		void Write(const char *penInfo)
		{
			if (GetBatteryInfo() < 1)
			{
				cout<<"충전이 필요합니다."<<endl;
				return ;
			}
			if (strcmp(regstPenModel, penInfo) != 0)
			{
				cout<<"등록된 펜이 아녀"<<endl;
				return ;
			}
			cout<<"필기 내용을 처리"<<endl;
			UseBattery();
		}
};


int main(void)
{
	NoteBookComp nc("이수종", 5);
	TabletNotebook tn("정수영", 5, "I");

	nc.MovingCal();
	tn.Write("e");
	tn.Write("I");
	return 0;
}







