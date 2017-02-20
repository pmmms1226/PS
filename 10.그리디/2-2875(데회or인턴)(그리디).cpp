//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int M, N, K;
//	scanf("%d %d %d", &N, &M, &K);
//	int ans = 0;
//	while (1) {
//		if (N >= 2 && M >= 1) {
//			N -= 2;
//			M -= 1;
//			ans++;
//		}
//		else break;
//	}
//	K -= M + N;
//	while (K > 0) {
//		ans--;
//		K -= 3;
//	}
//	printf("%d", ans);
//	return 0;
//}