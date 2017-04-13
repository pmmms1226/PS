//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<cstdio>
//#include<vector>
//using namespace std;
//#define MAX 100000
//#define INF 1000000001
//long long arr[MAX+1];
//long long init(vector <long long> &a, int node, int start, int end) {
//	if (start == end) {
//		return a[node] = arr[start];
//	}
//	return a[node] = min(init(a, node * 2, start, (start + end) / 2), init(a, node * 2 + 1, (start + end) / 2 + 1, end));
//}
//long long mini(vector <long long> &a, int node, int start, int end, int left, int right) {
//	if (right < start || end < left) return INF;
//	if (left <= start && right >= end) return a[node];
//	return min(mini(a, node * 2, start, (start + end) / 2, left, right), mini(a, node * 2 + 1, (start + end) / 2 + 1, end, left, right));
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int h = (int)ceil(log2(n));
//	int tree_size = 1 << (h + 1);
//	vector <long long> v(tree_size);
//	for (int i = 0; i < tree_size; i++) {
//		v[i] = INF;
//	}
//	for (int i = 1; i <= n; i++) {
//		scanf("%lld", &arr[i]);
//	}
//	init(v, 1, 1, n);
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%lld\n",mini(v, 1, 1, n, a, b));
//	}
//	/*for (int i = 1; i <= 30; i++) {
//		cout << v[i] << ' ';
//	}*/
//	return 0;
//}