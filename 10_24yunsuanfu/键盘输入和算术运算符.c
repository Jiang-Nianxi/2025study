#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	////int num1, num2;
	////printf("请输入两个整数，以空格分隔：");
	////scanf("%d %d", &num1, &num2);//可以给多个变量赋值，中间建议用空格表示
	//////求和
	////printf("两个整数的和为：%d\n", num1 + num2);
	//
	////求一个立方体的长宽高
	//double length, width, height;
	//printf("请输入立方体的长宽高，以空格分隔：");
	//scanf("%lf %lf %lf", &length, &width, &height);
	////计算A,B,C的面积
	//double areaA = length * width;
	//double areaB = length * height;
	//double areaC = width * height;

	//printf("立方体的A面面积为：%.2lf\n",areaA);
	//printf("立方体的B面面积为：%.2lf\n", areaB);
	//printf("立方体的C面面积为：%.2lf\n", areaC);

	////立方体的体积
	//printf("立方体的体积时：%.2lf", length * width * height);


	////运算符+ - *
	//printf("%d\n", 3 + 2);
	//printf("%d\n", 3 - 2);
	//printf("%d\n", 3 * 2);
	//printf("%.2f\n", 1 + 1.01);
	//printf("%.2f\n", 1 - 1.01);
	//printf("%.2f\n", 1 * 1.01);
	//int a = 3;
	//int b = 4;
	//printf("%d\n", a + b);
	////除法、取余
	//printf("%d\n", 10 / 2);
	//printf("%d\n", 10 % 2);
	//printf("%d\n", 10 % 3);

	//输入一个三位数，将其拆分为个位、十位、百位后打印
	/*int num;
	printf("请输入一个三位数:");
	scanf("%d", &num);
	int bai = num / 100;
	int shi = (num / 10) % 10;
	int ge = num % 10;
	printf("百位是:%d\n", bai);
	printf("十位是:%d\n", shi);
	printf("个位是:%d\n", ge);*/

	//强制转换
	int n1 = 10;
	double d1 = 3.0;
	double result = n1 / d1; //隐式转换
	printf("result = %.2f\n", result);
	int n2 = 10;
	double d2 = 3.0;
	double result2 = (double)n2 / d2; //显式转换
	printf("result2 = %.2f\n", result2);
	//字符相加
	char ch1 = 'A'; //65
	char ch2 = 2;
	printf("%c\n", ch1 + ch2); //67 'C'
	printf("%d\n", ch1 + ch2); //67

	
	return 0;
}