#include <iostream>
#include "ArrayTemplate.h"
#include "PointTemplate.h"
using namespace std;

int main(void)
{
	BoundCheckArray<Point<int>> oarr(3);
	oarr[0] = Point<int>(3,4);
	oarr[1] = Point<int>(5,6);
	oarr[2] = Point<int>(7,8);
	for (int i = 0; i < oarr.GetArrLen();i++)
		oarr[i].ShowPosition();

	BoundCheckArray<Point<double>> oarr2(3);
	oarr2[0] = Point<double>(3.14, 4.31);
	return 0;
}
