//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int arr[10];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	char s[1000001];
//	scanf("%s", s);
//	int size = strlen(s);
//	int ans = 1;
//	for (int i = 0; i < 10; i++) {
//		arr[i]++;
//	}
//	for (int i = 0; i < size; i++) {
//		if (arr[s[i] - '0'] == 0) {
//			if (s[i] - '0' == 6 || s[i] - '0' == 9) {
//				if (arr[6] == 0 && arr[9] == 0) {
//					ans++;
//					for (int j = 0; j < 10; j++) {
//						arr[j]++;
//					}
//					arr[s[i] - '0']--;
//				}
//				else if (arr[6] == 0) arr[9]--;
//				else if (arr[9] == 0) arr[6]--;
//			}
//			else{
//				ans++;
//				for (int j = 0; j < 10; j++) {
//					arr[j]++;
//				}
//				arr[s[i] - '0']--;
//			}
//		}
//		else {
//			arr[s[i] - '0']--;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}