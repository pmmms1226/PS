//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<stack>
//using namespace std;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	string s;
//	int n;
//	stack <char> st;
//	scanf("%d", &n);
//	int cnt = 0;
//	while (n--) {
//		cin >> s;
//		bool ans = true;
//		int size = s.size();
//		for (int i = 0; i < size; i++) {
//			if (st.empty()) st.push(s[i]);
//			else {
//				if (s[i] == st.top()) st.pop();
//				else st.push(s[i]);
//			}
//		}
//		while (!st.empty()) {
//			ans = false;
//			st.pop();
//		}
//		if (ans) cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}