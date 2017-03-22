//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//enum C {RED , BLACK};
//struct node {
//	int val;
//	node *left = NULL , *right=NULL , *parent = NULL;
//	C color;
//	bool re = false;
//};
//int cnt = 0;
//node *root = NULL;
//void restructuring(node *child, node *parent);
//void recoloring(node *child, node *parent);
//void func(node *child, node *parent);
//void insert(int value, node *tmp);
//void pre(node *NODE);
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int a;
//		scanf("%d", &a);
//		insert(a, root);
//		printf("%d\n", cnt);
//	}
//	return 0;
//}
//
//void restructuring(node *child, node *parent) {
//	node * grandparent = parent->parent;
//	if (grandparent->left == parent) { // 2,3
//		if (parent->right == child) {//2
//			if (grandparent == root) {
//				root = child;
//			}
//			else {
//				if (grandparent->parent->right == grandparent) {
//					child->parent = grandparent->parent;
//					grandparent->parent->right = child;
//				}
//				if (grandparent->parent->left == grandparent) {
//					child->parent = grandparent->parent;
//					grandparent->parent->left = child;
//				}
//			}
//			parent->right = child->left;
//			if(child->left != NULL)
//				child->left->parent = parent;
//			child->left = parent;
//			parent->parent = child;
//
//			grandparent->left = child->right;
//			if (child->right != NULL)
//				child->right->parent = parent;
//			child->right->parent = grandparent;
//			child->right = grandparent;
//			grandparent->parent = child;
//
//			//color
//			child->color = BLACK;
//			grandparent->color = RED;
//			child->re = true;
//		}
//		if (parent->left == child) { //3
//			if (grandparent == root) {
//				root = child;
//			}
//			else {
//				if (grandparent->parent->right == grandparent) {
//					parent->parent = grandparent->parent;
//					grandparent->parent->right = parent;
//				}
//				if (grandparent->parent->left == grandparent) {
//					parent->parent = grandparent->parent;
//					grandparent->parent->left = parent;
//				}
//			}
//			grandparent->left = parent->right;
//			if(parent->right != NULL)
//				parent->right->parent = grandparent;
//			grandparent->parent = parent;
//			parent->right = grandparent;
//			//color
//			grandparent->color = RED;
//			parent->color = BLACK;
//			parent->re = true;
//		}
//	}
//	else if (grandparent->right == parent) { // 1,4
//		if (parent->left == child) {//1
//			if (grandparent == root) {
//				root = child;
//			}
//			else {
//				if (grandparent->parent->right == grandparent) {
//					child->parent = grandparent->parent;
//					grandparent->parent->right = child;
//				}
//				if (grandparent->parent->left == grandparent) {
//					child->parent = grandparent->parent;
//					grandparent->parent->left = child;
//				}
//			}
//			parent->left = child->right;
//			if(child->right != NULL)
//				child->right->parent = parent;
//			child->right = parent;
//			parent->parent = child;
//
//			grandparent->right = child->left;
//			if(child->left != NULL)
//				child->left->parent = grandparent;
//			child->left = grandparent;
//			grandparent->parent = child;
//
//			//color
//			child->color = BLACK;
//			grandparent->color = RED;
//			child->re = true;
//		}
//		else {//4
//			if (grandparent == root) {
//				root = child;
//			}
//			else {
//				if (grandparent->parent->right == grandparent) {
//					parent->parent = grandparent->parent;
//					grandparent->parent->right = parent;
//				}
//				if (grandparent->parent->left == grandparent) {
//					parent->parent = grandparent->parent;
//					grandparent->parent->left = parent;
//				}
//			}
//			grandparent->right = parent->left;
//			if(parent->left != NULL)
//				parent->left->parent = grandparent;
//			grandparent->parent = parent;
//			parent->left = grandparent;
//			//color
//			grandparent->color = RED;
//			parent->color = BLACK;
//			parent->re = true;
//		}
//	}
//}
//void recoloring(node *child, node *parent) {
//	node * grandparent = parent->parent;
//	if (grandparent == root) {
//		grandparent->left->color = BLACK;
//		grandparent->right->color = BLACK;
//		return;
//	}
//	else {
//		grandparent->color = RED;
//		grandparent->left->color = BLACK;
//		grandparent->right->color = BLACK;
//		if (grandparent->parent->color == RED) {
//			func(grandparent, grandparent->parent);
//		}
//	}
//}
//void func(node *child, node *parent) {
//	node * grandparent = parent->parent;
//	node * uncle = NULL;
//	if (grandparent->left != NULL && grandparent->left != parent) {
//		uncle = grandparent->left;
//	}
//	if (grandparent->left != NULL && grandparent->right != parent) {
//		uncle = grandparent->right;
//	}
//	if (uncle != NULL && uncle->color == RED) {//recoloring
//		recoloring(child, parent);
//	}
//	else if(uncle == NULL || uncle->color == BLACK){//restructruing
//		restructuring(child, parent);
//	}
//}
//void insert(int value, node *tmp) {
//	if (root == NULL) {
//		node *newnode = new node;
//		newnode->val = value;
//		newnode->color = BLACK;
//		root = newnode;
//		return;
//	}
//	cnt++;
//	if (tmp->re) cnt++;
//	if (tmp->val > value) {
//		if (tmp->left == NULL) {
//			node *newnode = new node;
//			newnode->val = value;
//			newnode->parent = tmp;
//			newnode->color = RED;
//			tmp->left = newnode;
//			if (tmp->color == RED) {
//				func(newnode, tmp);
//			}
//			return;
//		}
//		else
//			insert(value, tmp->left);
//	}
//	else {
//		if (tmp->right == NULL) {
//			node *newnode = new node;
//			newnode->val = value;
//			newnode->parent = tmp;
//			newnode->color = RED;
//			tmp->right = newnode;
//			if (tmp->color == RED) {
//				func(newnode, tmp);
//			}
//			return;
//		}
//		else insert(value, tmp->right);
//	}
//}
//void pre(node *NODE) {
//	printf("%d ", NODE->val);
//	if (NODE->left != NULL)
//		pre(NODE->left);
//	if (NODE->right != NULL)
//		pre(NODE->right);
//}