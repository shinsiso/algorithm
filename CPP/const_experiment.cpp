#include "stdafx.h"

using namespace std;

namespace const_experiment {

class Dog
{
private:
	const string name;
	mutable int accessCounter;

public:
	Dog()
	{

	}
	void printfDogName()
	{
		printf("%s\n", name.c_str());
	}

	void printfDogName() const
	{
		printf("%s_const\n", name.c_str());
		++accessCounter;
	}
};

void const_experiment()
{
	const int i = 9;

	const_cast<int&>(i) = 6;

	const int *p1 = &i;

	int* const p2 = 0;

	const int* const p3 = &i;

	int const *p4 = &i;
	string s = "2";
	string &sr = s;
	string s2 = "22";
	string &sr2 = s2;
	sr2 = sr;
	
	Dog d1;
	d1.printfDogName();
	const Dog d2;
	d2.printfDogName();

	// If const is on the left of *, data is const
	// If const is on the right of *, pointer is const

	// Benefits: 
	// 1.Enable compiler to do more optimization, making code tighter.
	// 2.Const means the variable can be put into rom.
}
}