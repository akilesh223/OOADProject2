#include "AnimalInstance.h"
#include "Zoo.h"
#include "Animal.h"

int main()
{
	Cat *Cooper= new Cat("Cooper"); 
	Cooper->SetStatus();
	Cat *chandler = new Cat("Chandler"); 	
	
    Dog *danny = new Dog("Danny");
	danny->SetStatus();
    Dog *debby = new Dog("Debby");
    
    
    Elephant *elda = new Elephant("Elda");
	elda->SetStatus();
    Elephant *emma = new Elephant("Emma"); 
    
    
    Hippo *howard = new Hippo("Howard");
	howard->SetStatus();
    Hippo *hofstedar= new Hippo("Hofstedar"); 
    
    
	Lion *lilly = new Lion("Lilly");
	lilly->SetStatus();
    Lion *lita = new Lion("Lita"); 

    Rhino *rachel = new Rhino("Rachel");
	rachel->SetStatus();
    Rhino *ross = new Rhino("Ross"); 
    
    
    Tiger *tony = new Tiger("Tony"); 
	tony->SetStatus();
    Tiger  *timmy = new Tiger("Timmy"); 
    
    
    Wolf *wendy = new Wolf("Wendy");  
	wendy->SetStatus();
    Wolf  *william = new Wolf("William"); 
    
    vector<Animal*> lt;
    lt.assign(30,NULL);
     lt.push_back(Cooper);
     lt.push_back(chandler);
     lt.push_back(danny);
     lt.push_back(debby);
     lt.push_back(elda);
     lt.push_back(emma);
     lt.push_back(howard);
     lt.push_back(hofstedar);
     lt.push_back(lilly);
     lt.push_back(lita);
     lt.push_back(rachel);
     lt.push_back(ross);
     lt.push_back(tony);
     lt.push_back(timmy);
     lt.push_back(wendy);
     lt.push_back(william);
     
     Zoo DenverZoo;
     DenverZoo.ZooActivity(lt);
     
     
}
