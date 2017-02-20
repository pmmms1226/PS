//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int N, M;
//int arr[200001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N,&M);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, arr + N);
//
//	int start = 1, end = arr[N - 1] - arr[0], mid,cnt,ans;
//	while (start <= end) {
//		mid = (start + end) / 2;
//		cnt = 1;
//		int tmp = arr[0];
//		for (int i = 1; i < N; i++) {
//			if (arr[i] - tmp >= mid) {
//				tmp = arr[i], cnt++;
//			}
//		}
//		if (cnt >= M) {
//			ans = mid;
//			start = mid + 1;
//		}
//		else end = mid - 1;
//	}
//	printf("%d", ans);
//	return 0;
//}