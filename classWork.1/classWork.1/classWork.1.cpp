#include <iostream>
using namespace std;
#define random(min,max) min+rand()%(max-min+1)
const int row = 4;
const int column = 4;
void init( int** array) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] = random(1, 9);
        }
    }
 }
void print(int** arr) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
namespace Matrix
{
    int** summa(int** arr, int** arr2) {
        int** def = new int* [row];
        for (int i = 0; i < row; i++)
        {
            def[i] = new int[column];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                def[i][j] = arr[i][j] + arr2[i][j];
            }
        }
        return def;
    }
    int** mult(int** arr, int** arr2) {
        int** def = new int* [row];
        for (int i = 0; i < row; i++)
        {
            def[i] = new int[column];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                def[i][j] = arr[i][j] * arr2[i][j];
            }
        }
        return def;
    }
    int** mult(int** arr, int a) {
        int** def = new int* [row];
        for (int i = 0; i < row; i++)
        {
            def[i] = new int[column];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                def[i][j] = arr[i][j] * a;
            }
        }
        return def;
    }
    int** trans(int**& arr) {
        int** def = new int* [row];
        for (int i = 0; i < row; i++)
        {
            def[i] = new int[column];
        }
        for (int i = 0; i < row;i++)
        {
            for (int j = 0; j < column; j++)
            {
                def[j][i] = arr[i][j];
            }
        }
        return def;
    }

}

int main()
{
    setlocale(LC_ALL, "rus");
    int** array = new int* [row];
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[column];
    }

    int** array2 = new int* [row];
    for (int i = 0; i < row; i++)
    {
        array2[i] = new int[column];
    }
    init(array);
    init(array2);
    print(array);
    print(array2);
    print(Matrix::summa(array, array2));
    print(Matrix::mult(array, array2));
    print(Matrix::mult(array, 2));
    print(Matrix::trans(array));
}

