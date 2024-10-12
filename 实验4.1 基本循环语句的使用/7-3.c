#include <stdio.h>

int main() {
    int N;          // 存储输入的正整数
    int digits = 0; // 存储位数
    int sum = 0;    // 存储各位数字之和
    
    // 读取输入的正整数
    scanf("%d", &N);
    
    // 当N大于0时，继续循环
    while (N > 0) {
        sum += N % 10;  // 取N的最后一位，加到sum中
        N /= 10;        // 去掉N的最后一位
        digits++;       // 位数加1
    }
    
    // 输出结果
    printf("%d %d\n", digits, sum);
    
    return 0;
}
