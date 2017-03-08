///*
//하나의 스택만을 사용.
//string 을 순차적으로 진행하면서
//1. 스택이 비어 있거나 (를 만나는 경우는 무조건 push
//2. 만약 +,- 같이 우선순위가 낮은 기호를 만나면 스택에 자신보다 우선순위가 같거나 높은(*,/) 애들을 pop과 동시에 출력.( '('를 만날때 까지),출력 후 현재 만난 기호 스택에 push
//3. 만약 *,/ 같은 기호를 만나면 이들 보다 우선순위가 높은 기호는 없으므로 같은 것만 출력. 출력 후 현재 만난 기호 스택에 push
//4. 만약 ) 기호를 만나면 괄호가 끝나는 부분으로 무조건 기호가 출력되어야 하는 상황. 그러므로 스택에(를 만날때 까지 pop하며 출력.
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