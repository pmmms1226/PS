//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//using namespace std;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	string n;
//	int num[100001], sum = 0;
//	cin >> n;
//	int size = n.size();
//	for (int i = 0; i < size; i++) {
//		num[i] = n[i] - '0';
//		if (num[i] != 0) sum += num[i];
//	}
//	sort(num, num + size);
//	if (sum % 3 == 0 && num[0] == 0) {
//		for (int i = size - 1; i >= 0; i--) {
//			printf("%d", num[i]);
//		}
//	}
//	else {
//		printf("%d", -1);
//	}
//
//	return 0;
//}