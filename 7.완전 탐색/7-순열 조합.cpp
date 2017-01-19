//#include<iostream>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int N;
//int a[101];
//void perm(int *arr, int start, int end) {
//	if (start == end) {
//		for (int i = 0; i <= end; i++) {
//		printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	else {
//		for (int i = start; i <= end; i++) {
//			swap(arr[i], arr[start]);
//			perm(arr, start + 1, end);
//			swap(arr[i], arr[start]);
//		}
//	}
//}
//void comb(int *arr , int start , int end , int K) {
//	if (start == end) {
//		for (int i = 0; i <= K; i++) {
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	else {
//		for (int i = start; i <= end; i++) {
//			swap(arr[start], arr[i]);
//			comb(arr, start + 1, end , K);
//			swap(arr[start], arr[i]);
//		}
//	}
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		a[i] = i+1;
//	}
//	comb(a, 0, N-1 , 2);
//	return 0;
//}