///*
//������ �̿�.
//[���ÿ��� �迭�� �ε����� ����]
//1.���� ��ġ������ ���̰� ������ top���� ������ �� �̻� ������ �� ���ٴ� ������ ���ÿ��� ���� ��ġ�� ���̺���
//  ū ���븦 ������ ���.(����� pop�� �ϰ�,���� ���븦 ���� �� ���� ��� ���)
//2. ���: left���� right��. left�� ������ top���� �������� ù ��°�� ���� ������ �ε���, right�� ������ top���� ���������� ù ��°�� ū ������ �ε���
//   left�� top������ �ε���+1�� ���ϰ�(������ ��� �Ǹ� 0), right�� ���� �ε��� ��ġ-1 �� ����.
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