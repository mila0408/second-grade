#pragma once
#include"Product2.h"
class Milk :
    public Product
{
protected:
    string name;
public:
    Milk();
    Milk(string);
    ~Milk();
    void print();

};

