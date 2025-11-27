#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n=14;
	int a = 0;
	int sum = 0;
	//{ 2,3,5,8,13,21,34,55,89,144,233,377,610,987 };
	for (int i = 2; i < n; i++)
	{
		a = i + i;
		printf("%d ", a);
	}
	return 0;
}