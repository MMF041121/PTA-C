#include <stdio.h>

int main() {
    long num, temp, divisor = 1;
    
    // 读取输入的长整型非负整数
    scanf("%ld", &num);
    
    // 计算最高位的除数
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    
    // 从高位到低位逐位输出数字
    while (divisor > 0) {
        // 输出当前最高位
        printf("%ld ", num / divisor);
        // 去掉已经输出的最高位
        num %= divisor;
        // 除数减小一位
        divisor /= 10;
    }
    
    // 输出换行符
    printf("\n");
    
    return 0;
}