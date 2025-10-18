#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 变量的定义和初始化
int main() {
	int a = 10; // 定义并初始化变量a
	float b = 5.5; // 定义并初始化变量b
	char c = 'A'; // 定义并初始化变量c

	int d = 20, e = 30, f = 40; // 同时定义多个变量并初始化
	// 输出变量的值
	printf("整数变量a的值: %d\n", a);
	printf("浮点变量b的值: %.2f\n", b);
	printf("字符变量c的值: %c\n", c);

	printf("多个整数变量的值: d=%d, e=%d, f=%d\n", d, e, f);
	printf("变量a加上变量d的值: %d\n", a + d);
	
	//红包
	//收到两元红包
	int money = 100;
	money = money + 2;
	printf("收到两元红包后，余额为: %d\n", money);


	//游戏角色血量计算
	int health = 100;
	//受到80点伤害
	health = health - 80;
	//回复60点血量
	health = health + 60;
	printf("角色当前血量为: %d\n", health);

	//变量中只能存储一个值
	int score = 50;
	score = 80; // 原来的值50被覆盖
	printf("当前分数为: %d\n", score);

	
	
	return 0;
}