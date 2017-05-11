///*
//비교 기준이 되는 string s와
//비교를 하는 string e를 
//이차원 dp를 사용하여
//작성한다.
//<<염기서열 유사성 분석 및 단어 검색 및 교정에 사용한다고 함.>>
//  A C A Y K P
//C 0 1 1 1 1 1
//A 1 1 2 2 2 2 
//P 1 1 2 2 2 3
//C 1 2 2 2 2 2 
//A 2 2 3 3 3 3 
//K 2 2 3 3 4 4 
//
//문자가 일치했을 때 : 바로 윗칸의 왼쪽(왼쪽대각)칸이 의미하는 것: 바로 전까지의 LCS + 1;
//문자가 일치하지 않았을 때 : 바로 윗칸과 바로 왼쪽칸을 비교하여 큰 것을 선택.
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//int arr[30];
//int dp[1001][1001];
//int main() {
//	freopen("input.txt", "r", stdin);
//	string s, e;
//	cin >> s >> e;
//	int s_size = s.size();
//	int e_size = e.size();
//	int ans = 0;
//	for (int i = 0; i <= e_size; i++) {
//		for (int j = 0; j <= s_size; j++) {
//			if (i == 0 || j == 0) continue;
//			if (s[j - 1] == e[i - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
//			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			if (dp[i][j] > ans) ans = dp[i][j];
//		}
//	}
//	//for (int i = 1; i <= e_size; i++) {
//	//	for (int j = 1; j <= s_size; j++) {
//	//		cout << dp[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	printf("%d", ans);
//	return 0;
//}