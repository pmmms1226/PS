#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector <char> v;
int al_cnt[30] , oddindex=-1;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	/* 먼저 안되는 조건을 카운트(flag>=2 이면 팰린드롬 못만듦)
		stack queue를 이용( 여기서는 사용x) 
		순서대로 출력하고, 역으로 출력
		만약 홀수개인 알파벳이 있다면 잘 처리.
	   
	*/

	string s;
	cin >> s;
	int flag=0 ;
	for (int i = 0; i < s.size(); i++) {
		al_cnt[s[i] - 'A'] ++;
	}
	for (int i = 0; i < 30; i++) {
		if (al_cnt[i] % 2 == 1) {
			flag++;
			oddindex = i;
		}
	}

	if (flag >= 2) {
		printf("I'm Sorry Hansoo \n");
		return 0;
	}
	//벡터에 받는다.
	for (int i = 0; i < 30; i++) {
		while (al_cnt[i] > 0 ) {
			if (al_cnt[i] == 1) break;
			v.push_back(i + 'A');
			al_cnt[i] -= 2;
		}
	}

	// 출력 부분.
	if (oddindex >= 0) {
		v.push_back(oddindex + 'A');
		for (int i = 0; i < v.size(); i++) {
			printf("%c", v[i]);
		}
		for (int i = v.size() - 2; i >= 0; i--) {
			printf("%c", v[i]);
		}
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			printf("%c", v[i]);
		}
		for (int i = v.size() - 1; i >= 0; i--) {
			printf("%c", v[i]);
		}

	}
	return 0;
}