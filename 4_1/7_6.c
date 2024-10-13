#include <stdio.h>
#include <stdbool.h>  // 为了使用bool类型
#include <math.h>     // 为了使用sqrt函数

// 判断一个数是否为素数
bool isPrime(int n) {
    // 1和小于1的数不是素数
    if (n <= 1) return false;
    
    // 只需要检查到sqrt(n)就足够了
    for (int i = 2; i <= sqrt(n); i++) {
        // 如果n能被i整除，那么n不是素数
        if (n % i == 0) return false;
    }
    
    // 如果没有找到因子，那么n是素数
    return true;
}

int main() {
    int M, N;
    int count = 0;  // 用于统计素数的个数
    int sum = 0;    // 用于累加素数的和
    
    // 读取输入的M和N
    scanf("%d %d", &M, &N);
    
    // 遍历M到N之间的所有数
    for (int i = M; i <= N; i++) {
        // 如果i是素数
        if (isPrime(i)) {
            count++;      // 素数计数加1
            sum += i;     // 将这个素数加到总和中
        }
    }
    
    // 输出结果
    printf("%d %d\n", count, sum);
    
    return 0;
}
