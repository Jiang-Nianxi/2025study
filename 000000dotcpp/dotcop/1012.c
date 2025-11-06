//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>  // 用于isalpha、isdigit函数
////insalpha:判断一个字符是否为英文字母（包括大写字母 A-Z 和小写字母 a-z）
////isdigit：判断一个字符是否为数字字符（即 '0' 到 '9' 之间的字符）
//int main() {
//    int letter = 0, digit = 0, space = 0, other = 0;
//    char c;
//    // 逐个读取字符，直到遇到换行符
//    while ((c = getchar()) != '\n') {
//        if (isalpha(c)) {  // 判断是否为英文字母
//            letter++;
//        }
//        else if (isdigit(c)) {  // 判断是否为数字
//            digit++;
//        }
//        else if (c == ' ') {  // 判断是否为空格
//            space++;
//        }
//        else {  // 其他字符
//            other++;
//        }
//    }
//    // 输出统计结果
//    printf("%d %d %d %d\n", letter, digit, space, other);
//    return 0;
//}
