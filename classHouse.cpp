#include <iostream>
#include<Windows.h>
#include<string>
#include<cmath>
#include<math.h> 
#define random(min,max) min+rand()%(max-min+1)
using namespace std;
template<typename T>
class Queue {
private:
	const int num = 3;
	 int lenghtSize =0;
	 int size;
	 T* arr = new T[size];
public:
	Queue() {};
	~Queue() {};
	Queue(int size) :size(size) {};
    bool isFull() {
        return this->lenghtSize == this->size;
    }
    bool isEmpty() {
        return this->lenghtSize == 0;
    }
    void addMemory() {
        this->size += this->num;
    }
    void destroyMemory() {
        this->size -= this->num;
    }
   void top() {
       cout << this->arr[0]<<'`';
    }
    int knowNowSize() {
        return this-> lenghtSize;
    }
    void puch(T elem) {
        if (isFull()) addMemory();
        T* buf = new T[this->size];
        for (int b = 0; b < this->lenghtSize; b++) {
            buf[b] = this->arr[b];
        }
        buf[this->lenghtSize] = elem;
        delete[] this->arr;
        this->arr = buf;
        this->lenghtSize++;
    }
    void pop() {
        if (this->size - this->lenghtSize > 6) destroyMemory();
        T* buf = new T[this->size];
        for (int b = 1; b < this->lenghtSize; b++) {
            buf[b] = this->arr[b];
        }
        delete[] this->arr;
        this->arr = buf;
        puch(arr[0]);
    }
    void clearQueue() {
        delete[] this->arr;
        this->lenghtSize = 0;
        this->size = this->num;
        arr = new T[size];
    }
    void print() {
        for (int i = 0; i <  lenghtSize; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
    void randomPrint() {
        cout << arr[random(0, lenghtSize - 1)];
    }
    T rul() {
        for (int i = 0; i < random(1,7); i++)
        {
            pop();
        }
        return arr[0];
    }
    
};
template<typename T>
 void summa(T& one, T& two, T& tree, int money) {
        if ((one == two) && (one != tree)) money += money * 0.3;
        else if ((one == tree) && (two != tree)) money += money * 0.3;
        else if ((one == two) && (one == tree)) money += money;
        else if ((one != tree) && (one != two)(two != tree))money -= money * 0.7;
  }
 
int main()
{
	setlocale(LC_ALL, "rus");
    Queue<int> a;
    Queue<int> b;
    Queue<int> c;
    a.puch(random(1, 10));
    a.puch(random(1, 10));
    a.puch(random(1, 10));
    a.puch(random(1, 10));
    b.puch(random(1, 10));
    b.puch(random(1, 10));
    b.puch(random(1, 10));
    b.puch(random(1, 10));
    c.puch(random(1, 10));
    c.puch(random(1, 10));
    c.puch(random(1, 10));
    c.puch(random(1, 10));
    a.print();
    b.print();
    c.print();
    int choice;
    int money = 0;
    bool work = true;
    bool flag = true;
    while (work)
    {
        
        cout << endl << "Узнать количество Ваших деньги : 1" << endl;
        cout << "Узнать коэффициент ставки : 2" << endl;
        cout << "Начать игру : 3" << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            if (money != 0) {
                cout << "Ваш баланс:" << money << endl;
                Sleep(5000);
                system("cls");
            }
            else {
                cout << "Для того чтобы  начать игру добавте денег!" << endl << "Введите необходмую сумму:";
                cin >> money;
            }
    
            break;
        }
        case 2:{
            cout << "Если срвподают 2 цифры сумма увеличивается на 30%" << endl;
            cout << "Еси совподают 3 цифры сумма удваивается" << endl;
            Sleep(5000);
            system("cls");
            break;
        }
        case 3: {
            while(flag){
            summa(a.rul(), b.rul(), c.rul(),money);
            a.top();
            b.top();
            c.top();
            cout << "Ваш баланс : " << money << endl;
            cout << "для того чтобы прокрутить еще раз нажмите 1" << endl;
            cout << "чтобы закончить игру нажмите 0" << endl;
            cin >> flag;
            system("cls");
            }
            break;
        }


        default:
            break;
        }
    }

}

