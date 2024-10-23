#include "Circle.h"

Circle::Circle(int r):r(r) {
	this->s1 = 3.15 * (r * r);
	this->d = 2 * r;
	this->l = 2 * (3.14 * r);};
Circle::~Circle() {};
Circle::Circle(int r, int s1, int d, int l) :r(r), s1(s1), d(d), l(l) {};
int Circle::getrD() {
	return this->d;
}
int Circle::getrL() {
	return this->l;
}
int Circle::getrR1() {
	return this->r;
}
int Circle::getrS1() {
	return this->s1;
}