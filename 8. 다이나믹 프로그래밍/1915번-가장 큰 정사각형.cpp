#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int n, m;
int arr[1001][1001];
int d[3][2] = { {-1,0} , {0,-1} , {-1,-1} };
int main() {
	freopen("input.txt", "r", stdin);
	string s;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) continue;
			int min = 987654321;
			for (int k = 0; k < 3; k++) {
				int x = i + d[k][0], y = j + d[k][1];
				if (x < 0 || y < 0) {
					min = 0;
					break;
				}
				if (min > arr[x][y]) min = arr[x][y];
			}
			arr[i][j] = min + 1;
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	printf("%d", max*max);
	return 0;
}