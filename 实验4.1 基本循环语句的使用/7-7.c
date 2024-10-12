#include <stdio.h>

int main() {
    int a, n;       // a是重复的数字，n是重复的次数
    int term = 0;   // 用于存储每一项 (a, aa, aaa, ...)
    int sum = 0;    // 用于存储总和
    
    // 读取输入的a和n
    scanf("%d %d", &a, &n);
    
    // 循环n次，每次计算一个新项并加到总和中
    for (int i = 0; i < n; i++) {
        // 计算新的一项：将上一项乘10再加a
        // 例如：如果a=2，那么项的序列是：2, 22, 222, ...
        term = term * 10 + a;
        
        // 将新的一项加到总和中
        sum += term;
    }
    
    // 按要求的格式输出结果
    printf("s = %d\n", sum);
    
    return 0;
}
