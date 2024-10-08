#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int letter = 0, blank = 0, digit = 0, other = 0;
    int count = 0;

    while (count < 10) {
        ch = getchar();
        count++;

        if (isalpha(ch)) {
            letter++;
        } else if (isspace(ch)) {
            blank++;
        } else if (isdigit(ch)) {
            digit++;
        } else {
            other++;
        }
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d\n", 
           letter, blank, digit, other);

    return 0;
}
