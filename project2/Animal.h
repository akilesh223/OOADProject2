#ifndef _ANIMAL_H_
#define _ANIMAL_H_


#include<string>
using namespace std;

class Animal
{

public:
	
	IRoamBehavior& roamBehavior;
	
	virtual string  Roam()
	{
		return roamBehavior.roam();
	}
	virtual bool GetStatus();
	virtual string Eat();
	virtual string MakeNoise();
	virtual string GetName();
	string Sleep();
	string WakeUp();
};

#endif
