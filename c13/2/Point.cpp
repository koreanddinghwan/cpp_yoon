#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int x, int y) : x(x), y(y) {}

ostream& operator<<(ostream& os, const Point& pos)
{
	os<<"["<<pos.x<<","<<pos.y<<"]"<<endl;
	return os;
}
