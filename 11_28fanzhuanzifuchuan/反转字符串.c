#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//char str[100];
	//printf("请输入一个字符串: ");
	//scanf("%s", str);
	//printf("你输入的字符串是: %s\n", str);
	//int len = strlen(str);
	//// 修正 for 循环，正确输出字符而不是字符串
	//printf("反转后的字符串是: ");
	//for (int i = len - 1; i >= 0; i--)
	//{
	//	printf("%c", str[i]);
	//}
	//printf("\n");

	// 使用指针实现字符串反转输出
	char str[100];
	printf("请输入一个字符串: ");
	scanf("%s", str);
	printf("你输入的字符串是: %s\n", str);
	int len = strlen(str);

	char* start = str;
	char* end = str + len - 1;
	printf("反转后的字符串是: ");
	while (end > start) {
		printf("%c", *end);
		end--;
	}
	return 0;
}