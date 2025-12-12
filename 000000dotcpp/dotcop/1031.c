//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void reverse_string(char* str);
//int main() {
//	char str[100];
//	scanf("%s", str);
//	reverse_string(str);
//	printf("%s\n", str);
//}
//
//void reverse_string(char* str) {
//	int len = strlen(str);
//	for (int i = 0; i < len / 2; i++) {
//		char temp = str[i];
//		str[i] = str[len - 1 - i];
//		str[len - 1 - i] = temp;
//	}
//}
//
//
////abcde
////第一次循环：i=0, temp='a', str[0]='e', str[4]='a' -> ebcda
////第二次循环：i=1, temp='b', str[1]='d', str[3]='b' -> edcba
////输出：edcba
