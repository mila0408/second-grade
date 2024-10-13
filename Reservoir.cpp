#include <iostream>
using namespace std;

class Resevoir {
public:
	string name;
	int length;
	int width;
	int depth;
	Resevoir() {};
	Resevoir(string name, int length, int width, int depth) : name(name), length(length), width(width), depth(depth) {};
	~Resevoir() {};
	Resevoir(Resevoir& other) {
		this->name = other.name;
		this->length = other.length;
		this->width = other.width;
		this->depth = other.depth;
	}
	void volume() {
		int volume = this->depth * this->length * this->width;
		cout << "Volume:" << volume << endl;
	}
	void S() {
		int S = this->length * this->width;
		cout << "S:" << S << endl;
	}
	void comparison(Resevoir other) {
		int S = this->length * this->width;
		int S2 = other.length * other.width;
		if (S < S2)cout << "The bigest area:" << other.name << endl;
		else if (S == S2)cout << "The areas are equal" << endl;
		else cout << "The bigest area:" << this->name << endl;
	}
	void copy(Resevoir other) {
		this->name = other.name;
		this->length = other.length;
		this->width = other.width;
		this->depth = other.depth;
	}
	string getName() {
		return this->name;
	}
	int getLength() {
		return this->length;
	}
	int getWidth() {
		return this->width;
	}
	int getDepth() {
		return this->depth;
	}
	void print() {
		cout << this->name<<' ';
		cout << this->length << ' ';
		cout << this->width << ' ';
		cout << this->depth << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Resevoir res1{ "this",15,36,9};
	Resevoir res2{ "other",10,20,5 };
	Resevoir res3{ "tree",674,7,64 };
	res1.print();
	res2.print();
	res3.print();
	res1.volume();
	res1.S();
	res1.comparison(res2);
	res3.copy(res2);
	res3.print();
}
