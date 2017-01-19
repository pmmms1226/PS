/*
	세그먼트 트리
	시간 : init = O(N) , sum = O(logN) , update = O(logN)
	공간 : O(N)
*/

#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>

using namespace std;
int N, M, K;
long long init(vector <long long> &a, vector <long long> &tree, int node, int start, int end) {
	if (start == end) {
		return tree[node] = a[start];
	}
	else {
		return tree[node] = init(a, tree, node * 2, start, (start + end) / 2) + init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);
	}
}
long long sum(vector <long long> &tree, int node, int start, int end, int left, int right) {
	if (start > right || end < left) { // 범위가 벗어 날 때
		return 0;
	}
	if (left <= start && end <= right) {// 범위를 포함할 때
		return tree[node];
	}
	return  sum(tree, node * 2, start, (start + end) / 2, left, right) + sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
		
}
void update(vector <long long> &tree, int node, int start, int end, int index, long long diff) {
	if (start > index || end < index) return;
	tree[node] += diff;
	if (start != end) {
		update(tree, node * 2, start, (start + end) / 2, index, diff);
		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, diff);
	}
}
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d %d %d", &N, &M, &K);
	vector <long long> arr(N);
	int H = ceil(log2(N));
	int tree_size = 1 << (H + 1);
	vector <long long> Tree(tree_size);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &arr[i]);
	}

	init(arr, Tree, 1, 0, N - 1);
	int t = M + K;
	while (t--) {
		int a, b;
		scanf("%d" , &a);
		if (a == 1) {
			long long c;
			scanf("%d %lld", &b, &c);
			long long diff = c - arr[b-1];
			arr[b - 1] = c;
			update(Tree, 1, 0, N - 1, b-1, diff);
		}
		else if(a==2){
			int c;
			scanf("%d %d", &b, &c);
			printf("%lld\n", sum(Tree, 1, 0, N - 1, b-1, c-1));
		}
	}

	return 0;
}