#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int N, arr[10001];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	bool ans;
	ans = next_permutation(arr, arr + N);
	if (ans == false) printf("-1");
	else {
		for (int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}