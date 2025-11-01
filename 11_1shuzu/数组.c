#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//void printArr(int arr[], int len) {
//	int i;
//	for (i = 0; i < len; i++) {
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//}



//int contains(int arr[], int len, int num) {
//	for (int i = 0; i <= len; i++) {
//				if(arr[i]==num){
//			return 1;
//				}
//	}
//	return 0;
//}



//遍历数组
//void printfArr(int arr[], int len);


int main() {
	//数据类型 数组名 [长度];
	//存储年龄
	//int age[5];
	////存储身高
	//int height[5];
	////每件衣服的价格
	//double price[3];

	//如果数组的长度没有写，数据值的个数就是数组的长度
	//如果数组的长度写了，数据值的个数<=长度 未填充的元素默认值为0
	//整数：0 浮点数：0.0 字符：'\0' 字符串：NULL

	//元素访问
	//int age[5] = { 10,20,30,40,50 };
	////获取0、2、4元素并求和
	//int sum = age[0] + age[2] + age[4];
	//printf("sum=%d\n", sum);

	////修改最后一个元素的值为100
	//age[4] = 100;
	//printf("age[4]=%d\n", age[4]);



	//数组的遍历
	/*int age[5] = { 10,20,30,40,50 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("age[%d]=%d\n", i, age[i]);
	}*/

	
	//获取变量的内存地址
	/*int a = 10;
	int  b = 20;
	int  c = 30;
	printf("&a=%p\n", &a);
	printf("&b=%p\n", &b);
	printf("&c=%p\n", &c);
	printf("-----------------\n");
	int arr[3] = { 10,20,30 };
	printf("&arr[0]=%p\n", &arr[0]);
	printf("&arr[1]=%p\n", &arr[1]);
	printf("&arr[2]=%p\n", &arr[2]);*/

	//数组作为函数参数传递 实际上传递的是数组的首地址
	//定义处：arr就是完整的数组
	//函数中的arr是一变量，存储的是数组的首地址
	//如果要在函数中获取数组的长度，必须额外传递一个参数表示数组的长度
	
	/*int arr[5] = { 10,20,30,40,50 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printArr(arr, 5);*/



	//int arr[] = { 33,5,22,44,55 };
	//int max = arr[0];//max一定要是数组中的某个元素，不能是0
	//int i;
	//for (i = 1; i < 5; i++) {
	//	if (arr[i] > max) {
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d\n", max);
	

	//生成10个1-100之间的随机数，要求随机数不能重复
	//srand(time(NULL));
	//int arr[10];
	//int i;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < len; i++) {
	//	arr[i] = rand() % 100 + 1;
	//	int flag = contains(arr, i - 1, arr[i]);
	//	if (flag) {
	//		i--;
	//	}
	//}
	//for (i = 0; i < len; i++) {
	//	printf("arr[%d]=%d\n", i,  arr[i]);
	//}
	//int sum = 0;
	//for (i = 0; i < len; i++) {
	//	sum += arr[i];
	//}
	//printf("sum=%d\n", sum);

	////求平均值
	//printf("avg=%.2f\n", sum / (len * 1.0));
	////求小于平均值的元素个数
	//int count = 0;
	//for (i = 0; i < len; i++) {
	//	if (arr[i] < sum / (len * 1.0)) {
	//		count++;
	//	}
	//}
	//printf("count=%d\n", count);




//int arr1[5];
//int arr2[5];
//int len = sizeof(arr1) / sizeof(arr1[0]);
//for (int i = 0; i < len; i++) {
//	printf("请输入第%d个元素的值：\n", i + 1);
//	scanf("%d", &arr1[i]);
//}
//printfArr(arr1, len);
//int i = 0;
//int j = len - 1;
//while (i < j) {
//	int temp = arr1[i];
//	arr1[i] = arr1[j];
//	arr1[j] = temp;
//	i++;
//	j--;
//}
//printfArr(arr1, len);
	


//打乱数组
	int arr[] = {1,2,3,4,5};
	int len = sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL));
	for ( int i = 0;  i < len;  i++)
	{
		rand();
		int index = rand() % len;
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (int i = 0; i < len; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
	}


return 0;
}










//void printfArr(int arr[], int len) {
//	int i;
//	for (i = 0; i < len; i++) {
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//}