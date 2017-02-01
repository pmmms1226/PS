#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
string num[4];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	string sum1, sum2;
	long long ans ,ans1 , ans2;
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	sum1 = num[0] + num[1];
	sum2 = num[2] + num[3];
	ans1 = stoll(sum1);
	ans2 = stoll(sum2);
	ans = ans1 + ans2;
	printf("%lld", ans);
	
	return 0;
}