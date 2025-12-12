#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int str1[100];
	int str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	strcat(str1, str2);
	printf("%s\n", str1);
}
