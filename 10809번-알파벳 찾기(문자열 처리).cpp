#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int al[30];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	string s;
	cin >> s;
	int size = s.size();
	for (int i = 0; i < 26; i++) {
		al[i] = -1;
	}
	for (int i = 0; i < size; i++) {
		if (al[s[i] - 'a'] == -1) {
			al[s[i] - 'a'] = i;
		}
		else continue;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", al[i]);
	}
	return 0;
}