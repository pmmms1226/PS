//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cstring>
//#include<string>
//using namespace std;
//string s;
//int dp[50][50];
//int main() {
//	freopen("input.txt", "r", stdin);
//	cin >> s;
//	int size = s.size();
//	for (int i = 0; i < size; i++) {
//		dp[i][i] = 1;
//	}
//	for (int j = 1; j < size; j++) {
//		for (int i = 0; i < size; i++) {
//			if (i + j >= size) break;
//			if (j == 1) {
//				if (s[i] == s[i + j]) dp[i][i + j] = 1;
//			}
//			if (s[i] == s[i + j]) {
//				if (dp[i + 1][i + j - 1] == 1) dp[i][i + j] = 1;
//			}
//		}	
//	}
//
//	int ans = 0;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (dp[i][j] == 1) ans++;
//			//cout << dp[i][j] << ' ';
//		}
//		//cout << endl;
//	}
//	printf("%d\n", ans);
//	return 0;
//}