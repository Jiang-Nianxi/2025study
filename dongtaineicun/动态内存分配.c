#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	////利用malloc申请连续空间   掌握
	////malloc会返回首地址       了解
	//// realloc会改变空间大小     了解
	//// free释放空间             掌握
	////int *p=malloc(10 * sizeof(int));

	////calloc会返回首地址，并且会将申请的空间初始化为0
	//int* p = malloc(10 * sizeof(int));
	////int *p=calloc(10,sizeof(int));

	////printf("p=%p\n", p);
	//
	////2.赋值
	//for (int i = 0; i < 10; i++)
	//{	//第一种赋值：
	//	//*(p + i) = (i + 1) * 10;
	//	//第二种赋值：
	//	p[i] = (i + 1) * 10;
	//}
	////4.扩容，20个int大小
	//int *pp = realloc(p, 20 * sizeof(int));
	////3.遍历
	//for (int i = 0; i < 20; i++)
	//{
	//	printf("%d ", p[i]);
	//}
	////5.释放空间
	////申请空间不用了，一定要释放
	//free(pp);




	//细节：malloc创建空间的单位是字节
	//malloc(100); //int 25 short 50 char 100
	//malloc返回值是void*，没有步长概念，无法获取空间大小，需要强制类型转换
	//malloc返回的是首地址，没有总大小，定义一个变量记录总大小
	//malloc申请的空间不会自动消失，需要手动释放
	//malloc申请的空间过多，会产生虚拟内存





	 //realloc修改后的空间地址可能会改变
	//int* p1 = malloc(10 * sizeof(int));
	//printf("p1=%p\n", p1);
	//int size = 10;

	//for (int i = 0; i <size; i++)
	//{
	//	*(p1 + i) = (i + 1) * 10;
	//}
	////修改大小
	////realloc修改之后，无需要free原来的空间，realloc会自动释放原来的空间
	////内存地址不变，直接扩展
	////内存地址改变，拷贝原来数据，释放原来空间
	//int* p2 = realloc(p1, 20 * sizeof(int));
	//printf("p2=%p\n", p2);
	//size = 20;

	////遍历
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d ", p2[i]);
	//}
	//printf("\n");
	//free(p2);





	return 0;
}