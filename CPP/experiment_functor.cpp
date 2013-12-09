#include "stdafx.h"

using namespace std;

namespace experiment_functor
{
	class functor
	{
	public:
		void operator() (char *name)
		{
			printf("%s\n", name);
		}
	};

	void main()
	{
		functor()("Hello world");
	}
}