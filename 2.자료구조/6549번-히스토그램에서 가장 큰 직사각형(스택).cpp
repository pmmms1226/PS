///*
//스택을 이용.
//[스택에는 배열의 인덱스를 저장]
//1.현재 위치에서의 높이가 스택의 top보다 작으면 더 이상 진행할 수 없다는 뜻으로 스택에서 현재 위치의 높이보다
//  큰 막대를 만나면 계산.(계산후 pop을 하고,작은 막대를 만날 때 까지 계속 계산)
//2. 계산: left값과 right값. left는 스택의 top보다 왼쪽으로 첫 번째로 작은 막대의 인덱스, right는 스택의 top보다 오른쪽으로 첫 번째로 큰 막대의 인덱스
//   left는 top다음의 인덱스+1를 뜻하고(스택이 비게 되면 0), right는 현재 인덱스 위치-1 를 뜻함.
//*/
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<stack>
//using namespace std;
//int arr[100001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	stack <int> st;
//	int n;
//	while (1) {
//		scanf("%d", &n);
//		if (n == 0) break;
//		long long ans = 0 , sum = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0; i <= n; i++) {
//			if (st.empty()) {
//				st.push(i);
//			}
//			else {
//				if (arr[st.top()] <= arr[i]) st.push(i);
//				else {
//					sum = 0;
//					while (!st.empty() && arr[st.top()] > arr[i]) {
//						int left, right = i - 1;
//						sum = arr[st.top()];
//						st.pop();
//						if (st.empty()) left = 0;
//						else left = st.top() + 1;
//						sum = sum*(right - left + 1);
//						if (sum > ans) ans = sum;
//					}
//					st.push(i);
//				}
//			}
//		}
//		printf("%lld\n", ans);
//		while (!st.empty()) {
//			st.pop();
//		}
//		for (int i = 0; i < n; i++) {
//			arr[i] = 0;
//		}
//	}
//	return 0;
//}