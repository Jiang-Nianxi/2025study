//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//malloc申请的空间过多，会产生虚拟内存
//	//申请空间过多，可能申请失败，返回NULL
//	int number = 1024 * 1024 * 1024;
//	//利用循环不断申请内存，直到申请失败
//	int count = 0;
//	while(1){
//		int* p = malloc(number);
//		count++;
//		if (p == NULL) {
//			printf("malloc failed!\n");
//			break;
//		}
//		else {
//			printf("malloc success: %p\n", p);
//		}
//		printf("count=%d\n", count);
//	}
//	return 0;
//}