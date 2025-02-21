////EXAMPLE:1:
////stack.cpp
//#include<iostream>
//using namespace std;
//#include<stdlib.h>
//#include"stack.h"
//Stack::Stack() {
//	top = -1;
//}
//int Stack::IsEmpty()const {
//	return(top == -1);
//}
//int Stack::IsFull() const {
//	return(top == MAX_ITEMS - 1);
//}
//void Stack::Push(ItemType newItem) {
//	if (IsFull()) {
//		cout << "stack overflow" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newItem;
//}
//void Stack::Pop(ItemType& item) {
//	if (IsEmpty()) {
//		cout << "stack underflow" << endl;
//		exit(1);
//	}
//	item = items[top];
//	top--;
//}


//EXAMPLE:2:
//stack.cpp
//#include<iostream>
//using namespace std;
//#include<stdlib.h>
//#include"stack.h"
//template<class ItemType>
//Stack<ItemType > ::Stack() {
//	maxStack = 500;
//	top = -1;
//	items = new ItemType[500];
//}
//template<class ItemType>
//Stack<ItemType >::Stack(int max) {
//	maxStack = max;
//	top = -1;
//	items = new ItemType[max];
//}
//template<class ItemType>
//Stack<ItemType >::~Stack() {
//	delete[items; ]
//}
//
//template<class ItemType>
//int Stack<ItemType >::IsEmpty()const {
//	return(top == -1);
//}
//template<class ItemType>
//int Stack<ItemType >::IsFull() const {
//	return(top == maxStack - 1);
//}
//template<class ItemType>
//void Stack <ItemType >::Push(ItemType newItem) {
//	if (IsFull()) {
//		cout << "stack overflow" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newItem;
//}
//template<class ItemType>
//void Stack <ItemType >::Pop(ItemType& Item) {
//	if (IsEmpty()) {
//		cout << "stack underflow" << endl;
//		exit(1);
//	}
//	Item = items[top];
//	top--;
//}

//EXERCISE:2.1:
//#include "stack.h"
//
//// Constructor
//Stack::Stack() {
//    top = -1;
//}
//
//// Check if stack is empty
//int Stack::IsEmpty() const {
//    return (top == -1);
//}
//
//int Stack::IsFull() const {
//    return (top == MAX_ITEMS - 1);
//}
//
//void Stack::Push(ItemType newItem) {
//    if (!IsFull()) {
//        items[++top] = newItem;
//    }
//    else {
//        cout << "Stack is full! Cannot push.\n";
//    }
//}
//void Stack::Pop(ItemType& item) {
//    if (!IsEmpty()) {
//        item = items[top--];
//    }
//    else {
//        cout << "Stack is empty! Cannot pop.\n";
//    }
//}
//
//ItemType Stack::Peek() const {
//    if (!IsEmpty()) {
//        return items[top];  // Return the top item
//    }
//    else {
//        cout << "Stack is empty! No top element.\n";
//        return -1;  // Assuming -1 as an invalid return value
//    }
//}

//EXERCISE:2.2:A:
//#include <iostream>
//#include "stack.h"
//
//using namespace std;
//
//bool IsValidParentheses(const string& expr) {
//    Stack s;
//    for (char ch : expr) {
//        if (ch == '(' || ch == '{' || ch == '[') {
//            s.Push(ch);
//        }
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            if (s.IsEmpty()) return false;
//            char topChar;
//            s.Pop(topChar);
//            if ((ch == ')' && topChar != '(') ||
//                (ch == '}' && topChar != '{') ||
//                (ch == ']' && topChar != '[')) {
//                return false;
//            }
//        }
//    }
//    return s.IsEmpty();  // Stack should be empty if valid
//}

//EXERCISE:2.2:B:
#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string InfixToPostfix(const string& infix) {
    Stack s;
    string postfix = "";

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            s.Push(ch);
        }
        else if (ch == ')') {
            while (!s.IsEmpty()) {
                char top;
                s.Pop(top);
                if (top == '(') break;
                postfix += top;
            }
        }
        else {
            while (!s.IsEmpty()) {
                char top;
                s.Peek();
                if (precedence(top) >= precedence(ch)) {
                    s.Pop(top);
                    postfix += top;
                }
                else {
                    break;
                }
            }
            s.Push(ch);
        }
    }

    while (!s.IsEmpty()) {
        char top;
        s.Pop(top);
        postfix += top;
    }

    return postfix;
}

