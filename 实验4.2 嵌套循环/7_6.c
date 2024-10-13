#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数
int isPrime(int n) {
    if (n <= 1) return 0;  // 1和负数不是素数
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;  // 如果能被整除，不是素数
    }
    return 1;  // 是素数
}

int main() {
    int N, p, q;
    
    // 读取输入的偶数N
    scanf("%d", &N);
    
    // 从2开始尝试，直到N/2
    for (p = 2; p <= N/2; p++) {
        // 如果p和N-p都是素数，我们找到了解
        if (isPrime(p) && isPrime(N-p)) {
            q = N - p;
            printf("%d = %d + %d\n", N, p, q);
            break;  // 找到最小的p，立即退出循环
        }
    }
    
    return 0;
}