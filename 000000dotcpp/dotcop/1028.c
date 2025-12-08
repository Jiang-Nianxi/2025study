//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>  // 必须包含sqrt所需的头文件
//
//// 函数声明：参数类型统一为double，和定义保持一致
//void two_real(double a, double b, double d);
//void one_real(double a, double b);
//void comp_root(double a, double b, double d);
//
//int main() {
//	int a, b, c, d;
//	scanf("%d %d %d", &a, &b, &c);
//	d = b * b - 4 * a * c;
//	if (d > 0) {
//		two_real(a, b, d);
//	}
//	else if (d == 0) {
//		one_real(a, b);
//	}
//	else {
//		comp_root(a, b, d);
//	}
//	return 0;
//}
//
//
//// 两个实根的输出（空格分隔，三位小数）
//void two_real(double a, double b, double d) {
//    double r1 = (-b + sqrt(d)) / (2.0 * a);
//    double r2 = (-b - sqrt(d)) / (2.0 * a);
//    printf("x1=%.3f x2=%.3f\n", r1, r2);  // 去掉分号，改为空格，精度%.3f
//}
//
//// 重根的输出（匹配题目格式）
//void one_real(double a, double b) {
//    double r = -b / (2.0 * a);
//    printf("x1=x2=%.3f\n", r);  // 精度改为三位
//}
//
//// 复根的输出（匹配样例格式：三位小数+无分号）
//void comp_root(double a, double b, double d) {
//    double real = -b / (2.0 * a);
//    double imag = sqrt(-d) / (2.0 * a);
//    printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", real, imag, real, imag);  // 空格分隔，三位小数
//}