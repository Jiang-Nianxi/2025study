#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10] = { 0 };
	int i;
	int a = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);//输入1 7 8 17 23 24 59 62 101
	}


	//将一个数插入到有序数组中，并保持数组有序
	int insert = arr[10];//要插入的数
	scanf("%d", &insert);//输入50
	for (i = 8; i >= 1; i--) {
		if (insert < arr[i]) {
			arr[i + 1] = arr[i];//后移
		}
		else {
			break;
		}
	}
	arr[i + 1] = insert;//插入
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}