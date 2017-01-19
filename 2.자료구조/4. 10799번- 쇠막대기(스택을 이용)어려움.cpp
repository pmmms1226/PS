#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<deque>
#include<stack>
/*
	������ �̿��Ͽ� ������ �ذ�.
	( �� ������ ���ÿ� ����.
	)�� ������ ������ ���� ���� Ȯ��.
	������ (�� ���Դٸ� �������� �ȴ�.(total�� ������ �����ŭ �����ش�)
	������ )�� ���Դٸ� ����Ⱑ ������ ��.(total�� +1 �� ���ָ� �ȴ�)

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