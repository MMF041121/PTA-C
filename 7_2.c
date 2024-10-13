#include <stdio.h>

int main() {
    int x, count = 0;
    
    scanf("%d", &x);
    
    // 检查输入范围
    if (x <= 8 || x >= 100) {
        printf("Invalid input\n");
        return 0;
    }
    
    for (int fen5 = x / 5; fen5 > 0; fen5--) {
        for (int fen2 = (x - fen5 * 5) / 2; fen2 > 0; fen2--) {
            int fen1 = x - fen5 * 5 - fen2 * 2;
            if (fen1 > 0) {
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", 
                       fen5, fen2, fen1, fen5 + fen2 + fen1);
                count++;
            }
        }
    }
    
    printf("count = %d\n", count);
    return 0;
}