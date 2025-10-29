#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	// 无限循环:
	/*for(;;){
		printf("Hello, World!\n");
	}*/

	/*while (1)
	{
		printf("Hello, World!\n");
	}*/

	//continue 跳过本次循环
	//for (int i = 0; i < 10; i++) {
	//	if (i % 2 == 0) {
	//		continue; // 跳过本次循环，进入下一次循环
	//	}
	//	printf("%d\n", i);
	//}

	//循环嵌套
	//打印三行五列*
	//for (int i = 0; i < 3; i++) { // 外层循环控制行数
	//	for (int j = 0; j < 5; j++) { // 内层循环控制列数
	//		printf("*");
	//	}
	//	printf("\n"); // 每打印完一行，换行
	//}

	//打印*****
	//    ****
	//	  ***
	//    **
	//    *
	//for (int i = 0; i < 5; i++) { // 外层循环控制行数
	//	for (int j = 0; j < 5 - i; j++) { // 内层循环控制列数
	//		printf("*");
	//	}
	//	printf("\n"); // 每打印完一行，换行
	//}

	//倒过来
	//for (int i = 0; i <= 5; i++) { // 外层循环控制行数
	//	for (int j = 0; j < i; j++) { // 内层循环控制列数
	//		printf("*");
	//	}
	//	printf("\n"); // 每打印完一行，换行
	//}




//打印99乘法表
	//for (int i = 1; i <= 9; i++) { // 外层循环控制行数
	//	for (int j = 1; j <= i; j++) { // 内层循环控制列数
	//		printf("%d*%d=%d\t ", j, i, i * j); // %-2d 左对齐，占2个字符宽度  \t 制表符
	//	}
	//	printf("\n"); // 每打印完一行，换行
	//}


	//\t 制表符的:长度可变的空格
	//根据前面内容的长度，自动调整空格数量，使得内容对齐，最少补一个空格，最多补8个空格
	/*printf("name\t\tage\tgender\thobby\n");
	printf("zhangsan\t23\t男\t篮球\n");*/


	//判断1-100之间的素数

	//int conter = 0; // 计数器，统计素数的个数
	//for (int i = 2; i <= 100; i++) { // 控制判断的数字
	//	int flag = 1; // 假设i是素数
	//	for (int j = 2; j < i; j++) { // 控制除数
	//		if (i % j == 0) { // 能被整除，说明不是素数
	//			flag = 0; // 标记i不是素数
	//			break; // 跳出循环，没必要继续判断
	//		}
	//	}
	//	if (flag == 1) { // 如果flag还是1，说明i是素数
	//		printf("%d ", i);
	//		conter++; // 素数个数加1
	//	}
	//}
	//printf("\n素数的个数是:%d\n", conter);


	//1+的次方+2的次方+...+10的次方
	/*int i = 0;
	int j = 1;
	long long sum = 0;
	long long count = 0;
	for (i; i <= 10; i++) {
		for (j; j <= i; j++) {
			sum = pow(i,j);
			count += sum;
			printf("%lld\n", sum);
		}
	}
	printf("%lld\n", count);*/

	int ge = 0;// 个位数=i% 10
	int shi = 0;// 十位数=i/10%10
	int bai = 0;// 百位数=i/100%10
	int qian = 0;// 千位数=i/1000%10
// 计算1-1000之间所有数位上的数相加等于15的数，并打印这些数

	/*for (int i = 1; i <= 1000; i++) {
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100 % 10;
		qian = i / 1000 % 10;
		if (ge + shi + bai + qian == 15) {
			printf("%d\n", i);
		}*/
		
		
		
	//}


	//break 跳出单层循环
	//goto 跳出多层循环
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			
			printf("内循环执行%d\n",j);

			goto a; // 跳出多层循环
		}
		printf("内循环结束\n",i);
		printf("-------------/n");
	}
	a: printf("外循环结束\n");

	return 0;



}