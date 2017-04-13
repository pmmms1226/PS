//// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
//#include <cstdio>
//#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct A {
//	int x, y;
//};
//A arr[202];
//
//int main(int argc, char** argv) {
//	/* 아래 freopen 함수는 input.txt 를 read only 형식으로 연 후,
//	앞으로 표준 입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
//	만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면,
//	그 아래에서 scanf 함수 또는 cin을 사용하여 표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
//	또한, 본인 PC에서 freopen 함수를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
//	단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석(//) 처리 하셔야 합니다. */
//	freopen("input.txt", "r", stdin);
//
//	setbuf(stdout, NULL);
//
//	int TC;
//	int test_case;
//
//	scanf("%d", &TC);	// cin 사용 가능
//	for (test_case = 1; test_case <= TC; test_case++) {
//		// 이 부분에서 알고리즘 프로그램을 작성하십시오.
//		int n;
//		scanf("%d", &n);
//		int idx = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &arr[idx].x, &arr[idx].y);
//			arr[idx].x *= 2, arr[idx].y *= 2;
//			idx++;
//			scanf("%d %d", &arr[idx].x, &arr[idx].y);
//			arr[idx].x *= 2, arr[idx].y *= 2;
//			idx++;
//		}
//		int min_x = 987654321, min_y = 987654321;
//		for (int i = 0; i < idx; i++) {
//			for (int j = i + 1; j < idx; j++) {
//				int mid = (arr[i].x + arr[j].x) / 2;
//				int max_x = 0 , k = 0;
//				while (k < idx) {
//					int tmp = min(abs(arr[k].x - mid), abs(arr[k+1].x - mid));
//					k++;
//					if (max_x < tmp) max_x = tmp;
//					k++;
//				}
//				if (min_x > max_x) min_x = max_x;
//			}
//		}
//		for (int i = 0; i < idx; i++) {
//			for (int j = i + 1; j < idx; j++) {
//				int mid = (arr[i].y + arr[j].y) / 2;
//				int max_y = 0, k = 0;
//				while (k < idx) {
//					int tmp = min(abs(arr[k].y - mid), abs(arr[k+1].y - mid));
//					k++;
//					if (max_y < tmp) max_y = tmp;
//					k++;
//				}
//				if (min_y > max_y) min_y = max_y;
//			}
//		}
//
//		int ans = max(min_x, min_y);
//		// 이 부분에서 정답을 출력하십시오.
//		printf("Case #%d\n", test_case);	// cout 사용 가능
//		if (ans % 2 == 0) printf("%d\n", ans/2);
//		else printf("%d.5\n", ans/2);
//
//	}
//
//	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
//}