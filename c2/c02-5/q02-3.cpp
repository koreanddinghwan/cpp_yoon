#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;


Point& PntAdder(const Point &p1, const Point &p2)
{
	Point	*result;

	result = new Point;
	Point &ref = *result;
	ref.xpos = p1.xpos + p2.xpos;
	ref.ypos = p1.ypos + p2.ypos;
	return (ref);
}

int main()
{
	Point	*p1;
	Point	*p2;

	p1 = new Point;
	p2 = new Point;
	Point &ref1 = *p1;
	Point &ref2 = *p2;

	ref1.xpos = 10;
	ref1.ypos = 20;
	ref2.xpos = 10;
	ref2.ypos = 20;
	
	
	cout<<"p1의 참조자 ref1 xpos값:"<<ref1.xpos<<"\np1의 xpos값"<<p1->xpos<<endl;
	cout<<"p1의 참조자 ref1 ypos값:"<<ref1.ypos<<"\np1의 xpos값"<<p1->ypos<<endl;

	cout<<"p2의 참조자 ref2 xpos값:"<<ref2.xpos<<"\np2의 xpos값"<<p2->xpos<<endl;
	cout<<"p2의 참조자 ref2 ypos값:"<<ref2.ypos<<"\np2의 xpos값"<<p2->ypos<<endl;

	cout<<"####################"<<endl;
/////////////////////////////////////////
	Point &result = PntAdder(*p1, *p2);
	cout<<"result 참조자 xpos : "<<result.xpos<<"\nypos : "<<result.ypos<<endl;

	delete p1;
	delete p2;
	delete &result;//참조자가 참조하는 메모리 공간 해제할때는 &쓰기!
	return 0;
}
