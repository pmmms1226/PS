//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<queue>
//using namespace std;
//#define INF 987654321
//int N ;
//long long M, arr[10001];
//int ans;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %lld", &N, &M);
//	for (int i = 0; i < N; i++) {
//		scanf("%lld", &arr[i]);
//		if (i == 0) continue;
//		else arr[i] += arr[i - 1];
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = i; j < N; j++) {
//			if (i == 0) {
//				if (arr[j] == M) ans++;
//				 continue;
//			}
//			if (M == arr[j] - arr[i - 1]) ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}