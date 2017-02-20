//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//using namespace std;
//int arr[1000001];
//long long sum;
//int ans=0;
//int N, M;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	
//	scanf("%d %d", &N, &M);
//	int max = 0;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//		if (max < arr[i]) max = arr[i];
//	}
//	int start = 0;
//	int mid;
//	int end = max;
//	bool TheEnd = false;
//	while (start <= end) {
//		sum = 0;
//		mid = (start + end) / 2;
//		for (int i = 0; i < N; i++) {
//			if (mid < arr[i]) {
//				sum += arr[i] - mid;
//			}
//		}
//		if (sum >= M) {
//			if (ans < mid) ans = mid;
//			start = mid + 1;
//		}
//		else {
//			end = mid - 1;
//		}
//		
//	}
//	printf("%d", ans);
//	return 0;
//}