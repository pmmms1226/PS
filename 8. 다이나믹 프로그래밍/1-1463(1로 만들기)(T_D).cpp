///*
//DP T_D
//시간 : O(N)
//공간 : O(N)
//*/
//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<cmath>
//#include<queue>
//using namespace std;
//int dp[1000001];
//#define INF 1000000
//int N;
//int func(int cur) {
//	if (cur == 1) return 0;
//	int &ret = dp[cur];
//	if (ret != -1) return ret;
//	ret = func(cur - 1) + 1;
//	if (cur % 2 == 0) {
//		int val = func(cur / 2) + 1;
//		if (val < ret) ret = val;
//	}
//	if (cur % 3 == 0) {
//		int val = func(cur / 3) + 1;
//		if (val < ret) ret = val;
//	}
//	return ret;
//}
//int main() {
//	//#ifdef _CONSOLE
//	//	freopen("intput.txt", "r", stdin);
//	//#endif
//	scanf("%d", &N);
//	for (int i = 0; i <=N; i++) {
//		dp[i] = -1;
//	}
//	func(N);
//	printf("%d", dp[N]);
//	return 0;
//}