//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int a, b, c;      // 对应题目中的三个输入a、b、c
//    int sum1 = 0;     // 存储1~a的和
//    int sum2 = 0;     // 存储1~b的平方和
//    double sum3 = 0.0;// 存储1~c的倒数和（用double提高精度）
//    double total = 0.0;// 存储三部分的总和
//
//    // 输入a、b、c
//    scanf("%d %d %d", &a, &b, &c);
//
//    // 计算1~a的和（等差数列求和公式）
//    sum1 = (1 + a) * a / 2;
//
//    // 计算1~b的平方和（循环累加）
//    for (int i = 1; i <= b; i++) {
//        sum2 += i * i;
//    }
//
//    // 计算1~c的倒数和（浮点运算，避免整数截断）
//    for (int i = 1; i <= c; i++) {
//        sum3 += 1.0 / i;
//    }
//
//    // 计算总和并保留2位小数输出
//    total = sum1 + sum2 + sum3;
//    printf("%.2f\n", total);
//
//    return 0;
//}