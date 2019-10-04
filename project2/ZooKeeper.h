//ZooKeeper is the observable here. It implements ZooKeeperInterface class to override methods for registering
//unregistering and notify the observer- (here its ZooAnnouncer)
//ZooAnnouncer subscribes to ZooKeeper. Whenever ZooKeeper performs an action it notifies the ZooAnnouncer
//ZooKeeper interface will contain
//methods to register, unregister and notify the observer ( in this case ZooAnnouncer) and the 
//ZooKeeper class implements these methods respectively. ZooAnnouncer Interface has the update()
//method which will be called whenever ZooKeeper performs an action. 

#ifndef _ZOOKEEPER_H_
#define _ZOOKEEPER_H_
#include<iostream>
#include "Animal.h"
#include<vector>
#include<list>

class ZooKeeper: public ZooKeeperInterface
{
	list<ZooAnnouncer> zalist;
public:
	string WakeAnimal(vector<Animal*> lt);
	bool RollCallAnimal(vector<Animal*> lt);
	string FeedAnimal(vector<Animal*> lt);
	string ExerciseAnimal(vector<Animal*> lt);
	void ShutDownZoo();
	void OpenZoo();
	void registerZooAnnouncer(ZooAnnouncer za);
    void unRegisterZooAnnouncer(ZooAnnouncer za);
    void notifyZooAnnouncer(String announcement);
    ZooKeeper();
};

#endif
