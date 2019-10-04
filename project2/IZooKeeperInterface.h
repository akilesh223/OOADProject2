//An interface for ZooKeeper to implement

class IZooKeeperInterface
{
	public:
    virtual void registerZooAnnouncer(ZooAnnouncer za);
    virtual void unRegisterZooAnnouncer(ZooAnnouncer za);
    virtual void notifyZooAnnouncer(String announcement);
}
