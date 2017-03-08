///*
//���� �̿�
//1. ������ top���� ���� ����� ������ push (ans++�� ����� ��)
//2. ������ top���� ���� ����� ũ�� �� �̻� �ڿ� ����� ������ �ʴ� �ٴ� ��
//   ������ ���Ǹ� ���� ������� ���� ����� ������ �����Ѵٸ� pop�� ���ÿ� ans++
//   �� ������ ������ ������ ���ÿ� ����� ���� �ִٸ� ans++(���� ������� ū ����� ���� ������ ������ �� ����ڿ��� �� �� ����.)
//3. �� ������ Ư���� ��Ȳ�� ���� Ű�� ������ ������ �� ������ ����. �� ��쿡�� stack�� pair�� �����Ͽ�
//   �ش� Ű�� ���� ����� �� ���� ���ش�.
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