#include <iostream>
using namespace std;

class node{				//node for tree
public:
	int data;
	node *right;
	node *left;
};


class BST{
public:
	BST();
	~BST();
	//wrapper functions
	void Insert(int);
	void PrintAll();
	bool search(int val);
	

private:
	bool Search(node *, int);
	void insert(node *, int);
	void printIN(node*);
	void dell(node *);
	node *root;
};
