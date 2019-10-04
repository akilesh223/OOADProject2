//Controls the Zooactivity like wake up animals, exercise them, etc through ZooActivity function

#include "Zoo.h"
#include "ZooKeeper.h"
#include "AnimalInstance.h"


void ZooActivity(vector<Animal*> ListOfAnimal)
{
	ZooKeeper *john  = new ZooKeeper();
	cout<<"---------OPEN ZOO---------------";
	john->OpenZoo();
	cout<<"-----------ROLL CALL ANIMALS--------------";
	john->RollCallAnimal(ListOfAnimal);
	
	cout<<"---------WAKEUP ANIMALS----------";
	john->WakeAnimal(ListOfAnimal);
	
	cout<<"------------EXERCISE ANIMALS----------";
	john->ExerciseAnimal(ListOfAnimal);

	cout<<"------------FEED ANIMALS----------";
	john->FeedAnimal(ListOfAnimal);
	
	cout<<"-----------CAT RANDOM BEHAVIOUR----------";
	
	Cat Cooper("Cooper");
	Cooper.RandomBehavior();
	
	cout<<"-----------SHUTTING DOWN----------";
	
	
	john->ShutDownZoo();
	
}
