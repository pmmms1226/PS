//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char** argv) {
//	freopen("input.txt", "r", stdin);
//	setbuf(stdout, NULL);
//	int arr[101][101];
//	int T;
//	int test_case;
//	int max = 987654321;
//	scanf("%d", &T);	// Codeground �ý��ۿ����� C++������ scanf �Լ� ����� �����ϸ�, cin�� ����ϼŵ� �˴ϴ�.
//	for (test_case = 1; test_case <= T; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//		int n, m, k;
//		scanf("%d %d %d", &n, &m, &k);
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (i == j) arr[i][i] = 1;
//				else arr[i][j] = max;
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			arr[a][b] = c;
//			arr[b][a] = c;
//		}
//		for (int k = 1; k <= n; k++) {
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= n; j++) {
//					if (arr[i][j] > arr[i][k] + arr[k][j])
//						arr[i][j] = arr[i][k] + arr[k][j];
//				}
//			}
//		}
//	
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		int p;
//		scanf("%d", &p);
//		int ans = 0;
//		for (int i = 0; i < p; i++) {
//			int a, b;
//			scanf("%d %d", &a, &b);
//			if (k < arr[a][b]) ans++;
//		}
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}