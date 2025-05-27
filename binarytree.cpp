#include "binarytree.h"
#include<iostream>

using namespace std;
int main() {
	BinaryTree <int> t(1);
	t.setLeft(t.getRoot(), 2);
	t.setRight(t.getRoot(), 3);
	t.setLeft(t.getRoot()->left, 4);
	t.setRight(t.getRoot()->left, 5);
	t.setLeft(t.getRoot()->right, 6);
	t.setRight(t.getRoot()->right, 7);
	// Preorder Traversal
	t.preTrav();
	return 0;
}
