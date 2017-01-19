#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<deque>
#include<stack>
/*
	스택을 이용하여 문제를 해결.
	( 이 들어오면 스택에 삽입.
	)이 들어오면 이전에 들어온 것을 확인.
	이전에 (이 들어왔다면 레이저가 된다.(total에 스택의 사이즈만큼 더해준다)
	이전에 )이 들어왔다면 막대기가 끝나는 곳.(total에 +1 만 해주면 된다)

*/

using namespace std;
stack <char> st;
int R, S;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	std::ios::sync_with_stdio(false);
	int total = 0;
	string s;
	cin >> s;
	int size = s.size();
	int flag = 0;
	for (int i = 0; i < size; i++) {
		if (s[i] == '(') {
			st.push(s[i]);
			flag = 1;
		}
		else {
			if (flag == 1) {
				R++;
				st.pop();
				flag = 0;
				if (!st.empty()) total += st.size();
			}
			else {
				st.pop();
				total += 1;
			}
		}
	}
	cout << total << "\n";
	return 0;
}