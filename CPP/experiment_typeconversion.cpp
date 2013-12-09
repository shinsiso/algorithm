#include "stdafx.h"

using namespace std;

namespace experiment_typeconversion
{
	void main(){
		int s = -1;
		unsigned int us = 1;
		if(s > us) printf("s > us\n");
		else printf("s <= us\n");
	}
}