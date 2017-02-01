///*
//	순열 조합.
//	시간: O(10P8)
//	공간: O(1)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//int N;
//int al[30], MAX;
//string input[10];
//vector <pair<int, char > > v;
//int perm_arr[10];
//void perm(vector <pair<int,char> > &num, int start, int end) {
//	if (start == end) {
//		int total = 0;
//		for (auto it : num) {
//			total = total+ al[it.second - 'A'] * it.first;
//		}
//
//		if (MAX < total) MAX = total;
//	}
//	else {
//		for (int i = start; i <= end; i++) {
//			swap(num[start].first, num[i].first);
//			perm(num, start + 1, end);
//			swap(num[start].first, num[i].first);
//		}
//	}
//}
//void comb(vector <pair<int, char> > &num, int idx, int n, int r, int target) {
//	if (r == 0) {
//		perm(num, 0, num.size() - 1);
//	}
//	else if (target == -1) {
//		return;
//	}
//	else {
//		num[idx].first = target;
//		comb(num, idx + 1, n, r - 1, target - 1);
//		comb(num, idx, n, r, target - 1);
//	}
//}
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		cin >> input[i];
//	}
//	for (int i = 0; i < N; i++) {
//		int size = input[i].size();
//		int temp = size;
//		for (int j = 0; j < size; j++) {
//			al[input[i][j] - 'A'] += pow(10, temp - 1);
//			temp--;
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		if (al[i] > 0) v.push_back(make_pair(0, i + 'A'));
//	}
//	int num_size = v.size();
//	comb(v, 0, 10, num_size, 9);
//	printf("%d", MAX);
//
//	return 0;
//}