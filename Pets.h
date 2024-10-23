#pragma once
#include<iostream>
using namespace std;
class Pets
{
protected:
	string name;
	int hieght;
	int weight;
	string typeAnimal;
	string subtype;
public:
	Pets();
	~Pets();
	Pets(string, int, int, string, string);
	 virtual void sound();
	 virtual void show();
	 virtual void type();
};

