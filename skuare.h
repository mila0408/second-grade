#pragma once
#include<iostream>
using namespace std;
class Skuare
{
protected:
	int s;
	int a;
	int p;
public:
	Skuare(int);
	~Skuare();
	Skuare(int, int, int);
	int getrs();
	int getra();
	int getrp();
};

