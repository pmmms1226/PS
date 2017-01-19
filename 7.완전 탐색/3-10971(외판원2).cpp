///*
//순열
//시간: O(N!)
//공간: O(N^2)
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdio>
//#include<queue>
//#include<stack>
//#include<algorithm>
//
//using namespace std;
//
//int map[11][11] , N , arr[11];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	int min = 987654321;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		arr[i] = i;
//	}
//	do {
//		int sum = 0;
//		bool flag = false;
//		for (int i = 0; i < N; i++) {
//			if (map[arr[i]][arr[(i+1)% N]] == 0) {
//				flag = true;
//				break;
//			}
//			sum += map[arr[i]][arr[(i+1)%N]];
//		}
//		if (flag) continue;
//		if (sum < min) min = sum;
//	} while (next_permutation(arr, arr + N));
//	printf("%d", min);
//	return 0;
//}