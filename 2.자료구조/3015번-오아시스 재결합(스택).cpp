///*
//스택 이용
//1. 스택의 top보다 현재 사람이 작으면 push (ans++를 해줘야 함)
//2. 스택의 top보다 현재 사람이 크면 더 이상 뒤에 사람이 보이지 않는 다는 뜻
//   스택을 살피며 현재 사람보다 작은 사람이 스택이 존재한다면 pop과 동시에 ans++
//   이 과정이 끝나고 나서도 스택에 사람이 남아 있다면 ans++(현재 사람보다 큰 사람을 만난 것으로 어차피 이 사람뒤에는 볼 수 없다.)
//3. 이 문제의 특별한 상황은 같은 키가 여러번 나왔을 때 문제가 생김. 이 경우에는 stack을 pair로 선언하여
//   해당 키를 갖는 사람의 명 수를 세준다.
//
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<stack>
//using namespace std;
//int arr[500001];
//
//long long ans;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n;
//	scanf("%d", &n);
//	stack <pair<int, int>> st;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		if (st.empty()) st.push(make_pair(i , 1));
//		else {
//			int num = 0;
//			if (arr[st.top().first] > arr[i]) {
//				ans++;
//				st.push(make_pair(i , 1));
//			}
//			else {
//				while (!st.empty() && arr[st.top().first] <= arr[i]) {
//					ans += st.top().second;
//					if (arr[st.top().first] == arr[i]) num = st.top().second;
//					st.pop();
//				}
//				if (!st.empty()) ans++;
//				if (num == 0) st.push(make_pair(i, 1));
//				else st.push(make_pair(i, num + 1));
//			}
//		}
//	}
//	printf("%lld", ans);
//	return 0;
//}