///*
//	а╤гу
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdio>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//int N, arr[50] , result[6];
//void comb(int a[],int idx,int n , int r , int target ) {
//	if (r == 0) {
//		for (int i = 0; i < 6; i++) {
//			printf("%d ", result[i]);
//		}
//		printf("\n");
//	}
//	else if (target == n) return;
//	else {
//		result[idx] = a[target];
//		comb(a,idx+1 ,n, r - 1, target + 1);
//		comb(a,idx ,n, r, target + 1);
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//
//	while (1) {
//		scanf("%d", &N);
//		if (N == 0) break;
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &arr[i]);
//		}
//		comb(arr,0 ,N, 6, 0);
//		printf("\n");
//	}
//	return 0;
//}