/*��ũ�� ����Ʈ�� ���� �����Ͽ� ���� �ذ�*/

#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;
typedef struct node {
	char C;
	struct node *next;
	struct node *pre;
}node;
node *head = NULL, *tail = new node, *cur = NULL;
void insert(char c) {
	node *New = new node;
	if (head == NULL) {
		head = cur=New;
		New->next = tail;
		New->C = c;
		tail->pre = New;
	}
	else {
		cur->next = New;
		New->pre = cur;
		cur  = New;
		New->C = c;
		New->next = tail;
		tail->pre = New;
	}
}

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		insert(input[i]);
	}
	cur = tail;
	int t;
	char cm, c;
	cin >> t;
	while (t--) {
		cin >> cm;
		if (cm == 'L') {
			if (cur == head) continue;
			cur = cur->pre;
		}
		else if (cm == 'D') {
			if (cur == tail) continue;
			cur = cur->next;
		}
		else if (cm == 'B') { // ����� ���ڰ� head��� head�� cur�� �ٲ� ��� �Ѵ�.
			if (cur == head) continue;
			node *temp = cur->pre;
			if (temp == head) head = head->next;
			else {
				cur->pre->pre->next = cur;
				cur->pre = cur->pre->pre;
			}
			free(temp);
		}
		else if (cm == 'P') {//�����ϴ� ��ġ�� head�� �� �̶�� �װ��� ó���ϴ� ������ �޾� ����Ѵ�. 
			cin >> c;
			node *New = new node;
			if (cur == head) {
				cur->pre = New;
				New->next = cur;
				New->C = c;
				head = New;
			}
			else {
				New->pre = cur->pre;
				New->next = cur;
				cur->pre->next = New;
				cur->pre = New;
				New->C = c;
			}
		}
	}
	node *temp = head;
	while (temp != tail) {
		cout << temp->C;
		temp = temp->next;
	}
	printf("\n");
	return 0;
}