#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	string s;
	int N;
	scanf("%d", &N);
	while (N--) {
		bool ans = true;
		cin >> s;
		stack <char> st;
		int size = s.size();
		for (int i = 0; i < size; i++) {
			if (s[i] == '(') {
				st.push('(');
			}
			else {
				if (st.empty()) {
					ans = false;
					break;
				}
				st.pop();
			}
		}
		if (!st.empty()) ans = false;
		if (ans) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}