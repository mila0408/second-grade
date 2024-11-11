#include "Milk.h"
Milk::Milk() {};
Milk::Milk(string name): name(name){};
Milk::~Milk() {};
void Milk::print() {
	cout << this->name << ' ';
}

