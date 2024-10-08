#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        sum += (i % 2 == 0 ? 1.0 : -1.0) / (3 * i + 1);
    }
    printf("sum = %.3f\n", sum);
    return 0;
}
