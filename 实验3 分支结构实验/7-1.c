#include <stdio.h>

int main() {
    int n;
    int sign;
    
    // 读取输入
    scanf("%d", &n);
    
    // 判断符号
    if (n < 0) {
        sign = -1;
    } else if (n == 0) {
        sign = 0;
    } else {
        sign = 1;
    }
    
    // 输出结果
    printf("sign(%d) = %d\n", n, sign);
    
    return 0;
}
