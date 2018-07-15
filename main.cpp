/*15-07-18
BST-Testing
GIT-HUB
*/

#include"BST.h"
#include<iostream>
using namespace std;


void menu(){
	cout << "1- for insertion \n2- for searching \n3- for print all \n4- to exit\n";
}

void takeInput(int &value){
	cout << "enter a value to be inserted (integer inputs only):";
	cin >> value;
}

void main(){

	BST obj;
	int value, choice;
	while (true){
		menu();
		cout << "\nEnter your choice:";
		cin >> choice;
		cout << endl;
		if (choice == 1){
			takeInput(value);
			obj.Insert(value);
		}
		else if (choice == 2){
			takeInput(value);
			(obj.search(value)) ? cout << "found!\n" : cout << "not found\n";
		}
		else if (choice == 3)
			obj.PrintAll();
		else
			break;
		cout << endl;
		system("pause");
		system("cls");
	}
}