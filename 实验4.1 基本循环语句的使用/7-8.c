#include <stdio.h>

int main() {
    int target;  // 游戏机产生的随机数
    int N;       // 猜测的最大次数
    int guess;   // 用户的猜测
    int count = 0;  // 猜测次数

    // 读取目标数和最大猜测次数
    scanf("%d %d", &target, &N);
    
    // 开始游戏循环
    while (1) {
        // 读取用户的猜测
        scanf("%d", &guess);
        count++;  // 增加猜测次数
        
        // 检查是否输入负数
        if (guess < 0) {
            printf("Game Over\n");
            break;
        }
        
        // 比较猜测和目标数
        if (guess > target) {
            printf("Too big\n");
        } else if (guess < target) {
            printf("Too small\n");
        } else {
            // 猜对了，根据猜测次数输出不同信息
            if (count == 1) {
                printf("Bingo!\n");
            } else if (count <= 3) {
                printf("Lucky You!\n");
            } else if (count <= N) {
                printf("Good Guess!\n");
            }
            break;  // 猜对了，结束游戏
        }
        
        // 检查是否达到最大猜测次数
        if (count == N) {
            printf("Game Over\n");
            break;
        }
    }
    
    return 0;
}
