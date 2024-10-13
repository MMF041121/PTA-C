#include <stdio.h>
#include <limits.h>  // 为了使用 INT_MAX

int main() {
    int n;          // 用于存储要输入的整数个数
    int num;        // 用于暂时存储每次输入的整数
    int min = INT_MAX;  // 初始化最小值为最大可能的整数
    
    // 读取整数的个数
    scanf("%d", &n);
    
    // 循环n次，每次读取一个整数并更新最小值
    for (int i = 0; i < n; i++) {
        // 读取一个整数
        scanf("%d", &num);
        
        // 如果当前数小于已知的最小值，更新最小值
        if (num < min) {
            min = num;
        }
    }
    
    // 输出最小值
    printf("min = %d\n", min);
    
    return 0;
}
