#include "stdafx.h"

using namespace std;

namespace experiment_virtual
{
	class Dog
	{
	public:
		Dog() 
		{
			printf("Dog born\n");
			virtualbark();
		}
		virtual ~Dog()
		{
			printf("Dog deleted\n");
			virtualbark();
		}

		void bark()
		{
			printf("Dog bark\n");
		}

		virtual void virtualbark()
		{
			printf("Dog virtual bark\n");
		}

		void seeCat()
		{
			bark();
		}
	};

	class YellowDog : public Dog
	{
	public:
		YellowDog()
		{
			printf("Yellow dog born\n");
		}

		void bark()
		{
			printf("Yellow dog bark\n");
		}
	};

	void main()
	{
		YellowDog yd;
		yd.seeCat();
	}
}