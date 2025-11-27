//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h> // 引入数学库，为了使用 sqrt 函数来优化因子查找
//
//int main() {
//    int N;
//    
//    scanf("%d", &N); // 从用户处读取上限 N
//
//    // 外层循环：遍历从 2 到 N 的每一个整数，判断它们是否为完数
//    // 从 2 开始是因为 1 没有除了自身以外的因子
//    for (int i = 2; i <= N; i++) {
//        int sum_of_factors = 0;  // 用于存储当前数字 i 的所有真因子之和
//        int factors[100];        // 数组：用于存储当前数字 i 的所有真因子
//        int factor_count = 0;    // 计数器：记录数组 factors 中存储了多少个因子
//
//        // 内层循环：高效地查找数字 i 的所有真因子
//        // 优化点：一个数的因子都是成对出现的，例如 6 的因子是 1&6, 2&3
//        // 因此，我们只需要遍历到 sqrt(i) 即可，这样可以减少循环次数
//        for (int j = 1; j <= sqrt(i); j++) {
//            // 如果 j 能整除 i，说明 j 是 i 的一个因子
//            if (i % j == 0) {
//                // 将因子 j 存入数组，并累加到总和中
//                factors[factor_count++] = j;
//                sum_of_factors += j;
//
//                // 处理成对的另一个因子 (i/j)
//                // 1. j != i/j：避免 j 和 i/j 相等时（例如 i=4, j=2）重复添加
//                // 2. i/j != i：确保我们添加的是"真因子"，即排除数字本身
//                if (j != i / j && (i / j) != i) {
//                    factors[factor_count++] = i / j;
//                    sum_of_factors += i / j;
//                }
//            }
//        }
//
//        // 判断：如果所有真因子的和等于数字本身，那么它就是一个完数
//        if (sum_of_factors == i) {
//            // 排序：由于因子是成对找到的，数组内的顺序可能是乱的
//            // 这里使用简单的冒泡排序对因子数组进行从小到大的排序
//            for (int m = 0; m < factor_count - 1; m++) {
//                for (int n = 0; n < factor_count - m - 1; n++) {
//                    if (factors[n] > factors[n + 1]) {
//                        int temp = factors[n];
//                        factors[n] = factors[n + 1];
//                        factors[n + 1] = temp;
//                    }
//                }
//            }
//
//            // 按题目要求的格式输出结果
//            printf("%d its factors are ", i);
//            for (int k = 0; k < factor_count; k++) {
//                // 如果是第一个因子，前面不加空格
//                if (k == 0) {
//                    printf("%d", factors[k]);
//                }
//                // 从第二个因子开始，每个因子前加一个空格
//                else {
//                    printf(" %d", factors[k]);
//                }
//            }
//            printf("\n"); // 输出完一个完数后换行
//        }
//    }
//
//    return 0;
//}