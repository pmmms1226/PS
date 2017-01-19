#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;


string str[1001];

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	string s;
	cin >> s;
	int size = s.size();

	for (int i = 0; i < size; i++) {
		str[i] = s.substr(i, size-i );
	}
	sort(str, str + size);
	for (int i = 0; i < size; i++) {
		cout << str[i] << "\n";
	}
	return 0;
}