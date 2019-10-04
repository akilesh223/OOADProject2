//This classes deals with all derived classes like Dog, cat, Elephant

#ifndef _ANIMALINSTANCE_H_
#define _ANIMALINSTANCE_H_

#include "Animal.h"
#include "Canine.h"
#include "Feline.h"
#include "Pachyderm.h"
#include<iostream>
#include "IRoamBehavior.h"


class Rhino: public Pachyderm
{
string Name;
bool status = false;
public:
Rhino(string name): Name(name)
{
	roamBehavior = 	new PachydermRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
bool GetStatus() ;
};

class Elephant: public Pachyderm
{
string Name;
bool status = false;
public:
Elephant(string name): Name(name)
{
	roamBehavior = 	new PachydermRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
bool GetStatus() ;
};

class Hippo: public Pachyderm
{
string Name;
bool status = false;
public:
Hippo(string name): Name(name)
{
	roamBehavior = 	new PachydermRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
bool GetStatus() ;	
};

class Cat: public Feline
{
string Name;
bool status = false;

public:
Cat(string name):Name(name)
{
	roamBehavior = 	new FelineRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
virtual bool GetStatus() ;
int GetState();
void RandomBehavior();	
};

class Lion: public Feline
{
string Name;
bool status = false;
public:
Lion(string name): Name(name)
{
	roamBehavior = 	new FelineRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
virtual bool GetStatus() ;
	
};

class Tiger: public Feline
{
string Name;
bool status = false;
public:
Tiger(string name): Name(name)
{
	roamBehavior = 	new FelineRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
virtual bool GetStatus() ;
};

class Dog: public Canine
{	
string Name;
bool status = false;
public:
Dog(string name):Name(name)
{
	roamBehavior = 	new CanineRoam();
}
string GetName();
string MakeNoise() ;
void SetStatus();
virtual bool GetStatus() ;
};

class Wolf: public Canine
{
string Name;
bool status = false;
public:
Wolf(string name): Name(name)
{
	roamBehavior = 	new CanineRoam();
}
string GetName();
string MakeNoise();
void SetStatus();
virtual bool GetStatus();	
};


#endif



