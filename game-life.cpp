#include <iostream>
#include <Windows.h>
#define random(min,max) min+rand()%(max - min +1)
using namespace std;
void show(char ** arr, int row, int column) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
bool checkt( int j) {
    
}


int main()
{
    srand(time(NULL));
    
    int row = 15;
    int column = 15;
    char** arr = new char*[row];
    for (int i = 0; i < column; i++)
    {
        arr[i] = new char [column];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j] = 46;
            
        }
        arr[random(0,14)][random(0,14)] = 43;
    }
    ///*show(arr, row, column);*/
    while (true) {
       
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (arr[i][j] = 43) {
                    if ( checkup(i)){
                        arr[i][j] = 46;
                        arr[i - 1][j] = 43;
                    }
                    if ( checkdown(i) == 1) {
                        arr[i][j] = 46;
                        arr[i + 1][j] = 43;
                    }
                    if ( checkright(i) == 1) {
                        arr[i][j] = 46;
                        arr[i][j+ 1] = 43;
                    }
                    if ( checkup(i) == 1) {
                        arr[i][j] = 46;
                        arr[i][j -1 ] = 43;
                    }
                }
            }
        }
          show(arr, row, column);
          Sleep(500);
          system("cls");
    }
   
   
           
        
}