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
	//����� 1�̸� �ٷ� ������ְ� ����.
	if (v.size() == 1) {
		printf("%d\n", v[0]);
		return 0;
	}
	int max = 0, index;
	for (int i = 0; i < v.size()-1; i++) {
		//��, �ڰ� ������ cnt�� ���� �����ְ� max���� ��.
		if (v[i] == v[i + 1]) {
			cnt++;
			if (max < cnt) {
				max = cnt;
				index = i;
			}
		}
		else {
			//��, �ڰ� �ٸ� ���� max���� ��.
			if (max < cnt) max = cnt , index = i;
			cnt = 1;
		}
	}
	printf("%lld\n", v[index]);
	return 0;
}