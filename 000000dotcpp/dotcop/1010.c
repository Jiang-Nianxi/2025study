//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//    float profit;  // ÀûÈó
//    scanf("%f", &profit);
//    float bonus = 0;  // ½±½ð
//
//    if (profit <= 100000) {
//        bonus = profit * 0.1;
//    }
//    else if (profit <= 200000) {  // Òþº¬ profit > 100000
//        bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
//    }
//    else if (profit <= 400000) {  // Òþº¬ profit > 200000
//        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
//    }
//    else if (profit <= 600000) {  // Òþº¬ profit > 400000
//        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
//    }
//    else if (profit <= 1000000) {  // Òþº¬ profit > 600000
//        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
//    }
//    else {  // profit > 1000000
//        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
//    }
//
//    printf("%.f\n", bonus);  // Í³Ò»Êä³ö£¬±ÜÃâÂ©Ð´»»ÐÐ
//    return 0;
//}