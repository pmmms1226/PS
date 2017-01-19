#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	string s;
	int B;
	cin >> s >> B;
	int size = s.size();
	long total = 0;
	for (int i = size -1; i >= 0 ; i--) {
		if (s[i] >= 'A') {
			total += pow(B, size-1 - i) * (s[i] - 'A' + 10);
		}
		else {
			total += pow(B, size-1 - i)* (s[i]-'0');
		}
	}
	cout << total << "\n";

	return 0;
}