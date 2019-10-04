

class ZooAnnouncer: public IZooAnnouncer
{
	virtual void updateZoo(string announcement)
	{
		cout<<"ZooAnnouncer : "<<announcement<<"\n";
	}
};
