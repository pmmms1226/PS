#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>

using namespace std;


int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	std::ios::sync_with_stdio(false);
	deque<char> left;
	deque<char> right;
	string s;
	char cm, c;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		left.push_back(s[i]);
	}
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		cin >> cm;
		switch (cm)
		{
		case 'L':
			if (left.empty()) break;
			right.push_front(left.back());
			left.pop_back();
			break;
		case 'D':
			if (right.empty()) break;
			left.push_back(right.front());
			right.pop_front();
			break;
		case 'B':
			if (left.empty()) break;
			left.pop_back();
			break;
		case 'P':
			cin >> c;
			left.push_back(c);
			break;
		default:
			break;
		}

		/*switch (cm) {
		case 'P':
			cin >> c;
			left.push_back(c);
			break;
		case 'L':
			if (left.empty()) break;
			right.push_front(left.back());
			left.pop_back();
			break;
		case 'D':
			if (right.empty()) break;;
			left.push_back(right.front());
			left.pop_front();
			break;
		case 'B':
			if (left.empty()) break;
			left.pop_back();
			break;
		default:
			break;
		}*/


	}
	while (!left.empty()) {
		printf("%c", left.front());
		left.pop_front();
	}
	while (!right.empty()) {
		printf("%c", right.front());
		right.pop_front();
	}
	printf("\n");
	return 0;
}