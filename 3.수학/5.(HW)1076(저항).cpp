#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	/*
		N:���� ��
		�ð����⵵ : O(N)
		�������⵵ : O(N)
	*/
	string table[10] = { "black" ,"brown", "red" , "orange" , "yellow" , "green" , "blue" , "violet" ,"grey" , "white" };
	string a, b, c;
	long long total = 0;
	long long total1;
	cin >> a >> b >> c;
	for (int i = 0; i < 10; i++) {
		if (table[i] == a) {
			total += i * 10;
		}
		if (table[i] == b) {
			total += i;
		}
		if (table[i] == c) {
			total1 = pow(10, i);
		}
	}
	printf("%lld\n", total*total1);
	return 0;
}