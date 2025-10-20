#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // 定义四种数据类型
    // 短整型
    short a = 10;
    printf("%d\n", a);

    // 整型
    int b = 20;
    printf("%d\n", b);

    // 长整型
    long c = 30L;
    printf("%ld\n", c);

    // 超长整形
	long long d = 40LL;
	printf("%lld\n", d);


    //sizeof测量
	printf("short类型占用字节数: %zu\n", sizeof(short));
	printf("%zu\n", sizeof(a));
	printf("int类型占用字节数: %zu\n", sizeof(int));
	printf("%zu\n", sizeof(b));
	printf("long类型占用字节数: %zu\n", sizeof(long));
	printf("%zu\n", sizeof(c));
	printf("long long类型占用字节数: %zu\n", sizeof(long long));
	printf("%zu\n", sizeof(d));

    //符号
	//有符号类型
	signed int e = -100;
	printf("%d\n", e);
	//无符号类型->表示序号时
	unsigned int f = 100;
	printf("%u\n", f);
    return 0;
}