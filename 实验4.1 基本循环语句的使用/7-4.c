//好难啊啊啊啊啊啊困住我的竟然是不会求最大公约数和最小公倍数！！！
#include <stdio.h>

int main() {
    int M, N;       // 输入的两个正整数
    int a, b;       // 用于GCD计算的临时变量
    int temp;       // 用于交换a和b的临时变量
    int gcd, lcm;   // 最大公约数和最小公倍数
    
    // 读取输入的两个正整数
    scanf("%d %d", &M, &N);
    
    // 初始化a和b
    a = M;
    b = N;
    
    // 使用辗转相除法（欧几里得算法）计算GCD
    while (b != 0) {
        temp = b;   // 保存b的值
        b = a % b;  // 新的b是a除以旧b的余数
        a = temp;   // a取旧b的值
    }
    
    // 循环结束时，a就是最大公约数
    gcd = a;
    
    // 计算最小公倍数
    // 公式: LCM(M, N) = M * N / GCD(M, N)
    // 为避免溢出，先除后乘
    lcm = M / gcd * N;
    
    // 输出结果
    printf("%d %d\n", gcd, lcm);
    
    return 0;
}
