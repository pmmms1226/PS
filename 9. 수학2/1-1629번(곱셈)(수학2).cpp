//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<stack>
//#include<cmath>
//using namespace std;
//long long a, b, c;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%lld %lld %lld", &a, &b, &c);
//	stack <int> st;
//	long long tmp = b;
//	while (tmp != 0) {
//		st.push(tmp & 1);
//		tmp = tmp >> 1;
//	}
//	long long result=1;
//	while (1) {
//		if (st.top() == 1) {
//			result = (result * a)% c;
//		}
//		st.pop();
//		if (st.empty()) break;
//		result =(result * result) %c;
//	}
//	printf("%lld", result);
//	return 0;
//}