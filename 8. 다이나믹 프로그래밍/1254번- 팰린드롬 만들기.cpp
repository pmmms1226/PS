//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//using namespace std;
//int dp[1001][1001];
//int main() {
//	//freopen("input.txt", "r", stdin);
//	string s;
//	cin >> s;
//	int size = s.size();
//	for (int i = 0; i < size; i++) {
//		dp[i][i] = 1;
//	}
//	for (int k = 1; k < size; k++) {
//		for (int i = 0; i < size; i++) {
//			if (k == 1) {
//				if (s[i] == s[i + 1]) dp[i][i + 1] = 1;
//			}
//			else {
//				int start = i, end = i + k;
//				if (end >= size) break;
//				if (s[start] == s[end]) {
//					if (dp[start + 1][end - 1] == 1) dp[start][end] = 1;
//				}
//			}
//		}
//	}
//	int ans = 0;
//	int start = 0, end = size;
//	if (dp[start][end - 1] == 1) {
//		printf("%d", size);
//		return 0;
//	}
//	while (start <= end) {
//		ans++;
//		if (dp[start + 1][end - 1] == 1) {
//			break;
//		}
//		else {
//			start++;
//		}
//	}
//	printf("%d", ans + size);
//	return 0;
//}