//Interface class for RoamBehavior which will be delegated by Animal's derived classes

class IRoambehavior
{
	public:
		virtual string Roam() = 0;
}
