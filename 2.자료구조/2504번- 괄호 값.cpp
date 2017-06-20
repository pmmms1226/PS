//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<cstdio>
//#include<stack>
//using namespace std;
//
//int arr[31];
//int main() {
//	freopen("input.txt", "r", stdin);
//	string s;
//	cin >> s;
//	int size = s.size();
//	int ans = 0;
//	stack <pair<char, int> > st;
//	int stsize = 1;
//	bool fail = false;
//	for (int i = 0; i < size; i++) {
//		/*if (st.empty()) {
//			fail = true;
//			break;
//		}*/
//		if (s[i] == '(') {
//			if (!st.empty()) {
//				int tmp = st.top().second;
//				st.push(make_pair(s[i], tmp * 2));
//			}
//			else
//				st.push(make_pair(s[i], 2));
//			stsize++;
//		}
//		else if (s[i] == '[') {
//			if (!st.empty()) {
//				int tmp = st.top().second;
//				st.push(make_pair(s[i], tmp * 3));
//			}
//			else
//				st.push(make_pair(s[i], 3));
//			stsize++;
//		}
//		else {
//			if (st.empty()) {
//				fail = true;
//				break;
//			}
//			if (s[i] == ')') {
//				if (st.top().first != '(') {
//					fail = true; break;
//				}
//			}
//			if (s[i] == ']') {
//				if (st.top().first != '[') {
//					fail = true; break;
//				}
//			}
//			if (s[i - 1] == '(' || s[i - 1] == '[') {
//				ans += st.top().second;
//				st.pop();
//				stsize--;
//			}
//			else {
//				st.pop();
//				stsize--;
//			}
//		}
//	}
//	if (!st.empty() || fail) printf("%d", 0);
//	else
//		printf("%d", ans);
//	return 0;
//}
