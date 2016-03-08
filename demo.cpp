
#include<iostream>
#include<string>
using namespace std;

class Animal{
	protected:
		string name;
public:
	Animal(){ name = "animal"; }
	void whoAmI(void){ cout << "I am " << name << endl; }
	virtual void does(void){ cout << "do nothing" << endl; }

};

class Dog : public Animal{
protected:
	int numberLegs;

public:
	Dog(){
		name = "dog";
		numberLegs = 4;
	}

	void does(void){ cout << "woof" << endl; }
	int howManyLegs(){ return numberLegs; }
	
};


int main()
{

	Animal myAnimal;
	Dog myDog;
	Animal *animalPtr;
	animalPtr = &myDog;
	myAnimal.WhoAmI();
	myAnimal.does();
	myDog.name();
	myDog.does();
	cout << endl;
	cout << "Dogs have" << myDog.howManyLegs() << "legs" << endl;
	cout << "Using base class ptr to access derived class object" << endl;
	animalPtr->whoAmI();




}