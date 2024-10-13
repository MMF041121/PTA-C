#include <stdio.h>
#include <math.h>

int main() {
    double x, term = 1.0, sum = 1.0;
    int k = 1;
    
    // 读取输入的 x 值
    scanf("%lf", &x);
    
    // 计算幂级数的和，直到最后一项的绝对值小于 0.00001
    while (fabs(term) >= 0.00001) {
        // 计算下一项
        term *= x / k;
        // 将新项加到和中
        sum += term;
        // 增加 k 的值
        k++;
    }
    
    // 输出结果，保留四位小数
    printf("%.4f\n", sum);
    
    return 0;
}