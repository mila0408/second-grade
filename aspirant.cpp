#include "aspirant.h"



Aspirant::Aspirant(){};
    Aspirant::~Aspirant() {};
	Aspirant::Aspirant(string coursework) : coursework(coursework) {};
	void Aspirant::sertCourse(string name) {
		this->coursework = name;
	}
	string Aspirant:: getrCourse() {
		return coursework;
	}
