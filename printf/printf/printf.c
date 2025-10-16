#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	////输出整数
	//printf("整数: %d\n",123);
	////输出浮点数
	//printf("浮点数: %f\n", 3.14);
	////输出字符
	//printf("字符: %c\n", 'A');
	////输出字符串
	//printf("字符串: %s\n", "Helloword");
	//printf("我的名字是：%s","姜\n");

	//练习
	printf("我的学校是：%s", "广科大\n");
	printf("我的高考分数是：%d\n", 439);

	// 修复格式化字符串和参数类型问题
	printf("姓名：%s，性别：%s，身高：%.2f，体重：%d斤", "xxx", "女", 1.82, 110);
	//换行	
	printf("姓名：%s\n","xxx");
	printf("性别：%s\n", "女");
	printf("身高：%.2f\n", 1.82);
	printf("体重：%d斤\n", 110);
	return 0;
}