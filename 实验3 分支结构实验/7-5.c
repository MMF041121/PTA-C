#include <stdio.h>

int main() {
    double prices[] = {0.0, 3.00, 2.50, 4.10, 10.20};
    int choice;
    int count = 0;

    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");

    while (count < 5 && scanf("%d", &choice) == 1) {
        count++;

        if (choice >= 0 && choice <= 4) {
            if (choice == 0) break;
            printf("price = %.2f\n", prices[choice]);
        } else {
            printf("price = 0.00\n");
        }

        if (count == 5) break;
    }

    return 0;
}
