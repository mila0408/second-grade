#pragma once
#include"Pets.h"
class Humster:public Pets
{
protected:
	bool flag;
public:
	Humster();
	~Humster(); 
	void sound();
	void show();
	void type();


};

