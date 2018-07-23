#include "linklist.h"
#include<iostream>
using namespace std;

linklist::linklist(){
	head = NULL;
}

linklist :: ~linklist(){
	node *temp = head;
	while (head != NULL){			//iterate untill you get out of the last node
		head = head->next;
		delete temp;
		temp = head;
	}
	head = NULL;
}

//if list is empty
bool linklist::isEmpty(){
	if (head == NULL)
		return true;
	return false;
}


void linklist::insert(int val){			//value to be added
	node *ptr = new node;		//create a new node with parameter as value
	ptr->data = val;
	ptr->next = NULL;
	if (head == NULL)
		head = ptr;
	else{
		node *temp = head;
		while (temp->next != NULL)			//iterate unitll you get the last node
			temp = temp->next;
		temp->next = ptr;			//now the last pointer towards the new node
	}
}
void linklist::insertAfter(int key, int value)				//value to be added after certain value in list
{															//key is the value after which a node with value parameter will be added
	node *ptr = new node, *pointer = head, *temp;
	ptr->data = value;

	while (pointer != NULL){
		if (pointer->data == key){
			temp = pointer->next;
			pointer->next = ptr;
			ptr->next = temp;
			break;
		}
		pointer = pointer->next;
	}

}





int linklist::getHeadValue(){		//return value at head
	if (!isEmpty())
		return head->data;
	else
		return NULL;
}
void linklist::deleteBefore(int key){		//delete before a certain value
	if (!isEmpty()){		//boundry condition
							//list must not be empty
		node *temp = head;		//iterator
		//case
		if (temp->next->data == key){		//if head is to be deleted
			head = head->next;				
			delete temp;
			return;
		}
		else{
			//ptemp will point at previous node
			//temp2 is iterator
			node *ptemp = head, *temp2 = head;		
			while (temp2 != NULL){
				if (temp2->data == key){
					ptemp->next = temp2;
					delete temp;
					break;
				}
				//setting pointers
				ptemp = temp;
				temp = temp->next;
				temp2 = temp->next;

			}
		}
	}
}

void linklist::Delete(int key){
	if (!isEmpty()){
		node *temp = head;
		//case
		if (temp->data == key){

			head = head->next;
			delete temp;
		}
		else{

			node *previous = head;
			while (temp != NULL){
				temp = temp->next;
				if (temp->data == key){
					previous->next = temp->next;
					delete temp;
					break;
				}
				previous = temp;
			}
		}
	}
}

//returns count of nodes in the list
int linklist::getsize(){
	int count = 0;
	if (!isEmpty()){

		node *temp = head;
		while (temp != NULL){
			count++;
			temp = temp->next;
		}
	}
	return count;

}

void linklist::update(int val, int val2){
	if (!isEmpty()){
		node *temp = head;
		while (temp->data != val)
			temp = temp->next;
		temp->data = val2;
	}
}


//print from head to last node
void linklist::print(){
	if (!isEmpty()){
		node *temp = head;
		while (temp != NULL){
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
}