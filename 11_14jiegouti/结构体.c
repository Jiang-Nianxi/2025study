#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//结构体：函数内：只能在本函数中使用
//函数外：全局位置，所有函数中使用

//struct GirlFriend
//{
//	char name[100];
//	int age;
//	char gender;
//	double height;
//};

//struct Student
//{
//	char name[100];
//	int age;
//};



//typedef struct renwu//可写可省略
//{
//	char name[100];
//	int attack;
//	int defense;
//	int blood;
//}M;




//typedef struct Studtent {
//	char name[100];
//	int age;
//}S;
//用到结构体，函数声明要写在结构体后面，否则代码会报错
//void method(S st);
//void method2(S* p);


//struct Message {
//	char phone[12];
//	char mail[100];
//};
//
//struct Student {
//	char name[100];
//	int age;
//	char gender;
//	double height;
//	struct Message msg;
//};



//struct spot {
//	char name[100];
//	int count;
//};




//内存对其对齐：只能放在自己类型的整数倍上
//内存地址/占用字节=结果额=可以整除
//int能被4整除
//longlong地址能被8整除
//double地址能被8整除




//内存对齐验证
//小的数据类型写在上面，大的写下面，节约空间
struct Num
{
	//double a;
	//char b;
	//int c;
	//char d;
	//推荐：
	char b;
	char d;
	int c;
	double a;
};
int main() {
	
	//struct GirlFriend gf1;
	//strcpy_s(gf1.name, sizeof(gf1.name), "xxx");
	//gf1.age = 23;
	//gf1.gender = 'F';
	//gf1.height = 1.63;

	//printf("名字：%s\n", gf1.name);
	//printf("年龄：%d\n", gf1.age);
	//printf("性别：%c\n", gf1.gender);
	//printf("身高：%lf\n", gf1.height);

	//struct GirlFriend gf2;
	//strcpy_s(gf2.name, sizeof(gf2.name),"yyy");
	//gf2.age = 24;
	//gf2.gender = 'F';
	//gf2.height = 1.62;

	//printf("名字：%s\n", gf2.name);
	//printf("年龄：%d\n", gf2.age);
	//printf("性别：%c\n", gf2.gender);
	//printf("身高：%lf\n", gf2.height);
	



	//struct Student stu1 = {"zhangsan",23};
	//struct Student stu2 = {"lisi",24};
	//struct Student stu3 = {"wangwu",25};

	////放入数组
	//struct Student stuArr[3] = { stu1,stu2,stu3 };
	//for (int i = 0; i < 3; i++)
	//{
	//	struct Student temp = stuArr[i];
	//	printf("学生的信息为：姓名：%s,年龄：%d\n", temp.name, temp.age);
	//}




	/*M q = { "xx",100,90,500 };
	M w = { "yy",90,80,450 };
	M e = { "zz",90,70,600 };

	M arr[3] = { q,w,e };

	for (int i = 0; i < 3; i++)
	{
		M temp = arr[i];
		printf("名字为：%s，攻击力是：%d，防御力是：%d，血量是%d\n", temp.name, temp.attack, temp.defense, temp.blood);
	}*/



	//S stu;
 //   strcpy_s(stu.name, sizeof(stu.name), "aaa");
	//stu.age = 0;

	//printf("学生的初始数据为：%s %d\n", stu.name, stu.age);

	////调用method函数修改学生数据
	//method2(&stu);
	////输出打印
	//printf("学生的初始数据修改为：%s %d\n", stu.name, stu.age);
	
	
	
	
	//定义学生类型变量；
	//struct Student stu;

	//strcpy(stu.name, "zhangsan");
	//stu.age = 23;
	//stu.gender = 'M';
	//stu.height = 1.78;

	//strcpy(stu.msg.phone, "1136284722");
	//strcpy(stu.msg.mail, "1136284722@foxmail.com");

	////输出
	//printf("学生的信息为：\n");
	//printf("姓名为：%s\n",stu.name);
	//printf("年龄为：%d\n",stu.age);
	//printf("性别为：%c\n",stu.gender);
	//printf("身高为：%lf\n",stu.height);
	//
	//printf("手机号为：%s\n",stu.msg.phone);
	//printf("邮箱为：%s\n",stu.msg.mail);

	//printf("-------------------------\;");

	//struct Student stu2 = { "lisi",24,'F',1.65,{"1234567890","56789@qq.com"} };
	//printf("学生的信息为：\n");
	//printf("姓名为：%s\n", stu2.name);
	//printf("年龄为：%d\n", stu2.age);
	//printf("性别为：%c\n", stu2.gender);
	//printf("身高为：%lf\n", stu2.height);

	//printf("手机号为：%s\n", stu2.msg.phone);
	//printf("邮箱为：%s\n", stu2.msg.mail);
	////结构体嵌套
	
	


	//景点投票 80名学生给abcd四个景点投票
	//定义数组存储四个变量
	//struct spot arr[4] = { {"A",0},{"B",0}, {"C",0}, {"D",0} };
	////模拟80名同学投票
	//srand(time(NULL));
	//for (int i = 0; i < 80; i++)
	//{
	//	//choose:用户投票(1、2、3、4）,用arr获得经典名字和票数
	//	int choose = rand() % 4;//0,1,2,3
	//	//arr[chosse]:获取景点名字信息
	//	//arr[choose].count：表示景点投票数量
	//	//arr[choose].count++：再投一票
	//	arr[choose].count++;
	//}
	//int max = arr[0].count;
	//for (int i = 1; i < 4; i++)
	//{
	//	struct spot temp = arr[i];
	//	if (temp.count > max) {
	//		max = temp.count;
	//	}
	//}
	////遍历数组，看谁是最大值a<b<c<d
	//for (int i = 0; i < 4; i++)
	//{
	//	struct spot temp = arr[i];
	//	if (temp.count == max) {
	//		printf("投票最多的景点为：%s，共计%d张票\n", temp.name, temp.count);
	//		break;
	//	}
	//}


	//for (int i = 0; i < 4; i++)
	//{
	//	struct spot temp = arr[i];
	//	printf("%s %d\n", temp.name, temp.count);
	//}
	




	//内存对齐验证

	//结构体的内存大小是最大类型的整数倍

	struct Num n;
	printf("%zu\n", sizeof(n));



	/*int a = 10;
	int b = 10;
	printf("%d\n", &a);
	printf("%d\n", &b);*/
	return 0;
}


//void method(S st) {
//	printf("接收到的main函数学生初始数据为：%s，&d\n", st.name, st.age);
//
//	printf("请输入要修改的名字：\n");
//	scanf("%s", st.name);
//	printf("请输入要修改的年龄：\n");
//	scanf("%d", &(st.age));
//	printf("method函数中学生修改后的数据为：%s，&d\n", st.name, st.age);
//}
//指针p：内函数stu的内存地址
//void method2(S* p) {
//	printf("接收到的main函数学生初始数据为：%s，%d\n", (*p).name, (*p).age);
//
//	printf("请输入要修改的名字：\n");
//	scanf("%s", (*p).name);
//	printf("请输入要修改的年龄：\n");
//	scanf("%d", &((*p).age));
//	printf("method函数中学生修改后的数据为：%s，%d\n", (*p).name, (*p).age);
//}S stu;