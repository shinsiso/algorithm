// CPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

namespace const_experiment{
	void const_experiment();
}

namespace exception_experiment{
	void main();
}

namespace experiment_virtual{
	void main();
}

namespace experiment_staticpolymorphism{
	void main();
}

namespace experiment_typeconversion{
	void main();
}

int _tmain(int argc, _TCHAR* argv[])
{
	experiment_typeconversion::main();
	return 0;
}

