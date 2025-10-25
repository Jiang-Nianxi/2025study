#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int a = 5;
	//int b;
	//b = a++ + ++a + a;//先加1变6，再加1变7，最后加7
	//printf("%d", b);// 5 + 7 + 7 = 19



	//int a = 10;
	//int b = 20;
	//a += b;
	//	printf("%d\n", a);//30
	//	printf("%d\n", b);//20
	//	a -= b;
	//	printf("%d\n", a);//10
	//	a *= b;
	//	printf("%d\n", a);//200

	//关系运算符
	/*int a = 10;
	int b = 20;
	printf("%d\n", a == b);
	printf("%d\n", a != b);
	printf("%d\n", a > b);
	printf("%d\n", a >= b);
	printf("%d\n", a < b);
	printf("%d\n", a <= b);*/

	//判断一个数字是否为偶数：
	//int a=10;
	//if (a % 2 == 0) {
	//	printf("是偶数\n");
	//}
	//else {
	//	printf("不是偶数\n");
	//}
	////判断一个数字是否超过100：
	//if (a > 100) {
	//	printf("超过100\n");
	//}
	//else {
	//	printf("没有超过100\n");
	//}


	//&&
	//printf("%d\n", 1 && 1);//两边都为真，结果才为真
	//printf("%d\n", 1 && 0);
	//printf("%d\n", 0 && 1);
	//printf("%d\n", 0 && 0);
	//printf("\n");
	////||
	//printf("%d\n", 1 || 1);//两边有一边为真，结果就为真
	//printf("%d\n", 1 || 0);
	//printf("%d\n", 0 || 1);
	//printf("%d\n", 0 || 0);
	//printf("\n");
	////!
	//printf("%d\n", !1);//取反
	//printf("%d\n", !0);

	//键盘录入一个两位数，判断该整数是否包含7，而且不能时7的倍数
	/*int a;
	printf("请输入一个两位整数：");
	scanf("%d", &a);
	if ((a % 10 == 7 || a / 10 == 7) && (a % 7 != 0)) {
		printf("包含7且不是7的倍数\n");
	}
	else {
		printf("不符合要求\n");
	}*/
	
	//三元运算符
	//关系表达式？表达式1：表达式2
	/*int a = 10;
	int b = 20;

	int c = (a > b) ? a : b;
	printf("%d\n", c);
	printf("%d\n", a > b ? a : b);*/


	//获取三个数中的最大值
	/*int a = 10;
	int b = 30;
	int c = 20;
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("max=%d\n", max); */

	//逗号运算符
	/*int a;
	a = 3, ++a, a++, a + 5;
	printf("%d\n", a);*/


	//定义一个数字.1，变成绝对值。2，除以3取余数。3，乘以10
	int a=17;
	a = (a < 0) ? -a : a;
	a = a % 3;
	a = a * 10;
	printf("%d\n", a);


	return 0;
}