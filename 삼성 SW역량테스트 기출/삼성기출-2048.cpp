//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int  n, arr[21][21], tmp[21][21], ans , check[21][21];
//void right() {
//	for (int i = 0; i < n; i++) {
//		for (int j = n - 1; j >= 0; j--) {
//			if (tmp[i][j] == 0) continue;
//			if (j + 1 >= n) continue;
//			int x = i, y = j + 1;
//			while (tmp[x][y] == 0) {
//				if (y + 1 >= n) break;
//				y++;
//			}
//			if (tmp[x][y] == 0) {
//				tmp[x][y] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//			else if (tmp[x][y] == tmp[i][j]) {
//				if (check[x][y] == 0) {
//					tmp[x][y] += tmp[x][y];
//					tmp[i][j] = 0;
//					check[x][y] = 1;
//				}
//				else {
//					tmp[x][y - 1] = tmp[i][j];
//					tmp[i][j]=0;
//				}
//			}
//			else {
//				if (y - 1 == j) continue;
//				tmp[x][y - 1] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//		}
//	}
//}
//void left() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (tmp[i][j] == 0) continue;
//			if (j - 1 < 0) continue;
//			int x = i, y = j - 1;
//			while (tmp[x][y] == 0) {
//				if (y - 1 < 0) break;
//				y--;
//			}
//			if (tmp[x][y] == 0) {
//				tmp[x][y] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//			else if (tmp[x][y] == tmp[i][j]) {
//				if (check[x][y] == 0) {
//					tmp[x][y] += tmp[x][y];
//					tmp[i][j] = 0;
//					check[x][y] = 1;
//				}
//				else {
//					tmp[x][y + 1] = tmp[i][j];
//					tmp[i][j] = 0;
//				}
//			}
//			else {
//				if (y + 1 == j) continue;
//				tmp[x][y + 1] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//		}
//	}
//}
//void up() {
//	for (int j = 0; j < n; j++) {
//		for (int i = 0; i < n; i++) {
//			if (tmp[i][j] == 0) continue;
//			if (i - 1 < 0) continue;
//			int x = i-1, y = j;
//			while (tmp[x][y] == 0) {
//				if (x - 1 <0) break;
//				x--;
//			}
//			if (tmp[x][y] == 0) {
//				tmp[x][y] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//			else if (tmp[x][y] == tmp[i][j]) {
//				if (check[x][y] == 0) {
//					tmp[x][y] += tmp[x][y];
//					tmp[i][j] = 0;
//					check[x][y] = 1;
//				}
//				else {
//					tmp[x+1][y] = tmp[i][j];
//					tmp[i][j] = 0;
//				}
//			}
//			else {
//				if (x+1 == i) continue;
//				tmp[x+1][y] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//		}
//	}
//}
//void down() {
//	for (int j = 0; j < n; j++) {
//		for (int i = n - 1; i >= 0; i--) {
//			if (tmp[i][j] == 0) continue;
//			if (i + 1 >= n) continue;
//			int x = i + 1, y = j;
//			while (tmp[x][y] == 0) {
//				if (x + 1 >=n) break;
//				x++;
//			}
//			if (tmp[x][y] == 0) {
//				tmp[x][y] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//			else if (tmp[x][y] == tmp[i][j]) {
//				if (check[x][y] == 0) {
//					tmp[x][y] += tmp[x][y];
//					tmp[i][j] = 0;
//					check[x][y] = 1;
//				}
//				else {
//					tmp[x - 1][y] = tmp[i][j];
//					tmp[i][j] = 0;
//				}
//			}
//			else {
//				if (x - 1 == i) continue;
//				tmp[x - 1][y] = tmp[i][j];
//				tmp[i][j] = 0;
//			}
//		}
//	}
//}
//void reset() {
//	for(int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			check[i][j] = 0;
//		}
//	}
//}
//void func(int ttmp[][21],int cnt) {
//	int tttmp[21][21];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			tttmp[i][j] = ttmp[i][j];
//		}
//	}
//	if (cnt == 5) {
//		int max = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (tttmp[i][j] > max) max = tttmp[i][j];
//			}
//		}
//		if (ans < max) {
//			ans = max;
//		}
//		//for (int i = 0; i < n; i++) {
//		//	for (int j = 0; j < n; j++) {
//		//		cout << ttmp[i][j] << ' ';
//		//	}
//		//	cout << endl;
//		//}
//		//cout << endl;
//	
//		return;
//	}
//
//	//right
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			tmp[i][j] = tttmp[i][j];
//		}
//	}
//	reset();
//	right();
//	func(tmp, cnt + 1);
//
//	//left
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			tmp[i][j] = tttmp[i][j];
//		}
//	}
//	reset();
//	left();
//	func(tmp, cnt + 1);
//	//up
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			tmp[i][j] = tttmp[i][j];
//		}
//	}
//	reset();
//	up();
//	func(tmp, cnt + 1);
//
//	//down
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			tmp[i][j] = tttmp[i][j];
//		}
//	}
//	reset();
//	down();
//	func(tmp, cnt + 1);
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	func(arr, 0);
//	printf("%d", ans);
//	return 0;
//}