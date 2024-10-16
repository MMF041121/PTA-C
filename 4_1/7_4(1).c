#include <stdio.h>

// 找最大公约数的函数
int find_gcd(int a, int b) {
    int smaller = (a < b) ? a : b;  // 找出较小的数
    int gcd = 1;  // 最小的公约数是1

    // 从1开始，一直到较小的数，找最大的能同时整除两个数的数
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

// 找最小公倍数的函数
int find_lcm(int a, int b) {
    int larger = (a > b) ? a : b;  // 找出较大的数

    // 从较大的数开始，一直往上数，直到找到能同时被两个数整除的数
    while (1) {
        if (larger % a == 0 && larger % b == 0) {
            return larger;
        }
        larger++;
    }
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1,&num2);

    int gcd = find_gcd(num1, num2);
    int lcm = find_lcm(num1, num2);

    printf("%d %d\n",gcd,lcm);

    return 0;
}
