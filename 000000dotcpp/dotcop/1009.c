//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int num, original_n, n;
//    int length;  // 用于存储数字的位数
//    if (scanf("%d", &num) != 1) {  // 检查scanf是否成功读取整数
//        return 1;  // 输入错误时退出程序
//    }
//
//    // 处理负数（取绝对值，不影响位数和数字本身）
//    n = num < 0 ? -num : num;
//    original_n = n;  // 保存原始绝对值用于后续处理
//
//    // 1. 判断数字的位数
//    if (n == 0) {
//        length = 1;
//    }
//    else if (n < 10) {
//        length = 1;
//    }
//    else if (n < 100) {
//        length = 2;
//    }
//    else if (n < 1000) {
//        length = 3;
//    }
//    else if (n < 10000) {
//        length = 4;
//    }
//    else {
//        length = 5;  // 题目限定不多于5位
//    }
//    printf("%d\n", length);
//
//    // 2. 分别输出每一位数字
//    int temp = original_n;
//    if (length == 5) {
//        printf("%d ", temp / 10000);  // 万位
//        temp %= 10000;
//    }
//    if (length >= 4) {
//        printf("%d ", temp / 1000);   // 千位
//        temp %= 1000;
//    }
//    if (length >= 3) {
//        printf("%d ", temp / 100);    // 百位
//        temp %= 100;
//    }
//    if (length >= 2) {
//        printf("%d ", temp / 10);     // 十位
//        temp %= 10;
//    }
//    printf("%d\n", temp);  // 个位
//
//    // 3. 逆序输出各位数字
//    if (original_n == 0) {
//        printf("0");  // 特殊处理0的情况
//    }
//    else {
//        int temp2 = original_n;
//        while (temp2 > 0) {
//            printf("%d", temp2 % 10);  // 每次取最后一位
//            temp2 /= 10;               // 移除最后一位
//        }
//    }
//    printf("\n");
//
//    return 0;
//}