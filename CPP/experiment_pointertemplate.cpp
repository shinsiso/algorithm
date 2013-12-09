#include "stdafx.h"

using namespace std;

namespace experiment_pointertemplate
{
	template <typename T> void foo(T t1, T t2)
	{
		
	}

	void main()
	{
		int x1 = 0, x2 = 1;

		foo<int*>(&x1, &x2);
	}
}