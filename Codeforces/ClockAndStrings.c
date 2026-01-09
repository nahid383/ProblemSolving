#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int flag = 0;

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (c > d) {
            int temp = c;
            c = d;
            d = temp;
        }

        if (a > c && b > c && a < d && b < d)
            flag = 1;

        if (c > a && d > a && c < b && d < b)
            flag = 1;

        if ((c > b && d > b) || (a > d && a > c))
            flag = 1;

        if (!flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
