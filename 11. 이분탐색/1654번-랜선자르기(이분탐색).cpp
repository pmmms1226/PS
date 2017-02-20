//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//using namespace std;
//int arr[10001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N, K;
//	scanf("%d %d", &N, &K);
//	int max = 0;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//		if (max < arr[i]) max = arr[i];
//	}
//	long long start = 0, end = max, mid , cnt = 0 , ans= 0;
//	while (start <= end) {
//		cnt = 0;
//		mid = (start + end) / 2;
//		for (int i = 0; i < N; i++) {
//			cnt += arr[i] / mid;
//		}
//		if (cnt >= K) {
//			ans = mid;
//			start = mid + 1;
//		}
//		else end = mid - 1;
//	}
//	printf("%lld", ans);
//
//	return 0;
//}