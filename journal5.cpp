////exercise 5.1  
// #include <iostream>
//#include "pque.h"
//
//using namespace std;
//
//int main() {
//    PQue<int> pq;  // Instantiate priority queue
//
//    // Insert elements with different priority levels
//    pq.Insert(10, 2);
//    pq.Insert(20, 5);
//    pq.Insert(30, 5);
//    pq.Insert(40, 1);
//
//    // Remove elements and display them
//    int item;
//    pq.Remove(item);
//    cout << "Removed: " << item << endl;
//
//    pq.Remove(item);
//    cout << "Removed: " << item << endl;
//
//    return 0;
//}
//
// with the following main program:
//int main() {
//    int numPriorities;
//    cout << "Enter the number of priority levels: ";
//    cin >> numPriorities;
//
//    PQue<int> pq(numPriorities);  // Instantiate with dynamic priority levels
//
//    // Inserting elements with different priority levels
//    pq.Insert(10, 2);
//    pq.Insert(20, 5);
//    pq.Insert(30, 5);
//    pq.Insert(40, 1);
//
//    // Removing elements and displaying them
//    int item;
//    pq.Remove(item);
//    cout << "Removed: " << item << endl;
//
//    pq.Remove(item);
//    cout << "Removed: " << item << endl;
//
//    return 0;
//}