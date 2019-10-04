

#include "ZooKeeper.h"

using namespace std;

    void Zookeeper::registerZooAnnouncer(ZooAnnouncer za)
    {
    	zaList.add(za);
    	
	}
    void ZooKeeper::unRegisterZooAnnouncer(ZooAnnouncer za)
    {
    	zaList.remove(za);
    	
	}
    void ZooKeeper::notifyZooAnnouncer(String announcement)
    {
    	for(ZooAnnouncer za : zaList) {
			za.updateZoo(announcement);
		}
	}
    


ZooKeeper::ZooKeeper()
{
	zaList = new List<ZooAnnouncer>();
}

string ZooKeeper::WakeAnimal(vector<Animal*> lt)
{
	notifyZooAnnouncer("Zookeeper is waking Animals");
		for(auto i = lt.begin();i!=lt.end();i++)
	{
		if((*i)->GetStatus())
		{
			cout<<(*i)->GetName()<<" "<<(*i)->WakeUp();
		}
	}
}

bool ZooKeeper::RollCallAnimal(vector<Animal*> lt)
{
	notifyZooAnnouncer("Zookeeper is roll calling Animals");
	for(auto i = lt.begin();i!=lt.end();i++)
	{
		if((*i)->GetStatus())
		{
			cout<<(*i)->GetName()<<" is Present";
		}
		else
		{
			cout<<(*i)->GetName()<<" is Absent";
		}
	}
}
string ZooKeeper::FeedAnimal(vector<Animal*> lt)
{
	notifyZooAnnouncer("Zookeeper is Feeding Animals");
	for(auto i = lt.begin();i!=lt.end();i++)
	{
		if((*i)->GetStatus())
		{
			cout<<(*i)->GetName()<<" "<<(*i)->Eat();
		}
	}

}
string ZooKeeper::ExerciseAnimal(vector<Animal*> lt)
{
	notifyZooAnnouncer("Zookeeper is Exercising Animals");
	for(auto i = lt.begin();i!=lt.end();i++)
	{
	if((*i)->GetStatus())
	{
			cout<<(*i)->GetName()<<" "<<(*i)->Roam();
	}
	}
}
void ZooKeeper::ShutDownZoo()
{
	notifyZooAnnouncer("Zookeeper is shutting down Zoo");
	cout<<"Shutdown Zoo";
}
void ZooKeeper::OpenZoo()
{
	notifyZooAnnouncer("Zookeeper is opening Zoo");
	cout<<"Open Zoo";
}


