#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int arr[201];
vector <int> v;
int main() {
	freopen("input.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	v.push_back(arr[0]);
	int size = 1;
	for (int i = 1; i < n; i++) {
		if (v[size - 1] < arr[i]) {
			size++;
			v.push_back(arr[i]);
			continue;
		}
		int s = 0, e = size, mid = 0;
		while (s < e) {
			mid = (s + e) / 2;
			if (v[mid] < arr[i]) s = mid + 1;
			else e = mid;
		}
		v[s] = arr[i];
	}
	printf("%d", n - size);
	return 0;
}