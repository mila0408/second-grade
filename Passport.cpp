#include "Passport.h"

Pasport::Pasport(){};
Pasport::~Pasport(){};
Pasport::Pasport(string name, string surname, string fatherName, string registration, int day, int mon, int year, int number) :
	name(name), surname(surname), fatherName(fatherName), registration(registration), number(number) {
	this->date->tm_year = year;
	this->date->tm_mon = mon;
	this->date->tm_wday = day;
}
void Pasport::setrName(string newName) {
	this->name = newName;

}
void Pasport::setrSurname(string newSurname) {
	this->surname = newSurname;
}
void Pasport::setrFathername(string newFathername) {
	this->fatherName = newFathername;
}
void Pasport::setrRegistration(string newRegistration) {
	this->registration = newRegistration;
}
void Pasport::setrDate(int year, int mon, int day) {
	this->date->tm_year = year;
	this->date->tm_mon = mon;
	this->date->tm_wday = day;
}
void Pasport::setrNumber(int newNumber) {
	this->number = newNumber;
}
string Pasport::getrName() {
	return this->name;
}
string Pasport::getrSurname() {
	return this->surname;
}
string Pasport::getrFathername() {
	return  this->fatherName;
}
string Pasport::getrRegistration() {
	return this->registration;
}
string Pasport::getrDate() {
	string year.to_strig;
	string date;

}
int Pasport::getrNumber() {
	 return this->number ;
}