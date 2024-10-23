#pragma once
#include"Skuare.h"
#include"Circle.h"

class SkuareCircle : public Skuare , public Circle
{
protected:
public:
	~SkuareCircle();
	SkuareCircle(int);
	int getrR();

};

