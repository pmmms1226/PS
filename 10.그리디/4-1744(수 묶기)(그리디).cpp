#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int arr[10001] ;
vector <int>  m , p;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + N);
	int sum = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] <= 0) m.push_back(arr[i]);
		else p.push_back(arr[i]);
	}
	int msize = m.size();
	int psize = p.size();
	for (int i = 0; i < msize; i++) {
		if (m[i] == 0) continue;
		if (i == msize - 1) {
			sum += m[i];
			break;
		}
		sum += m[i] * m[i + 1];
		i++;
	}
	for (int i = psize - 1; i >= 0; i--) {
		if (i == 0) {
			sum += p[i];
			break;
		}
		if (p[i - 1] == 1) {
			sum += p[i];
			continue;
		}
		sum += p[i] * p[i - 1];
		i--;
		
	}
	printf("%d", sum);
	return 0;

}