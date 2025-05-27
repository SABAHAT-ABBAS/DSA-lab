#pragma once
#include<iostream>
#include<queue>
using namespace std;
template<class T>
class BinaryTree {
	struct Node {
		T info;
		Node* left;
		Node* right;
		Node* parent;
		Node(T c) :info(c), left(nullptr), right(nullptr), parent(nullptr) {}
	};
	Node* root;
	// private transversal functions implementations
	void preTrav(Node* p) {
		if (p == nullptr) return;
		else {
			cout << p->info << " ";
			preTrav(p->left);
			preTrav(p->right);
		}
	}
	void inTrav(Node* p) {
		if (p == nullptr) return;
		else {
			inTrav(p->left);
			cout << p->info << " ";
			inTrav(p->right);
		}
	}
	void postTrav(Node* p) {
		if (p == nullptr) return;
		else {
			postTrav(p->left);
			postTrav(p->right);
			cout << p->info << " ";
		}
	}
public:
	BinaryTree() :root(nullptr) {}
	BinaryTree(T c) {
		root = new Node(c);
	}
	BinaryTree(T c, Node* lft, Node* right) {
		root = new Node(c, lft, right);
	}
	Node* getRoot() 
	return root;
	void setLeft(Node* p, T x) {
		if (p == nullptr)  cout << "invalid insertion\n";
		else if (p->left == nullptr) {
			p->left = new Node(x);
			p->left->parent = p;
		}
		else cout << "Left child already exists\n";
	}
	void setRight(Node* p, T x) {
		if (p == nullptr) cout << "invalid insertion\n";
		else if (p->right == nullptr) {
			p->right = new Node(x);
			p->right->parent = p;
		}
		else cout << "Right child already exists\n";
	}
	void preTrav() {
		preTrav(root);
	}

	void inTrav() {
		inTrav(root);
	}

	void postTrav() {
		postTrav(root);
	}
	void insert(T x) {
		if (root == nullptr) root = new Node(x);
		else {
			Node* newN = new Node(x);
			queue<Node*> q;
			q.push(root);
			while (!q.empty()) {
				Node* temp = q.front();
				q.pop();
				if (temp->left == nullptr) {
					temp->left = newN;
					temp->left->parent = temp;
					return;
				}
				else q.push(temp->left);
				if (temp->right == nullptr) {
					temp->right = newN;
					temp->right->parent = temp;
					return;
				}
				else q.push(temp->right);
			}
		}
	}
	~BinaryTree() {
		queue<Node*> q;
		q.push(root);
		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			if (temp->left != nullptr) q.push(temp->left);
			if (temp->right != nullptr) q.push(temp->right);
			delete temp;
		}
	}
};