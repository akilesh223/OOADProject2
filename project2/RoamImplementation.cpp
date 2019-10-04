//Roam behavior's implementation for different classes -  Feline,Canine and Pachyderm. Their instance will be
// created in corresponding derived objects - They are for implementing strategy pattern
#include "IRoamBehavior.h"

class CanineRoam: public IRoamBehavior
{
	string Roam()
	{
		return "is roaming aggressively";
	}	
};

class FelineRoam: public IRoamBehavior
{
	string Roam()
	{
		return "is roaming quietly";
	}	
};

class PachydermRoam: public IRoamBehavior
{
	string Roam()
	{
		return "is roaming slowly";
	}	
};
