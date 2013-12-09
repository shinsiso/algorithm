#include "stdafx.h"

using namespace std;

namespace copyconstructor_experiment
{
	class Dog
	{
	public:
		Dog(string name = "dummy", string habit = "dummy")
		{
			this->name = name;
			this->habit = new string(habit);
		}

		void destroy()
		{
			delete this;
		}

	private:
		Dog(Dog &d); // To prevent compiler auto generate copy constructor
		~Dog() // Declare a class destructor as private can provide guarranttee that
			   // objects not be stored on stack.
		{
			printf("%s deleted\n", name);
			delete habit;
		}
		string name;
		string *habit;
	};

	void main()
	{
		Dog *dptr =  new Dog();
		dptr->destroy();


		// Dog d1; // Declare a Dog on stack will cause compiler error
	}
}