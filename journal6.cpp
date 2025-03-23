//#include <iostream>
//#include <stdlib.h>
//#include <conio.h>
//
//using namespace std;
//
//template<class ItemType>
//class List {
//protected:
//    struct node {
//        ItemType info;
//        struct node* next;
//    };
//    typedef struct node* NODEPTR;
//    NODEPTR listptr;
//
//public:
//    List();
//    ~List();
//    ItemType emptyList();
//    void insertafter(ItemType oldvalue, ItemType newvalue);
//    void deleteItem(ItemType oldvalue);
//    void push(ItemType newvalue);
//    ItemType pop();
//};
//
//template<class ItemType>
//List<ItemType>::List() {
//    listptr = 0;
//}
//
//template<class ItemType>
//List<ItemType>::~List() {
//    NODEPTR p, q;
//    if (emptyList())
//        exit(0);
//    for (p = listptr, q = p->next; p != 0; p = q, q = p->next)
//        delete p;
//}
//
//template<class ItemType>
//void List<ItemType>::insertafter(ItemType oldvalue, ItemType newvalue) {
//    NODEPTR p, q;
//    for (p = listptr; p != 0 && p->info != oldvalue; p = p->next);
//
//    if (p == 0) {
//        cout << "ERROR: value sought is not in the list.";
//        exit(1);
//    }
//    // New node
//    q = new node;
//    q->info = newvalue;
//    q->next = p->next;
//    p->next = q;
//}
//
//template<class ItemType>
//ItemType List<ItemType>::emptyList() {
//    return (listptr == 0);
//}
//
//template<class ItemType>
//void List<ItemType>::push(ItemType newvalue) {
//    NODEPTR p;
//    p = new node;
//    p->info = newvalue;
//    p->next = listptr;
//    listptr = p;
//}
//
//template<class ItemType>
//void List<ItemType>::deleteItem(ItemType oldvalue) {
//    NODEPTR p, q;
//    for (q = 0, p = listptr; p != 0 && p->info != oldvalue; q = p, p = p->next);
//
//    if (p == 0) {
//        cout << "ERROR: value sought is not in the list.";
//        exit(1);
//    }
//
//    if (q == 0)
//        listptr = p->next;
//    else
//        q->next = p->next;
//
//    delete p;
//}
//
//template<class ItemType>
//ItemType List<ItemType>::pop() {
//    NODEPTR p;
//    ItemType x;
//    if (emptyList()) {
//        cout << "ERROR: the list is empty.";
//        exit(1);
//    }
//
//    p = listptr;
//    listptr = p->next;
//    x = p->info;
//    delete p;
//    return x;
//}
//int main() {
//    List<int> L;
//    L.push(87);
//    cout << L.pop() << endl;
//    return 0;
//}
//#pragma once

////exercise 6.1
//#include <iostream>
//using namespace std;
//
//int main() {
//    List<int> L;
//
//    L.push(10);
//    L.push(20);
//    L.push(30);
//    cout << "After pushing: 30, 20, 10\n";
//
//    cout << "Popped value: " << L.pop() << endl;
//
//    L.insertafter(10, 25);
//    cout << "Inserted 25 after 10.\n";
//
//    L.deleteItem(20);
//    cout << "Deleted 20 from the list.\n";
//
//    while (!L.emptyList()) {
//        cout << "Popped value: " << L.pop() << endl;
//    }
//
//    return 0;
//}

//exercise 6.2
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    List<char> L;
//    string str, reversedStr;
//
//    cout << "Enter a string: ";
//    cin >> str;
//
//    for (char c : str) {
//        L.push(c);
//    }
//
//    while (!L.emptyList()) {
//        reversedStr += L.pop();
//    }
//
//    cout << "Reversed string: " << reversedStr << endl;
//    return 0;
//}


//exercise 6.3
//#pragma once
//#ifndef LINKEDSTR_H
//#define LINKEDSTR_H
//
//#include <iostream>
//using namespace std;
//struct Node {
//    int info;
//    Node* next;
//};
//
//class LinkedStr {
//private:
//    Node* ptr;
//public:
//    LinkedStr();
//    ~LinkedStr();
//
//    void makeStr(int len);
//    void displayStr();
//    void removeFirst();
//    void removeLast();
//    void remove(int k);
//};
//#endif
//
//#include "6.3.h"
//
//LinkedStr::LinkedStr() {
//    ptr = nullptr;
//}
//
//LinkedStr::~LinkedStr() {
//    Node* temp;
//    while (ptr != nullptr) {
//        temp = ptr;
//        ptr = ptr->next;
//        delete temp;
//    }
//}
//
//void LinkedStr::makeStr(int len) {
//    if (len <= 0) return;
//
//    cout << "Enter " << len << " values:\n";
//    for (int i = 0; i < len; i++) {
//        int value;
//        cin >> value;
//        Node* newNode = new Node{ value, nullptr };
//
//        if (!ptr) {
//            ptr = newNode;
//        }
//        else {
//            Node* temp = ptr;
//            while (temp->next) temp = temp->next;
//            temp->next = newNode;
//        }
//    }
//}
//
//void LinkedStr::displayStr() {
//    Node* temp = ptr;
//    if (!temp) {
//        cout << "List is empty\n";
//        return;
//    }
//    cout << "Linked List: ";
//    while (temp) {
//        cout << temp->info << " -> ";
//        temp = temp->next;
//    }
//    cout << "NULL\n";
//}
//
//void LinkedStr::removeFirst() {
//    if (!ptr) return;
//    Node* temp = ptr;
//    ptr = ptr->next;
//    delete temp;
//}
//
//void LinkedStr::removeLast() {
//    if (!ptr) return;
//
//    if (!ptr->next) {
//        delete ptr;
//        ptr = nullptr;
//        return;
//    }
//
//    Node* temp = ptr;
//    while (temp->next->next) temp = temp->next;
//
//    delete temp->next;
//    temp->next = nullptr;
//}
//
//void LinkedStr::remove(int k) {
//    if (!ptr) return;
//
//    if (ptr->info == k) {
//        Node* temp = ptr;
//        ptr = ptr->next;
//        delete temp;
//        return;
//    }
//
//    Node* temp = ptr;
//    while (temp->next && temp->next->info != k) temp = temp->next;
//
//    if (temp->next) {
//        Node* delNode = temp->next;
//        temp->next = temp->next->next;
//        delete delNode;
//    }
//}
//#include <iostream>
//#include "6.3.h"  
//
//using namespace std;
//
//int main() {
//    LinkedStr list;
//    int len, valueToRemove;
//
//    cout << "Enter the number of elements: ";
//    cin >> len;
//    list.makeStr(len);
//    list.displayStr();
//
//    cout << "Removing the first element...\n";
//    list.removeFirst();
//    list.displayStr();
//
//    cout << "Removing the last element...\n";
//    list.removeLast();
//    list.displayStr();
//
//    cout << "Enter a value to remove: ";
//    cin >> valueToRemove;
//    list.remove(valueToRemove);
//    list.displayStr();
//
//    return 0;
//}