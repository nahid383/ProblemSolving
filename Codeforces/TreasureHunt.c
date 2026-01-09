#include <stdio.h>

int main() {
    int t;
    scanf("%lld", &t);

    while (t--) {
        long long x, y, a;
        scanf("%lld %lld %lld", &x, &y, &a);

        long long s = x + y;
        long long t = (a / s) * s;

        if (t + x <= a)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
