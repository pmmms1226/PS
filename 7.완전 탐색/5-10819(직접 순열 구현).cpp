//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
//int a[10] , ans = 0;
//
//void perm(int *arr , int start , int end) {
//	if (start == end) {
//		int sum = 0;
//		for (int i = 1; i <= end; i++) {
//			sum += abs(arr[i] - arr[i - 1]);
//		}
//		if (ans < sum) ans = sum;
//		/*for (int i = 0; i <= end; i++) {
//			printf("%d ", arr[i]);
//		}
//		printf("\n");*/
//	}
//	else {
//		for (int i = start; i <= end; i++) {
//			swap(arr[i], arr[start]);
//			perm(arr, start + 1, end);
//			swap(arr[i], arr[start]);
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//	perm(a, 0, N - 1);
//	printf("%d", ans);
//	return 0;
//}