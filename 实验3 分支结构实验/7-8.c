#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    int found = 0;

    scanf("%d", &year);

    if (year < 2001 || year > 2100) {
        printf("Invalid year!\n");
        return 0;
    }

    for (int i = 2001; i <= year; i++) {
        if (isLeapYear(i)) {
            printf("%d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}
