//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int dp0[41];
//int dp1[41];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int t;
//	scanf("%d", &t);
//	dp0[0] = 1;
//	dp0[1] = 0;
//	dp1[0] = 0;
//	dp1[1] = 1;
//	for (int i = 2; i <= 40; i++) {
//		dp0[i] = dp0[i - 2] + dp0[i - 1];
//		dp1[i] = dp1[i - 2] + dp1[i - 1];
//	}
//	while (t--) {
//		int a;
//		scanf("%d", &a);
//		printf("%d %d", dp0[a], dp1[a]);
//		printf("\n");
//	}
//	
//
//	return 0;
//}