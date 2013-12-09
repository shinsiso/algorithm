// algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "MinRectangleOverlapping.h"
#include "LongestBalancedSubstring.h"

using namespace std;
using namespace std::tr1;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<Rect> rects;
	Rect r;
	r.x1 = 0; r.y1 = 0; r.x2 = 80; r.y2=80;
	rects.push_back(r);
	r.x1 = 90; r.y1 = 0; r.x2 = 100; r.y2 = 40;
	rects.push_back(r);
	r.x1 = 90; r.y1 = 60; r.x2 = 100; r.y2 = 90;
	rects.push_back(r);
	int area = minOverlapping(rects, 100, 100, 20, 95);
	return 0;
}

