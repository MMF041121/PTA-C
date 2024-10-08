#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    printf("sum = %.6f\n", sum);
    return 0;
}
