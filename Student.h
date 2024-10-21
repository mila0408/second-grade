#pragma once
#include <iostream>
using namespace std;

class Student {
protected:
	string name;
	int age;
	int id;
public:
	Student();
	~Student();
	Student(int, string, int);
	void setrName(string);
	void setrAge(int);
	void setrId(int);
	string getrName();
	int getrID();
    int getrAge();
};