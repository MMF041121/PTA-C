#include <stdio.h>

int main() {
    int d, a, dh, dm, ah, am, th, tm;

    scanf("%d %d", &d, &a);

    dh = d / 100; dm = d % 100;
    ah = a / 100; am = a % 100;

    tm = (ah * 60 + am) - (dh * 60 + dm);
    if (tm < 0) tm += 24 * 60;

    th = tm / 60;
    tm = tm % 60;

    printf("%02d:%02d\n", th, tm);

    return 0;
}
