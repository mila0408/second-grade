#pragma once
#include<iostream>
using namespace std;

template<typename T>

struct TreeNode
{
protected:
	T value;
	TreeNode<T>* left;
	TreeNode<T>* right;
public:
	TreeNode(T value, TreeNode<T>* left, TreeNode<T>* right);
	TreeNode();

};
template<typename T>
TreeNode<T>::TreeNode() {};

template<typename T>
TreeNode<T>::TreeNode(T value, TreeNode<T>* left, TreeNode<T>* right) : value(value), left(left), right(right) {};

template<typename T>
class BinaryTree
{protected:
	TreeNode<T>* root;
public:
	BinaryTree(T* arr,int size);
	~BinaryTree();
	void insert(T value, TreeNode<T>* root);
	void remove(T value);
	TreeNode<T>* find(T value);
	TreeNode<T>* getRoot();
	void print(TreeNode<T>* root);
	void clearMemory(TreeNode<T>* root);


};
template<typename T>
 inline BinaryTree<T>::BinaryTree(T* arr,int size)
{
	 TreeNode<T>* tree = new TreeNode<T>*(arr[0], nullptr, nullptr);
	 this.root = tree;
	 int i = 0;
	 while (i!=size)
	 {
		 if (tree->value> arr[i])
		 {
			 if (tree->left!= nullptr)
			 {
				 tree = tree->left;
				 continue;
			 }
			 tree->left = new TreeNode<T>(arr[i], nullptr, nullptr);
			 tree = this->root;
			 i++;
		 }
		 else {
			 if (tree->right!= nullptr)
			 {
				 tree = tree->right;
				 continue;
			 }
			 tree->right = new TreeNode<T>(arr[i], nullptr, nullptr);
			 tree = this->root;
			 i++;
		 }
	 }
	 this->root = tree;
}
 template<typename T>
 inline TreeNode<T>* BinaryTree<T>::getRoot() {
	 return this->root;
 }
 template<typename T>
 inline void BinaryTree<T>::print(TreeNode<T>* root) {
	 if (root == nullptr)
	 {
		 return;
	 }
	 print(root->left);
	 cout << "id: " << root->value << " " << endl;
	 print(root->right);
 }

 template<typename T>
 inline void BinaryTree<T>::insert(T value, TreeNode<T>* root) {
	 if (value>root->value)
	 {
		 if (root->right ==nullptr)
		 {
			 root->right = new TreeNode<T>(value);
			 return;
		 }
		 return insert(value, root->right);
	 }
	 else {
		 if (root->left == nullptr)
		 {
			 root->left = new TreeNode<T>(value);
			 return;
		 }
		 return insert(value, root->left);
	 }
 }

 template<typename T>
 inline void BinaryTree<T>::clearMemory(TreeNode<T>* root) {
	 if (root == nullptr)
	 {
		 return;
	 }
	 clearMemory(root->right);
	 clearMemory(root->left);
	 delete root;
 }
 template<typename T>
inline BinaryTree<T>::~BinaryTree()
{
	clearMemory(this->root);
}
