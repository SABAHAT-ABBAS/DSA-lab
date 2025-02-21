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


//EXERCISE:2.1;A:
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

//EXERCISE:2.1:B:
//#include <iostream>
//#include "stack.h"  // Include the stack header file
//
//using namespace std;
//
//// Function to reverse a string using Stack
//string ReverseString(const string& input) {
//    Stack s;  // Create a stack object
//
//    // Push all characters onto the stack
//    for (char ch : input) {
//        s.Push(ch);
//    }
//
//    string reversed = "";
//
//    // Pop characters from stack to get reversed order
//    while (!s.IsEmpty()) {
//        reversed += s.Peek();  // Get the top character
//        ItemType temp;
//        s.Pop(temp);  // Remove the character from stack
//    }
//
//    return reversed;
//}
