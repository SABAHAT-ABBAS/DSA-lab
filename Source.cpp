////EXAMPLE:1:
////driver.cpp
//#include<iostream>
//#include"stack.h"
//using namespace std;
//
//int main() {
//	Stack s;
//	int item;
//	for (int i = 0; i < 20; i++) {
//		s.Push(i);
//	}
//	for (int i = 0; i < 20; i++) {
//		s.Pop(item);
//		cout << item << endl;
//	}
//}

//EXAMPLE:2:
//driver.cpp
//#include<iostream>
//#include"stack.h"
//using namespace std;
//
//int main() {
//	Stack<int> IntStack;
//	Stack<float> FloatStack;
//	int data;
//	float val;
//	IntStack.Push(35);
//	FloatStack.Pop(val);
//	cout << val << endl;
//	return 0;
//}

//EXERISE:2.1:A:
//#include "stack.h"
//
//int main() {
//    Stack s;
//    s.Push(10);
//    s.Push(20);
//
//    cout << "Top element: " << s.Peek() << endl;  // Output: 20
//
//    int poppedItem;
//    s.Pop(poppedItem);
//    cout << "Popped: " << poppedItem << endl;  // Output: 20
//
//    cout << "Top element after pop: " << s.Peek() << endl;  // Output: 10
//
//    return 0;
//}

//EXERCISE:2.1:B
//#include "stack.h"
//int main() {
//    string str;
//    cout << "Enter a string: ";
//    cin >> str;
//
//    string reversed = ReverseString(str);
//    cout << "Reversed string: " << reversed << endl;
//
//    return 0;
//}

//EXERCISE:2.2:A:
//int main() {
//    string expression;
//    cout << "Enter a parenthesized expression: ";
//    cin >> expression;
//
//    if (IsValidParentheses(expression)) {
//        cout << "Valid Expression\n";
//    }
//    else {
//        cout << "Invalid Expression\n";
//    }
//
//    return 0;
//}

//EXERCISE:2.2:B:
