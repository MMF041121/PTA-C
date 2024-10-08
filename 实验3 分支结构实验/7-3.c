#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    scanf("%d %c %d", &num1, &operator, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            result = num1 / num2;
            printf("%d\n", result);
            break;
        case '%':
            result = num1 % num2;
            printf("%d\n", result);
            break;
        default:
            printf("ERROR\n");
    }

    return 0;
}
