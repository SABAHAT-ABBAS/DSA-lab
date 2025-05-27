
#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class double_linked {
	struct node {
		T data;
		node *next;
		node *prev;
		node(T t, node*n, node*p) :data(t), next(n), prev(p) {}
};
		node *head;
	node *tail;
	public:
		double_linked() :head(NULL), tail(NULL) {}
		template<int N>
		double_linked (T(&arr)[N]) : head(NULL), tail(NULL) {
			for (int i = 0; i != N; ++i) {
				push_back(arr[i]);
			}
			bool empty()const {
				return (!head || !tail);
			}
			operator bool()const {
				return !empty();
			}
			void push_back(T);
			void push_front(T);
			void pop_back();
			void pop_front();
			~double_linked() {
				while (head) {
					node* temp = head;
					head = head->next;
					delete temp;
				}
			}
		};
		template<class T>
		void double_linked<T>::push_back(T data) {
			tail=new node(data, NULL, tail);
			if (tail->prev) {
				tail->prev->next = tail;
			}
			if(empty()) {
				head = tail;
			}
		}

		template<class T>
		void double_linked<T>::push_front(T data) {
			head = new node(data, head, NULL);
			if (head->next) {
				head->next->prev = head;
			}
			if (empty()) {
				tail = head;
			}
		}
		template <class T>
		void double_linked<T>::pop_back() {
			if (empty()) {
				throw("Empty list");

			}
			node* temp (tail);
			T data = tail->data;
			tail = tail->prev;
			if (tail) {
				tail->next = NULL;
			}
			else {
				head = NULL;
			}
			delete temp;
			return data;
		}
		template<class T>
		void double_linked<T>::pop_front(T data){
			if (empty()) {
				throw("Empty list");
			}
			node* temp = head;
			T data = head->data;
			head = head->next;
			if (head) {
				head->prev = NULL;
			}
			else {
				tail = NULL;
			}
			delete temp;
			return data;
		}
		int main() {
			int arr[] = { 1, 2, 3, 4, 5 };
			double_linked<int> list(arr);
			list.push_back(6);
			list.push_front(0);
			while (list) {
				cout << list.pop_front() << " ";
			}
			cout << endl;
			_getch();
			return 0;
		}