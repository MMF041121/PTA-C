#include <stdio.h>
#include <math.h>  // 为了使用fabs函数

int main() {
    double eps;    // 存储给定的精度
    double sum = 0;    // 存储序列的部分和
    double term;    // 存储每一项的值
    int i = 1;    // 用于计算每一项的分母
    int sign = 1;    // 用于交替正负号

    // 读取给定的精度eps
    scanf("%lf", &eps);
    
    do {
        // 计算当前项的值
        term = 1.0 / (3 * i - 2);
        
        // 将当前项加到sum中，注意正负号
        sum += sign * term;
        
        // 改变下一项的符号
        sign = -sign;
        
        // 为下一项准备
        i++;
    } while (fabs(term) > eps);  // 当项的绝对值大于eps时继续循环
    
    // 输出结果，保留6位小数
    printf("sum = %.6f\n", sum);
    
    return 0;
}
