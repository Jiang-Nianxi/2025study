#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	////打印1-5：
	//int i;
	//for (i = 1; i <= 5; i++) {
	//	printf("%d\n", i);
	//}
	////打印5-1：
	//for (i = 5; i >= 1; i--) {
	//	printf("%d\n", i);
	//}
	////求1-5之间的和：
	//int sum = 0;
	//for (i = 1; i <= 5; i++) {
	//	sum += i;
	//}
	//printf("sum=%d\n", sum);
	////求1-100之间的偶数和：
	//sum = 0;
	//for (i = 1; i <= 100; i++) {
	//	if (i % 2 == 0) {
	//		sum += i;
	//	}
	//}
	//printf("sum=%d\n", sum);


	////在1-100中录入两个数字，求这个两个数字之间既能被6整除又能被8整除的个数：
	//int num1, num2;
	//printf("请输入两个数字：");
	//scanf("%d%d", &num1, &num2);
	////确保num1小于num2
	//int min = (num1 < num2) ? num1 : num2;
	//int max = (num1 > num2) ? num1 : num2;
	//int count = 0;
	//for (int i = min; i <= max; i++) {
	//	if (i % 6 == 0 && i % 8 == 0) {
	//		count++;
	//	}
	//}
	//printf("在%d和%d之间，既能被6整除又能被8整除的数字有%d个。\n", min, max, count);


	//输入一个数n，判断该整数是否是2的幂次方：
	//n=1 输出yes，2的0次方
	//n=2 输出yes，2的1次方
	//n=3 输出no
	//n=4 输出yes，2的2次方
	//n=5 输出no
	//int n=128;

	////利用while循环，不断的除以2
	//while (n > 1 && n % 2 == 0) {
	//	n = n / 2;
	//}
	////判断n是否等于1
	//if (n == 1) {
	//	printf("yes\n");
	//}
	//else {
	//	printf("no\n");
	//}



	//珠穆朗玛峰是8844.43米，假如我有一张0.1厚度的纸，折多少次能达到珠穆朗玛峰的高度？
	//double height = 0.1; //纸张厚度，单位：毫米
	//int count = 0; //折叠次数
	//while (height < 8844430) { //8844.43米转换为毫米
	//	height *= 2; //每次折叠厚度翻倍
	//	count++; //折叠次数加1
	//}
	//printf("折叠%d次能达到珠穆朗玛峰的高度。\n", count);
	
	//将数字进行反转，例如：12345反转为54321
	//int n = 12345;
	//int reversed = 0; //存储反转后的数字
	//while (n != 0) {
	//	int digit = n % 10; //取出最后一位数字
	//	reversed = reversed * 10 + digit; //将该数字添加到反转后的数字末尾
	//	n = n / 10; //去掉最后一位数字 
	//}
	//printf("反转后的数字是：%d\n", reversed);	

	//给定一个非负整数，计算并返回x的算数平方根，只保留整数部分。
	//x = 4 输出 2
	//x = 8 输出 2
	/*int x = 8;
	int i = 1;
	while (i * i <= x) {
		i++;
	}
	printf("平方根的整数部分是：%d\n", i - 1);*/



	//判断一个数是否为回文数，例如121是回文数，123不是回文数
	//int n = 121;
	//int original = n; //保存原始数字
	//int reversed = 0; //存储反转后的数字
	//while (n != 0) {
	//	int digit = n % 10; //取出最后一位数字
	//	reversed = reversed * 10 + digit; //将该数字添加到反转后的数字末尾
	//	n = n / 10; //去掉最后一位数字 
	//}
	//if (original == reversed) {
	//	printf("%d是回文数。\n", original);
	//}
	//else {
	//	printf("%d不是回文数。\n", original);
	//}

//两个整数，被除数和除数，将两个数相处，要求不能使用乘法、除法和取余运算符
	int dividend = 20; //被除数
	int divisor = 3; //除数
	int quotient = 0; //商
	int sum = divisor; //用来累加除数
	while (sum <= dividend) {
		quotient++;     //1 2 3 4 5 6 
		sum += divisor; //6 9 12 15 18 21
	}
	printf("商是：%d\n", quotient);


	return 0;
}