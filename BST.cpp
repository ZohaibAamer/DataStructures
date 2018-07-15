/*09-01-2017
DSA'17
BS Tree
Zohaib Aamir
*/

#include"BST.h"

BST::BST(){
	root = nullptr;
}

bool BST::search(int val){		//wrapper function
	//returns true if found false if not
	return Search(root, val);	
}

bool BST::Search(node *ptr, int val){
	if (ptr == nullptr)		//boundry conditions
		return false;
	else if (ptr->data == val)
		return true;
	else{
		if (ptr->data > val)			//left side holds the smaller values
			Search(ptr->left, val);
		else
			Search(ptr->right, val);	//right side holds the greater values
	}
}
void BST::insert(node *ptr, int val){

	if (root == nullptr){				//first node
		node *ptr = new node;
		ptr->data = val;
		ptr->left = nullptr;
		ptr->right = nullptr;
		root = ptr;
		return;
	}
	else{
		if (ptr->left == nullptr && ptr->data > val)		//traversing to lowest level on left
		{
			node *temp = new node;
			temp->data = val;
			temp->right = nullptr;
			temp->left = nullptr;
			ptr->left = temp;
			return;
		}
		else if (ptr->right == nullptr && ptr->data < val){		//traversing to lowest right level
			node *temp = new node;
			temp->data = val;
			temp->right = nullptr;
			temp->left = nullptr;
			ptr->right = temp;
			return;
		}
		else{
			if (ptr->data > val)
				insert(ptr = ptr->left, val);			//traverse to left if a smaller value then this node
			else
				insert(ptr = ptr->right, val);			//traverse to right if a greater value then this node

		}
	}
}


void BST::PrintAll(){
	printIN(root);		//wrapper functions
	//it prints in inorder traversal
}


void BST::Insert(int val){		//wrapper functions
	insert(root, val);
}

void BST::printIN(node *ptr){		//inorder traversal to print root 
									//to leaves
	if (ptr == nullptr)
		return;
	else{
		printIN(ptr->left);
		cout << ptr->data << " ";
		printIN(ptr->right);
	}
}


BST::~BST(){		//destructor as a wrapper function
	dell(root);
}

void BST::dell(node *ptr){		//inorder traversal to delete all nodes root to leaves
	if (ptr == nullptr)
		return;
	else{
		if (ptr->left == nullptr && ptr->right == nullptr){
			delete ptr;
			ptr = nullptr;
		}
		else{
			dell(ptr->left);
			dell(ptr->right);
		}
	}
}


