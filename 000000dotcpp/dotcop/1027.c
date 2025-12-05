#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//求两个数的最大公约数和最小公倍数
	int a, b, m, n, t1, t2;
	scanf("%d %d", &a, &b);
	m = gys(a, b);
	n = gbs(a, b);
	
	printf("%d ", m);
	printf("%d\n", n);
	
	return 0;
}

int gys(int a, int b) {
	int t1, t2, m;
	t1 = a;
	t2 = b;
	while (t2 != 0) {
		m = t1 % t2;
		t1 = t2;
		t2 = m;
	}
	return t1;
}
int gbs(int a, int b) {
	return a * b / gys(a, b);
}
