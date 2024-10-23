#include "SkuareCircle.h"

SkuareCircle::SkuareCircle(int r) : Skuare(r*2),Circle(r) {
};
SkuareCircle::~SkuareCircle() {};
int SkuareCircle:: getrR() {
	return this->r;
}
