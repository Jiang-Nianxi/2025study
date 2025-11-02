#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int arr[5] = { 11, 22, 55, 77, 44 };
	//int num = 55;
	//for (int i = 0; i < 5; i++) {
	//	if (arr[i] == num) {
	//		printf("Found %d at index %d\n", num, i);
	//		break;
	//	}
	//	else {
	//		printf("Not found at index %d\n", i);
	//	}
	//}


	
	//二分查找法：数据必须是有序的
	//int arr[] = {7,23,79,81,101,127,131,147};
	//int len = sizeof(arr) / sizeof(arr[0]);	
	//printf("Array length: %d\n", len);
	//int num = 5;
	//int left = 0;
	//int right = len - 1;
	//
	//
	//while (left <= right) {
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < num) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > num) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("Found %d at index %d\n", num, mid);
	//		break;
	//	}
	//}
	//while (left > right) {
	//	printf("Not found %d\n", num);
	//	break;
	//}



	//插值排序法
	//int arr[] = { 7,23,79,81,101,127,131,147 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//printf("Array length: %d\n", len);
	//int num = 127;
	//int left = 0;
	//int right = len - 1;
	//while (left <= right) {
	//	int mid = left + ((num - arr[left]) * (right - left)) / (arr[right] - arr[left]);//插值公式
	//	if (arr[mid] < num) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > num) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("Found %d at index %d\n", num, mid);
	//		break;
	//	}
	//}





	//冒泡排序法
	//int arr[] = { 3,5,2,1,4 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < len - 1; i++) {
	//	for (int j = 0; j < len - 1 - i; j++) {
	//		if (arr[j] > arr[j + 1]) {
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//for (int k = 0; k < len; k++) {
	//	printf("%d ", arr[k]);
	//}




	//选择排序法
	int arr[] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = arr[i];
			printf("Swapping %d and %d\n", arr[i], arr[minIndex]);
			arr[i] = arr[minIndex];
			printf("After swap: arr[%d]=%d\n", i, arr[i]);
			arr[minIndex] = temp;
			printf("After swap: arr[%d]=%d\n", minIndex, arr[minIndex]);
		}
	}
	for (int k = 0; k < len; k++) {
		printf("%d ", arr[k]);
	}
	return 0;
}