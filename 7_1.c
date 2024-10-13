#include <stdio.h>

int main() {
    int n;
    double e = 1.0;  // 初始化e为1，对应级数的第一项
    double factorial = 1.0;  // 用于计算阶乘

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;  // 计算i的阶乘
        e += 1.0 / factorial;  // 加上级数的下一项
    }

    printf("%.8f\n", e);  // 输出结果，保留8位小数

    return 0;
}