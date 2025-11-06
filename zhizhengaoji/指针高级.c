#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int* method();
//void swap(void* p1, void* p2, int len);
//void method1();
//int method2(int num1, int num2);

int add(int num1, int num2);
int subtract(int num1, int num2);
int mutiply(int num1, int num2);
int divide(int num1, int num2);
int main() {
	//指针运算：
	//步长：根据指针所指向的数据类型来决定
	//int类型占4个字节
	//char类型占1个字节
	//float类型占4个字节
	//double类型占8个字节
	//long类型占4个字节
	//long long类型占8个字节
	/*int a = 10;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", p - 1);
	printf("%p\n", p - 2);*/


	//加减法有意义（前提：内存空间连续 加：每次移动步长  减：间隔步长）
	//乘除法没有意义
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr; //int* p = &arr[0];
	//printf("%d\n", *(p + 0)); //1
	//printf("%d\n", *(p + 1)); //2
	//int* p2 = &arr[5];
	//printf("%d\n", p2 - p); //5
	//printf("%p\n", p);
	//printf("%p\n", p2);




	//野指针：指针没有初始化，指向一个未知的地址
	//int a = 10;
	//int* p1 = &a; 
	//printf("%p\n", p1);
	//printf("%d\n", *p1); //10
	//int* p2 = p1 + 10;//野指针
	//printf("%p\n", p2);
	//printf("%d\n", *p2);

	////悬空指针：指针指向的内存空间已经被释放
	//int* p3 = method();
	//printf("拖时间...\n");
	//printf("%p\n", p3);
	//printf("%d\n", *p3);



	//void指针：不进行计算，无法获取数据
	//int a = 10;
	//short b = 20;

	//int* p1 = &a;
	//short* p2 = &b;

	//printf("%d\n", *p1);
	//printf("%d\n", *p2);

	//char* p3 = p1;//(char* 强转)
	//void* p3 = p1;
	//void* p4 = p2;
	//void指针无法获取变量，也不能加减
	//long long c = 100;
	//long long d = 200;

	//swap(&c, &d, 8);
	//printf("c=%lld,d=%lld\n", c, d);



	//二级指针和多级指针
	//int a = 10;
	//int b = 20;
	//int* p = &a;
	//int** pp = &p;

	//*pp = &b;
	//printf("%p\n", &a);
	//printf("%p\n", &b);
	//printf("%p\n", p);
	//printf("%d\n", **pp);



	//数组指针
	//int arr[] = { 10,20,30,40,50 };
	//int len = sizeof(arr) / sizeof(int);

	//int* p1 = arr;
	//int* p2 = &arr[0];

	//printf("%p\n", p1);
	//printf("%p\n", p2);

	//printf("%d\n", *p1);
	//printf("%d\n", *(p1+1));
	//printf("%d\n", *(p1+2));
	//printf("%d\n", *(p1+3));

	////循环指针：
	//for (int i = 0; i < len; i++) {
	//	printf("%d\n", *p1++);
	//	//p1++;
	//}

	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	////sizeof 运算的时候，不会退化，arr还是整体
	//	printf("%zu\n", sizeof(arr));
	////arr参与计算是会退化为第一个指针
	//	printf("%p\n", arr);
	//	printf("%p\n", &arr);
	//	printf("%p\n", arr+1);
	//	printf("%p\n", &arr+1);

	//二维数组定义和遍历
	//int[m][n]
	//m:二位数组长度  n:每一个数组长度

	//int arr[3][5] = {
	//{1,2,3,4,5},
	//{ 11, 22, 33, 44, 55 },
	//{111,222,333,444,555}
	//};
	//索引遍历
	/*for  (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	
	//索引遍历
	//int arr1[3] = { 1,2,3 };
	//int arr2[5] = { 1,2,3,4,5 };
	//int arr3[9] = { 1,2,3,4,5,6,7,8,9 };
	////计算数组长度
	//int len1 = sizeof(arr1) / sizeof(int);
	//int len2 = sizeof(arr2) / sizeof(int);
	//int len3 = sizeof(arr3) / sizeof(int);

	//int lenArr[3] = { len1,len2,len3 };

	//int* arr[3] = { arr1,arr2,arr3 };

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < lenArr[i]; j++) {
	//		printf("%d ", arr[i][j]);
	//	}printf("\n");
	//}



	//二位数组 指针操作
	//int arr[3][5] = {
	//	{1,2,3,4,5},
	//	{ 11, 22, 33, 44, 55 },
	//	{111,222,333,444,555}
	//};
	//int(*p)[5] = arr;
	///*printf("%p\n", arr);
	//printf("%p\n", arr+1);*/
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("%d ",*(*p+j));
	//	}printf("\n");
	//	p++;
	//}

	
	/*int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 11,22,33,44,55 };
	int arr3[5] = { 111,222,333,444,555 };
	int* arr[3] = { arr1,arr2,arr3 };
	int** p = arr;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%d ", *(*p + j));
		}
		printf("\n");
		p++;
	}*/
	//数组指针：指向数组的指针
	//指针数组：存放指针的数组

	/*void(*p1)() = method1;
	int (*p2)(int, int) = method2;

	p1();
	int num=p2(10, 20);
	printf("%d\n", num);*/
	

int(*arr[4])(int, int) = { add,subtract,mutiply,divide };//函数指针数组
//形参和返回值相同的函数
printf("请录入两个数字参与计算\n");
int num1;
int num2;
scanf("%d%d", &num1, &num2);
printf("%d\n", num1);
printf("%d\n", num2);

int choose;
printf("请录入一个数字表示计算方式\n");
scanf("%d", &choose);
int res=(arr[choose - 1])(num1,num2);
printf("%d\n", res);




return 0;


}



//int *method() {
//	int num = 10;
//	int* p = &num;
//	return p; //悬空指针
//}


//void指针，什么类型都可以，使函数更有通用性
//void swap(void* p1, void* p2, int len) {
//	char* pc1 = p1;
//	char* pc2 = p2;
//	char temp = 0;
//
//	for (int i = 0; i <= len; i++) {
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//	}
//}



//函数指针：
//void method1() {
//	printf("method1\n");
//}
//
//int method2(int num1, int num2) {
//	printf("method2\n");
//	return num1 + num2;
//}




int add(int num1, int num2) {
	return num1 + num2;
}
int subtract(int num1, int num2) {
	return num1 - num2;
}
int mutiply(int num1, int num2) {
	return num1 * num2;
}
int divide(int num1, int num2) {
	return num1 / num2;
}