#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<vector>
#include<cmath>
#include<stack>

/*

*/

using namespace std;

int arr1[1001], arr2[1001] , diff[1001] , ans , sum;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr2[i]);
		diff[i] = arr2[i] - arr1[i];
	}
	int idx = 0;
	while (idx < N) {
		bool flag;//양수면 true , 음수면 false
		int start , end = start = idx ;
		if (diff[idx] > 0) flag = true;
		else if (diff[idx] < 0) flag = false;
		else {
			idx++;
			continue;
		}
		if (flag) {
			int min = 987654321;
			while (diff[end] > 0 && end < N) {
				if (diff[end] == 0) break;
				if (diff[end] < min) min = diff[end];
				end++;
			}
			for (int i = start; i < end; i++) {
				diff[i] -= min;
			}
			ans += min;

		}
		else {
			int max = -1000000;
			while (diff[end] < 0 && end < N) {
				if (diff[end] == 0) break;
				if (diff[end] > max) max = diff[end];
				end++;
			}
			for (int i = start; i < end; i++) {
				diff[i] += -max;
			}
			ans += -max;
		}

	}
	printf("%d", ans);
	
	return 0;
}