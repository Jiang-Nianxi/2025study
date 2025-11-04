#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int* method();
//void getMaxAndMin(int arr[], int len, int* max, int* min);

int getRemainder(int a, int b, int* remainder);

int main() {
	//int a = 10;
	//int b = 20;
	//int* p1 = &a;//给指针赋值的时候，要用取地址符&
	//int *p2 = &b;
	//printf("Before swapping: a = %d, b = %d\n", a, b);
	//// Swapping values using pointers
	//int temp = *p1;
	//*p1 = *p2;
	//*p2 = temp;
	//printf("After swapping: a = %d, b = %d\n", a, b);




	//static不会被销毁
	//int* p = method();
	//printf("拖时间...\n");
	//printf("拖时间...\n");
	//printf("拖时间...\n");
	//printf("拖时间...\n");
	//printf("拖时间...\n");
	//printf("拖时间...\n");

	//printf("%d\n", *p);



	//int arr[] = { 3, 5, 1, 8, 2 };
	//int max = arr[0];
	//int min = arr[0];
	//int len = sizeof(arr) / sizeof(arr[0]);
	//getMaxAndMin(arr, len, &max, &min);
	//printf("Max: %d, Min: %d\n", max, min);



	int a = 10;
	int b = 3;
	int remainder;
	if (getRemainder(a, b, &remainder) == 0) {
		printf("Remainder of %d divided by %d is: %d\n", a, b, remainder);
	} else {
		printf("Error: Division by zero\n");
	}

	return 0;
}
//int *method() {
//	static int a = 10;//这个变量会一直保存到程序结束
//	return &a;
//}


//void getMaxAndMin(int arr[], int len, int* max, int* min) {
//	*max = arr[0];
//	*min = arr[0];
//	for (int i = 1; i < len; i++) {
//		if (arr[i] > *max) {
//			*max = arr[i];
//		}
//		if (arr[i] < *min) {
//			*min = arr[i];
//		}
//	}
//}


//将函数的结果和计算结果通过指针参数返回
int getRemainder(int a, int b, int* remainder) {
	if (b == 0) {
		return -1; // Error: Division by zero
	}
	*remainder = a % b;
	return 0; // Success
}