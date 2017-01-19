///*
//순열
//시간 : O(N!)
//공간 : O(N)
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdio>
//#include<queue>
//#include<stack>
//#include<cmath>
//#include<algorithm>
//
//using namespace std;
//int N;
//int arr[30];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	int total = 0, max = 0;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, arr + N);
//	do {
//		total = 0;
//		for (int i = 1; i < N; i++) {
//			total += abs(arr[i] - arr[i - 1]);
//		}
//		if (max < total) max = total;
//	} while (next_permutation(arr, arr + N));
//	printf("%d", max);
//	return 0;
//}