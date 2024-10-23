#include "skuare.h"

 Skuare::Skuare(int a): a(a) {
	 this->s = a * a;
	 this->p = 4 * a;
 };
 Skuare::~Skuare() {};
 Skuare::Skuare(int s, int p, int a) : s(s),p(p),a(a) {};
 int Skuare::getra() {
	 return this->a;
 }
 int Skuare::getrp() {
	 return this->p;
 }
 int Skuare::getrs() {
	 return this->s;
 }
