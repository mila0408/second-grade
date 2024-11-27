#pragma once
#include<iostream>
#include "pet.h"
using namespace std;

class Cat :
    public Pet
{
private:
    string felineFamily;
public:
    Cat();
    Cat(string name, bool hunger, string birthday, string felineFamily);
    ~Cat();
    string getrFelineFamily();
    void voice();


    
};

