#include <iostream>
#include <windows.h>
#include <vector>
#define random(min,max) min +rand()%(max - min +1)
using namespace std;
template <typename T>
class DinamicMassive{
public:

	void show() {
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << ' ';
		}
		cout << endl;
	}
	T* createArray() {
		array = new int[size];
		return array;
	}
	void showSize() { cout << "size: " << size << endl; }
	void deleteArray() {
		size = 0;
		delete[] array;
	}
	void addElement(T element) {
		T* def = new T[size + 1];
		for (int i = 0; i < size; i++)
		{
			def[i] = array[i];
		}
		def[size] = element;
		
		delete[] array;
		array = def;
		size += 1;

	}
	void deleteElement() {
		T* def = new T[size - 1];
		for (int i = 0; i < size -1; i++)
		{
			def[i] = array[i];
		}
		
		delete[] array;
		array = def;
		size -= 1;
	 }
private:
	int size = 0;
	T* array;
};


int main(){


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	DinamicMassive<int> array;
	array.createArray();
	array.show();
	array.showSize();
	array.addElement(95);
	array.show();
	array.deleteElement();
	array.show();
	array.addElement(8);
	array.addElement(9);
	array.addElement(5);
	array.show();
	array.deleteArray();
	array.show();
}
