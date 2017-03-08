//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//vector <string> ans, rst;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n, m;
//	scanf("%d %d", &n, &m);
//	string s;
//	for (int i = 0; i < n+m; i++) {
//		cin >> s;
//		ans.push_back(s);
//	}
//	sort(ans.begin(), ans.end());
//	for (int i = 1; i < n+m; i++) {
//		if (ans[i] == ans[i - 1]) rst.push_back(ans[i]);
//	}
//	int size = rst.size();
//	printf("%d\n", size);
//	for (auto it : rst) {
//		cout << it << endl;
//	}
//	return 0;
//}