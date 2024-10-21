#include <iostream>
#define random(min,max) min+rand()%(max-min+1)
using namespace std;

template <typename T>
class MyStack {
private:
	T* arr;
	int const step = 3;
	int stackSize;
	int lengthSize =0;
public:
	MyStack() {
		stackSize = 10;
		arr = new T[stackSize];
	};
	~MyStack() {
		if (arr == nullptr)
		{
			delete[] arr;
		}
	};
	MyStack(int size) :stackSize(size) {
		arr = new T[stackSize];
	}
	bool isFull() {
		return (stackSize == lengthSize);
	}
	void addElem(T elem) {
		if (isFull()) {
			this->stackSise += step;
			T* def = new T[stackSize];
			for (int i = 0; i < stackSize; i++)
			{
				def[i] = arr[i];

			}
			def[lengthSize] = elem;

		}
		arr[lengthSize] = elem;

	}
};



template <typename T>
class DynamicArray {
private:
	int size;
	T* arr;

public:
	DynamicArray(){};
	~DynamicArray() {
		if (arr==nullptr)
		{
         delete[] arr;
		}
	};
	DynamicArray(int size): size(size) {
		arr = new T[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = random(1, 10);
		}
	}
	T& operator[]( const T index) const {
		return this->arr[index];
	}
	T& operator[](T index) {
		return this->arr[index];
	}
	T& operator()(T index) {
		return this->arr[index];
	}
	 operator bool() {return 8;}
	 operator int() { return 8; }
	 operator double() { return 8.947637; }
	 operator char() { return 8; }
	 operator string() { return "pushkin"; }
	DynamicArray operator= (DynamicArray& other) { 
		this->size = other.size;
		for (int i = 0; i < this.size; i++)
		{
			this->arr[i] = other.arr[i];

		}
		return*this;
	 }
	
	void print() {
		for (int b = 0; b < size; b++) {
			cout << arr[b] << " ";
		}
		cout << endl;

	}
	int getSize() {
		return size;
	}
	void SetArr(T* def,int size) {
		if (this->arr != nullptr)
		{
			delete[] this->arr;
		}
		this->arr = new T[size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = def[i];
			
		}
		this->size = size;
	}

};

template <typename T>
ostream& operator<<(ostream& os, DynamicArray<T> arr) {
	return os << "yes";

}
template <typename T>
istream& operator>>(istream& in, DynamicArray<T> &arr) {
	T a;
	in >> a;
	T* def = new T[arr.getSize() + 1];
	for (int i = 0; i < arr.getSize(); i++)
	{
		def[i] = arr[i];

		
	}
	def[arr.getSize() ] = a;
	arr.SetArr(def, arr.getSize() + 1);
	return in;
}

class Student {
public:
	string name;
	int age;
	int id;
	Student() {};
	~Student() {};
	Student(int id, string name, int age) : id(id), name(name), age(age) {};
	setr
 };

int main()
{
	setlocale(LC_ALL, "rus");
	DynamicArray<int>arr{ 3 };
	arr.print();
	/*cout << arr;*/
	cin >> arr;
	arr.print();
	time_t hhh;
	struct tm* now = localtime(&hhh);
   
}

