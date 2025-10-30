#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//math.h
//pow -- 求幂
// ceil -- 向上取整
// floor -- 向下取整
//sqrt -- 求平方根
//abs -- 求绝对值
//rand -- 生成随机数
//srand -- 设置随机数种子
//time.h
//time -- 获取当前时间戳 形参写NULL




//函数不调用就不会执行
//函数名不能重复
//函数与函数之间不能嵌套定义
//自定义函数要在调用函数之前定义，或者先声明再调用
//return后不能写代码
//函数返回值类型为void时，函数体内不能有return表达式，只能写return;或者不写return





//void playGame() {
//	printf("选择角色\n");
//	printf("准备开局\n");
//	printf("开始游戏\n");
//	printf("对线碾压\n");
//	printf("问候队友\n");
//	printf("疯送人头\n");
//	printf("游戏结束\n");
//	printf("下把继续\n");
//
//}
//void lashibi() {
//	printf("拉屎逼函数被调用\n");
//}

//void sum(int a, int b) {
//	int result = a + b;
//	printf("Sum: %d\n", result);
//}


//void a(int x) {
//	for(int i = 0; i < x; i++) {
//		printf("函数a被调用\n");
//	}
//}




//返回值类型（void不需要返回值） 函数名(形参列表) {
//   函数体
//  return 表达式;
// }



//我定义函数，为了干什么事情？  函数体
//我干这件事，需要什么才能完成？ 形参列表
//我干完这件事，调用处是否继续使用？  返回值类型 
//                                     需要返回值，写具体类型
//									 不需要返回值，写void



//给两个长方形，判断谁的面积大
//void calculateArea(int length, int width, int* area) {
//	*area = length * width;
//}


//double yuanArea(double radius) {
//	const double PI = 3.14159;
//	return PI * radius * radius;
//}



//int sum(int a, int b) {
//	int result = a + b;
//	return result;
//}

int main() {
	/*playGame();
	lashibi();
	printf("-----------\n");
	playGame();
	lashibi();*/
	/*sum(10, 20);*/
	//a(5);

	/*int score1 = sum(93,10);
	int score2 = sum(87, 9);
	if(score1 > score2) {
		printf("score1大于score2\n");
	} else if(score1 < score2) {
		printf("score1小于score2\n");
	} else {
		printf("score1等于score2\n");
	}*/

	/*int area1 = 0;
	calculateArea(10, 5, &area1);
	printf("area1 = %d\n", area1);
	int area2 = 0;
	calculateArea(8, 6, &area2);
	printf("area2 = %d\n", area2);*/
	/*double area1 = yuanArea(5.0);
	printf("area1 = %.2f\n", area1);
	double area2 = yuanArea(10.0);
	printf("area2 = %.2f\n", area2);*/

	//for(int i = 0; i < 5; i++) {
	//	int num = rand();
	//	printf("num = %d\n", num);
	//}


	//包头不包尾，包左不包右8-50     12-88   
	// 尾巴-头58-8=42   88-12=76
	//随机数种子
	//srand(time(NULL));
	////获取随机数
	//for (int i=1;i<=10;i++)
	//{
	//	//int num = rand() % 42 + 8;   //8-49
	//	int num = rand() % 76 + 12;    //12-87
	//	printf("num = %d\n", num);
	//}









	srand(time(NULL));
	int shu = 0;
	int suijishu = rand() % 100 + 1; //1-100
	printf("请输入一个数字：");
	scanf("%d", &shu);
	a:while(1) {
		if(shu > suijishu) {
			printf("猜大了，请重新输入一个数字：\n");
			scanf("%d", &shu);
		} else if(shu < suijishu) {
			printf("猜小了，请重新输入一个数字：\n");
			scanf("%d", &shu);
		} else {
			printf("恭喜你，猜对了！\n");
			break;
		}
	  }
	printf("是否继续游戏？确认输入‘Y’\n");
	char xuanze = 0;
	scanf(" %c", &xuanze);
	if(xuanze == 'y' || xuanze == 'Y') {
		printf("请输入一个数字：\n");
		scanf("%d", &shu);
		goto a;
	} else {
		printf("游戏结束，欢迎下次再来！\n");
	}





	return 0;
}