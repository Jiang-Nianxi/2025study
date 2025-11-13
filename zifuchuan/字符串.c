#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符串后面都有\0
int main() {
	char str1[4] = "abc";//可读可写
	printf("%s\n", str1);

	str1[0] = 'Q';
	printf("%s\n", str1);

	char* str2 = "abcd";//指针+双引号定义
	//内容只读，不能修改,内容可复用
	//在创建新的abcd时，会读取之前的内容，没有才创建新的abcd
	printf("%s\n", str2);
	char* str3 = "abcd";
	printf("s\n", str2);

	printf("%p\n", str2);
	printf("%p\n\n", str3);



	//遍历字符串
	int str[100];
	printf("请录入一个字符串\n");
	scanf("%s", str);
	printf("接收到的字符串为：%s", str);

}