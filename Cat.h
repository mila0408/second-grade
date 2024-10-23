#pragma once
#include"Pets.h"
class Cat: public Pets
{
protected:
	bool flag;
public:
	Cat();
	~Cat();
	void sound();
	void show();
	void type();
};

