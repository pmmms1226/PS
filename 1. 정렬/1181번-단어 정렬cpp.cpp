//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<queue>
//using namespace std;
//int N;
//string s[20001];
//bool compare(string &a, string &b) {
//	if (a.size() == b.size()) {
//		return a < b;
//	}
//	return a.size() < b.size();
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		cin >> s[i];
//	}
//	sort(s, s + N, compare);
//	for (int i = 0; i < N; i++) {
//		if (i >= 1) {
//			if (s[i - 1] == s[i]) continue;
//		}
//		cout << s[i];
//		printf("\n");
//
//	}
//	return 0;
//}