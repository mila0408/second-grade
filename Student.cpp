#include"Student.h"

	Student::Student() {};
	Student::~Student() {};
	Student::Student(int id, string name, int age) : id(id), name(name), age(age) {};
	void Student::setrName(string newName) {
		this->name = newName;
	}
	void Student::setrAge(int newAge) {
		this->age = newAge;
	}
	void Student::setrId(int newID) {
		this->id = newID;
	}
	string Student::getrName() {
		return name ;
	 }
	int Student:: getrID() {
		return id ;
	}
	int Student:: getrAge() {
		return age;
	}
