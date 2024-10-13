#include <stdio.h>

int main() {
    int n;
    char ch = 'A';  // 初始化字符为 'A'
    
    // 读取输入的 n 值
    scanf("%d", &n);
    
    // 外层循环控制行数，从 n 开始递减
    for (int i = n; i > 0; i--) {
        // 内层循环控制每行的字符数，从 0 到 i-1
        for (int j = 0; j < i; j++) {
            // 打印当前字符，然后将字符递增
            printf("%c ", ch++);
        }
        // 每行结束后换行
        printf("\n");
    }
    
    return 0;
}