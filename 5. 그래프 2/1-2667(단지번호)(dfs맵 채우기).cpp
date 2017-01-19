//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
///*
//	인접행렬
//	시간: O(V^2)
//	공간: O(V^2)
//*/
//using namespace std;
//int map[30][30];
//vector <int> result;
//int cnt;
//int N;
//int d[4][2] = { {1,0} , {0,1} , {-1, 0} , {0 , -1} };
//void dfs(int x , int y) {
//	if (x  < 0 || y  < 0 || x >= N || y >= N) return;
//	map[x][y] = -1;
//	cnt++;
//	int tempX, tempY;
//	for (int i = 0; i < 4; i++) {
//		tempX = x + d[i][0];
//		tempY = y + d[i][1];
//		if (tempX < 0 || tempY < 0 || tempX >= N || tempY >= N) continue;
//		if (map[tempX][tempY] == 1) {
//			dfs(tempX, tempY);
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	string a;
//	for (int i = 0; i < N; i++) {
//		cin >> a;
//		for (int j = 0; j < N; j++) {
//			map[i][j] = a[j]-'0';
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == 1) {
//				dfs(i, j);
//				result.push_back(cnt);
//				cnt = 0;
//			}
//		}
//	}
//	printf("%d\n", result.size());
//	sort(result.begin(), result.end());
//	for (auto it : result) {
//		printf("%d\n", it);
//	}
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << map[i][j];
//		}
//		cout << endl;
//	}*/
//	
//	return 0;
//}