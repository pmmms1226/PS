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
//	scanf("%d", &T);	// Codeground 시스템에서는 C++에서도 scanf 함수 사용을 권장하며, cin을 사용하셔도 됩니다.
//	for (test_case = 1; test_case <= T; test_case++) {
//		// 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
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
//		// 이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++에서도 printf 사용을 권장하며, cout을 사용하셔도 됩니다.
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