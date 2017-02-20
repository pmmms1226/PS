//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//using namespace std;
//struct node {
//	int val;
//	struct node *next;
//};
//int queSize;
//node *head = NULL, *tail=NULL;
//void push(int data) {
//	node *newNode = new node;
//	if (head == NULL) {
//		newNode->val = data;
//		head = newNode;
//		tail = newNode;
//		queSize++;
//	}
//	else {
//		newNode->val = data;
//		tail->next = newNode;
//		queSize++;
//		tail = newNode;
//	}
//
//}
//int pop() {
//	if (queSize == 0) return -1;
//	node *tmp = head;
//	int temp = head->val;
//	if (head == tail) {
//		head = NULL;
//		tail = NULL;
//		queSize--;
//		return temp;
//	}
//	else {
//		head = head->next;
//		queSize--;
//		return temp;
//	}
//}
//int size() {
//	return queSize;
//}
//bool empty() {
//	if (queSize == 0) return true;
//	else return false;
//}
//int front() {
//	if (queSize == 0) return -1;
//	return head->val;
//}
//int back() {
//	if (queSize == 0) return -1;
//	return tail->val;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N;
//	scanf("%d", &N);
//	string s;
//	while (N--) {
//		cin >> s;
//		if (s == "push") {
//			int a;
//			scanf("%d", &a);
//			push(a);
//		}
//		else if (s == "front") {
//			printf("%d\n", front());
//		}
//		else if (s == "back") {
//			printf("%d\n", back());
//		}
//		else if (s == "size") {
//			printf("%d\n", size());
//		}
//		else if (s == "empty") {
//			if (empty()) printf("1\n");
//			else printf("0\n");
//		}
//		else if (s == "pop") {
//			printf("%d\n", pop());
//		}
//	}
//	return 0;
//}