#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector <long long> v;
int cnt=1;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	int N ;
	long long a;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a);
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	//사이즈가 1이면 바로 출력해주고 끝냄.
	if (v.size() == 1) {
		printf("%d\n", v[0]);
		return 0;
	}
	int max = 0, index;
	for (int i = 0; i < v.size()-1; i++) {
		//앞, 뒤가 같으면 cnt를 증가 시켜주고 max값과 비교.
		if (v[i] == v[i + 1]) {
			cnt++;
			if (max < cnt) {
				max = cnt;
				index = i;
			}
		}
		else {
			//앞, 뒤가 다를 때도 max값과 비교.
			if (max < cnt) max = cnt , index = i;
			cnt = 1;
		}
	}
	printf("%lld\n", v[index]);
	return 0;
}