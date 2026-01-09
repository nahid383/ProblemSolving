#include <stdio.h>

int main() {
    int Y, W, max_roll, favorable, gcd, temp;
    scanf("%d %d", &Y, &W);

    if (Y > W)
        max_roll = Y;
    else
        max_roll = W;

    favorable = 7 - max_roll;
    gcd = favorable;
    temp = 6;

    while (temp) {
        int t = temp;
        temp = gcd % temp;
        gcd = t;
    }

    printf("%d/%d\n", favorable / gcd, 6 / gcd);
    return 0;
}
