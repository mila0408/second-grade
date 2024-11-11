#include "Apple.h"
Apple::Apple() {};
Apple::Apple(string name):name(name) {};
Apple::~Apple() {};
void Apple:: print() {
	cout << this->name << ' ';
}