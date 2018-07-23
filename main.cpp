/*05-12-2017
DSA F'17
LAb 7
Task 1
Zohaib Aamir
*/
#include <iostream>
#include"linklist.h"
using namespace std;




void main(){
	linklist obj;
	int choice;

	while (true){
		//menu
		cout << "\n1-for insert\n2-insert after\n3-delete\n4-delete before\n5-update";		
		cout <<"\n6-check empty\n7-get size\n8-get first\n9-print list\n10- exit" << endl;
		cout << "enter choice:";
		cin >> choice;
		if (choice == 1){
			int input;
			cout << "\nenter value to be inserted:";
			cin >> input;
			obj.insert(input);
		}
		else if (choice == 2){
			int input1, input2;
			cout << "\nenter the value whose next value is to be iserted:";
			cin >> input1;
			cout << "\nenter value:";
			cin >> input2;
			obj.insertAfter(input1, input2);

		}
		else if (choice == 3){
			int input;
			cout << "\nenter value to be deleted:";
			cin >> input;
			obj.Delete(input);
			cout << "\n" << input << " deleted\n";
		}
		else if (choice == 4){
			int input;
			cout << "enter value whose before value would be deleted:";
			cin >> input;
			obj.deleteBefore(input);
		}
		else if (choice == 5){
			int input, input2;
			cout << "\nenter value where we need to update:";
			cin >> input;
			cout << "\nenter new value:";
			cin >> input2;
			obj.update(input, input2);
		}
		else if (choice == 6){
			if (obj.isEmpty())
				cout << "\nYes EMPTY\n";
			else
				cout << "\nNot empty\n";
		}
		else if (choice == 7){
			cout << "size of linklist is:" << obj.getsize() << endl;
		}
		else if (choice == 8){
			if (obj.getHeadValue() != NULL){
				cout << "\nvalue at head is:" << obj.getHeadValue() << endl;
			}
			else
				cout << "\nLinklist empty";
		}
		else if (choice == 9){
			if (!obj.isEmpty()){
				obj.print();
			}
			else
				cout << "\nlinlist empty";
		}
		else if (choice == 10)
			break;
		cout << endl;
		system("pause");
		system("cls");
	}
}
