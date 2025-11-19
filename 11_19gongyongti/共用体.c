#include<stdio.h>
#include<string.h>

union MoneyType {
	int moneyi;//4字节
	double menoyd;//8字节
	char monetstr[100];//100 个char
};//104字节
int main() {

	//利用共同体定义钱的变量
	union MoneyType money;
	//
	////money.moneyi = 100;
	////money.menoyf = 99.99;
	//strcpy_s(money.monetstr, 100,"100万");
	////printf("moneyi: %d\n", money.moneyi);
	////printf("moneyf: %.2f\n", money.menoyf);
	//printf("monetstr: %s\n", money.monetstr);



	//获取共同体变量的地址
	printf("moneyi address: %p\n", &money.menoyd);
	printf("menoyd address: %p\n", &money.menoyd);
	printf("monetstr address: %p\n", &money.monetstr);

	printf("size of moneyi: %zu\n", sizeof(money.moneyi));
	printf("size of menoyd: %zu\n", sizeof(money.menoyd));
	printf("size of monetstr: %zu\n", sizeof(money.monetstr));
	printf("size of MoneyType: %zu\n", sizeof(union MoneyType));//总大小是单个成员的整数倍
	
	//每次只能使用一个成员，第二次赋值会覆盖第一次赋值
	money.moneyi = 100;
	money.menoyd = 1.23;
	printf("moneyi: %lf\n", money.menoyd);
	
	
	
	return 0;
}