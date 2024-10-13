#include <stdio.h>

int main() {
    int N;  // 目标兔子对数
    int month = 1;  // 当前月数
    int one_month = 1;  // 一个月大的兔子对数
    int two_month = 0;  // 两个月大的兔子对数
    int mature = 0;  // 成熟的兔子对数（三个月及以上）
    int total = 1;  // 总兔子对数
    
    scanf("%d", &N);
    
    while (total < N) {
        mature += two_month;  // 两个月大的兔子变成成熟兔子
        two_month = one_month;  // 一个月大的兔子变成两个月大
        one_month = mature;  // 新出生的兔子数量等于成熟兔子数量
        total = one_month + two_month + mature;  // 计算总数
        month++;
    }
    
    printf("%d\n", month);
    
    return 0;
}
