#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main() {
	//int a = 5;
	//int b;
	//b = a++ + ++a + a;//先加1变6，再加1变7，最后加7
	//printf("%d", b);// 5 + 7 + 7 = 19



	//int a = 10;
	//int b = 20;
	//a += b;
	//	printf("%d\n", a);//30
	//	printf("%d\n", b);//20
	//	a -= b;
	//	printf("%d\n", a);//10
	//	a *= b;
	//	printf("%d\n", a);//200

	//关系运算符
	/*int a = 10;
	int b = 20;
	printf("%d\n", a == b);
	printf("%d\n", a != b);
	printf("%d\n", a > b);
	printf("%d\n", a >= b);
	printf("%d\n", a < b);
	printf("%d\n", a <= b);*/

	//判断一个数字是否为偶数：
	//int a=10;
	//if (a % 2 == 0) {
	//	printf("是偶数\n");
	//}
	//else {
	//	printf("不是偶数\n");
	//}
	////判断一个数字是否超过100：
	//if (a > 100) {
	//	printf("超过100\n");
	//}
	//else {
	//	printf("没有超过100\n");
	//}


	//&&
	//printf("%d\n", 1 && 1);//两边都为真，结果才为真
	//printf("%d\n", 1 && 0);
	//printf("%d\n", 0 && 1);
	//printf("%d\n", 0 && 0);
	//printf("\n");
	////||
	//printf("%d\n", 1 || 1);//两边有一边为真，结果就为真
	//printf("%d\n", 1 || 0);
	//printf("%d\n", 0 || 1);
	//printf("%d\n", 0 || 0);
	//printf("\n");
	////!
	//printf("%d\n", !1);//取反
	//printf("%d\n", !0);

	//键盘录入一个两位数，判断该整数是否包含7，而且不能时7的倍数
	/*int a;
	printf("请输入一个两位整数：");
	scanf("%d", &a);
	if ((a % 10 == 7 || a / 10 == 7) && (a % 7 != 0)) {
		printf("包含7且不是7的倍数\n");
	}
	else {
		printf("不符合要求\n");
	}*/
	
	//三元运算符
	//关系表达式？表达式1：表达式2
	/*int a = 10;
	int b = 20;

	int c = (a > b) ? a : b;
	printf("%d\n", c);
	printf("%d\n", a > b ? a : b);*/


	//获取三个数中的最大值
	/*int a = 10;
	int b = 30;
	int c = 20;
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("max=%d\n", max); */

	//逗号运算符
	/*int a;
	a = 3, ++a, a++, a + 5;
	printf("%d\n", a);*/

	
	//遍历字符串
	/*char str[100];
	scanf("%s", str);
	printf("接收到的字符串为:%s\n", str);
	char* p = str;
	while (1) {
		char c = *p;
		if (c == '\0') {
			break;
		}
		printf("%c\n", c);
		p++;
	}*/
	


	//定义一个数组存五个名字并遍历：
	//char strArr[5][100] = {
	//	"zhangsan",
	//	"lisi",
	//	"wangwu",
	//	"zhaoliu",
	//	"qianqi",
	//};
	//for (int i = 0; i < 5; i++)
	//{
	//	char* str = strArr[i];
	//	printf("%s\n", str);
	//}

	////字符串指针
	//char* strArr2[5] = {
	//	"zhangsan",
	//	"lisi",
	//	"wangwu",
	//	"zhaoliu",
	//	"qianqi",
	//};

	////遍历指针数组
	//for (int i = 0; i < 5; i++)
	//{
	//	char* str = strArr2[i];
	//	printf("%s\n", str);
	//}
	
	
	
	//字符串常见函数
	//strlen:获取字符串长度
	//char* str1 = "abc";//只能读不能改
	//char str2[100] = "Abc";
	//char str3[5] = {'q','w','e','r','\0'};
	//printf( "---------strlen长度----------\n" );
	////int len1 = strlen(str1);//一个中文两个字节
	////int len2 = strlen(str2);
	////int len3 = strlen(str3);//不计算结束标记‘\0’
	////printf("%d\n", len1);
	////printf("%d\n", len2);
	////printf("%d\n", len3);
	//printf( "---------strcat拼接----------\n" );
	////strcat(str2, str3);//第二个字符串的拷贝到第一个字符串的末尾
	////				   //第一个字符串能被修改
	////				   //第一个字符串剩余的空间可以接纳拼接
	////printf("%s\n", str2);
	////printf("%s\n", str3);

	//printf( "---------strcpy拷贝----------\n" );
	////strcpy(str2, str3);//第一个能修改、空间够
	////printf("%s\n", str2);
	////printf("%s\n", str3);
	//printf( "---------strcmp比较----------\n" );
	////int res = strcmp(str1, str2);
	////printf("%d\n", res);//顺序、内容完全一样：0
	//////有一个不一样：非0
	//printf("---------strlwr变小写----------\n");
	////只能英文，不能中文
	//_strlwr(str2);/*
	//printf("%s\n", str2);*/
	//printf("---------strupr变大写----------\n");
	//_strupr(str2);
	//printf("%s\n", str2);



	//用户登录
	//定义正确的用户名和密码：
	//char* prightUsername = "zhangsan";
	//char* prightPassword = "1234qwer";

	//

	////比较
	//for (int i = 0; i < 3; i++)
	//{
	//	//键盘录入两个字符串，表示用户名和密码：
	//	printf("请输入用户名：\n");
	//	char username[100];
	//	scanf("%s", username);

	//	printf("请输入密码：\n");
	//	char password[100];
	//	scanf("%s", password);
	//	/*printf("%s\n", username);
	//	printf("%s\n", password);*/
	//	if (!strcmp(username, prightUsername) && !strcmp(password, prightPassword)) {
	//		printf("登陆成功\n");
	//		break;
	//	}
	//	else {
	//		if (i == 2) {
	//			printf("用户账号已经被锁定");
	//		}
	//		else {
	//			printf("登陆失败，还剩%d次机会\n",2 - i);
	//		}
	//	}
	//}




	//练习二：统计次数
	//录入
	printf("请输入一个字符串\n");
	char str[100];
	scanf("%s", str);
	//遍历、比较
	int big = 0;
	int small = 0;
	int number = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		char c = str[i];
		if (c >= 'a' && c <= 'z') {
			small++;
		}else if (c >= 'A' && c <= 'Z')
		{
			big++;
		}
		else if (c >= '0' && c <= '9') {
			number++;
		}
		
	}printf("大写字符出现了%d次\n", big);
	printf("小写字符出现了%d次\n", small);
	printf("数字字符出现了%d次\n", number);
	

	
	return 0;
}