#include <iostream>
using namespace std;

class SinivelCap
{
	public:
		void Take() const
		{
			cout<<"콧물이 싹 납니다."<<endl;
		}
};

class SneezeCap
{
	public:
		void Take() const 
		{
			cout<<"재채기가 납니다."<<endl;
		}
};

class SnuffleCap
{
	public:
		void Take() const 
		{
			cout<<"코가 뻥~"<<endl;
		}
};

class CONTAC600
{
	private:
		SinivelCap sin;
		SneezeCap sne;
		SnuffleCap snu;

	public:
		void Take() const
		{
			sin.Take();
			sne.Take();
			snu.Take();
		}
};

class ColdPatient
{
	public :
		void TakeCONTAC600(const CONTAC600 &cap)
		{
			cap.Take();
		}
};

int main()
{
	CONTAC600 cap;
	ColdPatient patient;

	patient.TakeCONTAC600(cap);
	return 0;
}
