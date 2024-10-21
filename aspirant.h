#pragma once
#include "Student.h"
class Aspirant :  private Student{
protected:
	string coursework;
public:
	Aspirant();
	~Aspirant();
	Aspirant(string);
	void sertCourse(string);
	string getrCourse();

};

