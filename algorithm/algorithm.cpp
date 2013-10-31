// algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
using namespace std::tr1;

string longestBalancedSubstring(const string& s);

int _tmain(int argc, _TCHAR* argv[])
{
	string substr = longestBalancedSubstring("1011111000");
	printf("%s\n", substr.c_str());
	return 0;
}

