#include <stdio.h>

// 判断一个数是否为完数
int isPerfectNumber(int num) {
    int sum = 1;  // 1总是因子，所以从1开始
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;  // 如果i不是平方根，加上另一个因子
            }
        }
    }
    return sum == num;
}

// 打印完数的因子分解式
void printFactors(int num) {
    printf("%d = 1", num);  // 1总是因子，所以先打印
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf(" + %d", i);
        }
    }
    printf("\n");
}

int main() {
    int m, n, found = 0;
    scanf("%d %d", &m, &n);
    
    // 在给定范围内查找完数
    for (int i = m; i <= n; i++) {
        if (isPerfectNumber(i)) {
            printFactors(i);
            found = 1;
        }
    }
    
    // 如果没有找到完数，输出"None"
    if (!found) {
        printf("None\n");
    }
    
    return 0;
}