#include <iostream>
#include"TreeNode.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	 const int size = 7;
	int arr[size]{ 1,5,3,7,3,9,0 };
	BinaryTree<int> bt(arr, size);
	bt.print(bt.getRoot());//почему-то выдает ошибку с cout и endl
}

