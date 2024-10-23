#pragma once
#include"Pets.h"
class Dog: public Pets
{
protected:
 bool WetOfNose;
public:
	Dog();
	~Dog();
	Dog(string name, int  hieght, int weight, string type, string subtype, bool WetOfNose) :Pets(name, hieght, weight, subtype), WetOfNose(WetOfNose) {};
	void sound();
	void show();
	void type();
};

