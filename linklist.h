#pragma once
class node{
public:
	int data;	
	node *next;		//will point toward the next added memory location
};


//singly list
class linklist{
public:
	linklist();
	~linklist();
	bool isEmpty();
	int getsize();
	void insertAfter(int, int);
	void insert(int);
	int getHeadValue();
	void deleteBefore(int);
	void Delete(int);
	void update(int, int);
	void print();
private:
	node *head;
};
