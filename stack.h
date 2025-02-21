////EXAMPLE:1:
////stack.h
//#pragma once
//#include<iostream>
//using namespace std;
//#define MAX_ITEMS 100
//typedef int ItemType;
//class Stack {
//	Stack();
//	int IsEmpty()const;
//	int IsFull() const;
//	void Push(ItemType newItem);
//	void Pop(ItemType& Item);
//private:
//	int top;
//	ItemType items[MAX_ITEMS];
//};

//EXAMPLE:2:
//stack.h
//#pragma once
//#include<iostream>
//using namespace std;
//template<class ItemType>
//class Stack {
//public:
//	Stack();
//	Stack(int max);
//	~Stack();
//	int IsEmpty()const;
//	int IsFull() const;
//	void Push(ItemType newItem);
//	void Pop(ItemType& Item);
//private:
//	int top;
//	int maxStack;
//	ItemType* items;
//};


//EXERCISE:2.1:
//#include <iostream>
//using namespace std;
//
//#define MAX_ITEMS 100
//typedef int ItemType;
//
//class Stack {
//public:
//    Stack();
//    int IsEmpty() const;
//    int IsFull() const;
//    void Push(ItemType newItem);
//    void Pop(ItemType& item);
//    ItemType Peek() const;  // Added Peek function
//
//private:
//    int top;
//    ItemType items[MAX_ITEMS];
//};
