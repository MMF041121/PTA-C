#include <stdio.h>

int main() {
    int num;    // 用于存储输入的数字
    int sum = 0;    // 用于累加奇数和,初始化为0
    
    // 无限循环,直到遇到小于等于0的数
    while (1) {
        // 读取一个整数
        scanf("%d", &num);
        
        // 如果输入的数小于等于0,退出循环
        if (num <= 0) break;
        
        // 如果数字是奇数(除以2余1),则加到sum中
        if (num % 2 != 0) sum += num;
    }
    
    // 输出奇数和
    printf("%d\n", sum);
    
    return 0;    // 程序正常结束
}
