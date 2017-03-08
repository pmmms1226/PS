///*
//�ϳ��� ���ø��� ���.
//string �� ���������� �����ϸ鼭
//1. ������ ��� �ְų� (�� ������ ���� ������ push
//2. ���� +,- ���� �켱������ ���� ��ȣ�� ������ ���ÿ� �ڽź��� �켱������ ���ų� ����(*,/) �ֵ��� pop�� ���ÿ� ���.( '('�� ������ ����),��� �� ���� ���� ��ȣ ���ÿ� push
//3. ���� *,/ ���� ��ȣ�� ������ �̵� ���� �켱������ ���� ��ȣ�� �����Ƿ� ���� �͸� ���. ��� �� ���� ���� ��ȣ ���ÿ� push
//4. ���� ) ��ȣ�� ������ ��ȣ�� ������ �κ����� ������ ��ȣ�� ��µǾ�� �ϴ� ��Ȳ. �׷��Ƿ� ���ÿ�(�� ������ ���� pop�ϸ� ���.
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<stack>
//#include<string>
//#include<queue>
//using namespace std;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	stack <char>  st;
//	string s;
//	cin >> s;
//	int size = s.size();
//	for (int i = 0; i < size; i++) {
//		if (s[i] <= 'Z' && s[i] >= 'A') printf("%c", s[i]);
//		else if (st.empty()) st.push(s[i]);
//		else if (s[i] == '(') st.push(s[i]);
//		else if (s[i] == '+' || s[i] == '-') {
//			while (!st.empty() && st.top() != '(') {
//				printf("%c", st.top());
//				st.pop();
//			}
//			st.push(s[i]);
//		}
//		else if (s[i] == '*' || s[i] == '/') {
//			while (!st.empty() && (st.top() != '(' && st.top() != '+' && st.top() != '-')) {
//				printf("%c", st.top());
//				st.pop();
//			}
//			st.push(s[i]);
//		}
//		else if (s[i] == ')') {
//			while (!st.empty() && st.top() != '(') {
//				printf("%c", st.top());
//				st.pop();
//			}
//			st.pop();
//		}
//	}
//	while (!st.empty()) {
//		printf("%c", st.top());
//		st.pop();
//	}
//	return 0;
//}