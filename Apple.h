#pragma once
#include"Product2.h"
class Apple :
    public Product
{
protected:
    string name;
public:
    Apple();
    Apple(string);
    ~Apple();
    void print();
 
};

