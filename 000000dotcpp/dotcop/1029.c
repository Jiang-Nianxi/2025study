#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int is_prime(int num);
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (is_prime(n)) {
//		printf("prime\n");
//	}
//	else {
//		printf("not prime\n");
//	}
//}
//
//int is_prime(int num) {
//	if (num <= 1) {
//		return 0;
//	}
//	if (num == 2) {          // 2是唯一的偶素数
//		return 1;
//	}
//	if (num % 2 == 0) {
//		return 0;
//	}
//	for (int i = 3; i * i <= num; i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}