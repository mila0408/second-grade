#pragma once
#include"Pets.h"
class Parrot: public Pets
{
protected:
	int perya;
	string colorKluv;
	string colorKralya;
public:
	Parrot();
	~Parrot();
	void sound();
	void show();
	void type();
};

