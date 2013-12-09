#include "stdafx.h"

using namespace std;

namespace experiment_staticpolymorphism
{
	template<typename T> class RootC
	{
	public:
		void virtualSim(){
			static_cast<T*> (this)->virtualSimImple();
		}
	};

	class DerivedC : public RootC<DerivedC>
	{
	public:
		void virtualSimImple(){
			printf("DerivedC print\n");
		}
	};

	class DerivedC2 : public RootC<DerivedC2>
	{
	public:
		void virtualSimImple(){
			printf("DerivedC print\n");
		}
	};

	void main()
	{
		//RootC<DerivedC> *dr = new DerivedC2();
		//dr->virtualSim();
	}
}