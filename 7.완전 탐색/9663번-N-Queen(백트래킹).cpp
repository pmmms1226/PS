//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int n;
//int arr[17][17];
//int func(int x, int y) {
//	if (x == n) return 1;
//	int ret;
//	if (x == n)  ret =0;
//	else  ret = 0;
//	arr[x][y]++;
//	for (int i = 1; i <= n; i++) {
//		if (i != y)arr[x][i]++;
//		if (i != x) arr[i][y]++;
//		if (x - i >= 1 && y - i >= 1) arr[x - i][y - i]++;
//		if (x + i <= n && y + i <= n) arr[x + i][y + i]++;
//		if (x + i <= n && y - i >= 1) arr[x + i][y - i]++;
//		if (x - i >= 1 && y + i <= n) arr[x - i][y + i]++;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (arr[x + 1][i] == 0) {
//			ret += func(x + 1, i);
//		}
//	}
//	arr[x][y]--;
//	for (int i = 1; i <= n; i++) {
//		if (i != y)arr[x][i]--;
//		if (i != x) arr[i][y]--;
//		if (x - i >= 1 && y - i >= 1) arr[x - i][y - i]--;
//		if (x + i <= n && y + i <= n) arr[x + i][y + i]--;
//		if (x + i <= n && y - i >= 1) arr[x + i][y - i]--;
//		if (x - i >= 1 && y + i <= n) arr[x - i][y + i]--;
//	}
//	//if (!end) return 0;
//	//else return ret;
//	return ret;
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &n);
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		ans += func(1, i);
//	}
//	printf("%d", ans);
//	return 0;
//}