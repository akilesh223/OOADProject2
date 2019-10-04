#include "AnimalInstance.h"
#include<string>

string Wolf::GetName()
{
	return Name;
}

string Wolf::MakeNoise()
{
	return "Howl Howl";
}

void Wolf::SetStatus()
{
	this->status = true;
}

bool Wolf::GetStatus()
{
	return status;
}


string Dog::GetName()
{
	return Name;
}

string Dog::MakeNoise()
{
	return "Bow Bow";
}

void Dog::SetStatus()
{
	this->status = true;
}

bool Dog::GetStatus()
{
	return status;
}

string Hippo::GetName()
{
	return Name;
}

string Hippo::MakeNoise()
{
	return "Growl Growl";
}

void Hippo::SetStatus()
{
	this->status = true;
}

bool Hippo::GetStatus()
{
	return status;
}

string Elephant::GetName()
{
	return Name;
}

string Elephant::MakeNoise()
{
	return "Trumphet Trumphet";
}

void Elephant::SetStatus()
{
	this->status = true;
}

bool Elephant::GetStatus()
{
	return status;
}

string Rhino::GetName()
{
	return Name;
}

string Rhino::MakeNoise()
{
	return "Bellow Bellow";
}

void Rhino::SetStatus()
{
	this->status = true;
}

bool Rhino::GetStatus()
{
	return status;
}

string Tiger::GetName()
{
	return Name;
}

string Tiger::MakeNoise()
{
	return "Snarl Snarl";
}

void Tiger::SetStatus()
{
	this->status = true;
}

bool Tiger::GetStatus()
{
	return status;
}

string Lion::GetName()
{
	return Name;
}

string Lion::MakeNoise()
{
	return "Roar Roar";
}

void Lion::SetStatus()
{
	this->status = true;
}

bool Lion::GetStatus()
{
	return status;
}

string Cat::GetName()
{
	return Name;
}

string Cat::MakeNoise()
{
	return "Meow Meow";
}

void Cat::SetStatus()
{
	this->status = true;
}

bool Cat::GetStatus()
{
	return status;
}

int Cat::GetState()
{
	return rand() % 4;
}

void Cat::RandomBehavior()
{
	int k = GetState();
	switch(k) 
	{
		case 0: 
		cout<<GetName()<<" "<<MakeNoise();
		break;
		case 1:	
		cout<<GetName()<<" "<<Eat();
		break;
		case 2: 
		cout<<GetName()<<" "<<Roam();
		break;
		case 3:
		cout<<GetName()<<" "<<Sleep();
		break;
		case 4:
		cout<<GetName()<<" "<<WakeUp();
		break;
	}
}



