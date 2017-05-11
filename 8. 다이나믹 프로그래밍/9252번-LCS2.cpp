/*
�� ������ �Ǵ� string s��
�񱳸� �ϴ� string e��
������ dp�� ����Ͽ�
�ۼ��Ѵ�.
<<���⼭�� ���缺 �м� �� �ܾ� �˻� �� ������ ����Ѵٰ� ��.>>
A C A Y K P
C 0 1 1 1 1 1
A 1 1 2 2 2 2
P 1 1 2 2 2 3
C 1 2 2 2 2 2
A 2 2 3 3 3 3
K 2 2 3 3 4 4

���ڰ� ��ġ���� �� : �ٷ� ��ĭ�� ����(���ʴ밢)ĭ�� �ǹ��ϴ� ��: �ٷ� �������� LCS + 1;
���ڰ� ��ġ���� �ʾ��� �� : �ٷ� ��ĭ�� �ٷ� ����ĭ�� ���Ͽ� ū ���� ����.
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int arr[30];
int dp[1001][1001];
int main() {
	freopen("input.txt", "r", stdin);
	string s, e;
	cin >> s >> e;
	int s_size = s.size();
	int e_size = e.size();
	int ans = 0 , x, y;
	for (int i = 0; i <= e_size; i++) {
		for (int j = 0; j <= s_size; j++) {
			if (i == 0 || j == 0) continue;
			if (s[j - 1] == e[i - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			if (dp[i][j] > ans) {
				ans = dp[i][j];
				x = i, y = j;
			}
		}
	}
	stack <char> st;
	printf("%d\n", ans);
	while (ans >= 1) {
		if (dp[x][y] == dp[x - 1][y]) {
			x--; continue;
		}
		if (dp[x][y-1] != ans) {
			st.push(s[y-1]);
			x--, y--, ans--;
		}
		else {
			y--;
		}
	}
	while (!st.empty()) {
		printf("%c", st.top());
		st.pop();
	}
	//for (int i = 1; i <= e_size; i++) {
	//	for (int j = 1; j <= s_size; j++) {
	//		cout << dp[i][j] << ' ';
	//	}
	//	cout << endl;
	//}

	return 0;
}