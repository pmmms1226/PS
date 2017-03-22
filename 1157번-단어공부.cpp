//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<cstring>
//using namespace std;
//char buf[1000001];
//int arr[30];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%s", &buf);
//	int size = (int)strlen(buf);
//	for (int i = 0; i < size; i++) {
//		if (buf[i] >= 'a' && buf[i] <= 'z') buf[i] -= 32;
//		arr[buf[i] - 'A']++;
//	}
//	int ans = 0 , idx;
//	for (int i = 0; i < 26; i++) {
//		if (ans < arr[i]) {
//			ans = arr[i];
//			idx = i;
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < 26; i++) {
//		if (ans == arr[i]) cnt++;
//	}
//	if (cnt > 1) printf("?");
//	else printf("%c", idx +'A');
//	return 0;
//}