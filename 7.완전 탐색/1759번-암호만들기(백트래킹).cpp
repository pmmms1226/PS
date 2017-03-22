//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int l, c;
//char arr[20];
//int al[30];
//char result[20];
//void comb(int idx , int n , int r, int target) {
//	if (r == 0) {
//		int cnt1 = 0, cnt2 = 0;
//		for (int i = 0; i < l; i++) {
//			if (al[result[i] - 'a'] == 1) cnt1++;
//			else cnt2++;
//		}
//		if (cnt1 >= 1 && cnt2 >= 2) {
//			for (int i = 0; i < l; i++) {
//				printf("%c", result[i]);
//			}
//			printf("\n");
//		}
//	}
//	else if (target == n) return;
//	else {
//		result[idx] = arr[target];
//		comb(idx + 1, n, r - 1, target + 1);
//		comb(idx, n, r, target + 1);
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &l, &c);
//	for (int i = 0; i < c; i++) {
//		char tmp;
//		scanf("%c", &tmp);
//		if (tmp == ' ' || tmp == '\n') i--;
//		else arr[i] = tmp;
//	}
//	al['a' - 'a'] = 1;
//	al['e' - 'a'] = 1;
//	al['i' - 'a'] = 1;
//	al['o' - 'a'] = 1;
//	al['u' - 'a'] = 1;
//	sort(arr, arr + c);
//	comb(0, c, l, 0);
//	return 0;
//}