#ifndef _ZOO_H_
#define _ZOO_H_

#include "Animal.h"
#include "AnimalInstance.h"
#include "ZooKeeper.h"
#include<vector>

using namespace std;

class Zoo
{
	public:
		void ZooActivity(vector<Animal*> ListOfAnimal);		
		
};

#endif
