#pragma once
#include <iostream>
#include <time.h >
using namespace std;
class Pasport
{
protected:
	string surname;
	string name;
	string fatherName;
	string registration;
	struct tm* date;
	int number;
public:
	Pasport();
	~Pasport();
	Pasport(string name, string surname, string fatherName, string registration, int day, int mon, int year, int numder);
	void setrName (string);
	void setrSurname(string);
	void setrFathername(string);
	void setrRegistration(string);
	void setrDate(int,int,int);
	void setrNumber(int);
	string getrName();
	string getrSurname();
	string getrFathername();
	string getrRegistration();
	string getrDate();
	int getrNumber();

};

