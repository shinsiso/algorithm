#include "stdafx.h"

using namespace std;

namespace exception_experiment
{
	class Dog {
	public:
		Dog(string name = "dummy")
		{
			this->name = name;
			printf("%s is born\n", this->name.c_str());
		}
		~Dog()
		{
			throw 3;
			printf("%s is deleted\n", this->name.c_str());
			
		}

		void bark()
		{
			printf("%s is barking\n", this->name.c_str());
		}

	private:
		string name;
	};

	void main(){
		try{
		Dog d1("bob");
		Dog d2("steve");
		} catch(int i)
		{
			printf("%d is thrown\n", i);
		}
	}
}