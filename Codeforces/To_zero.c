#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        if (n % 2 == 0)
            printf("%lld\n", (n + k - 2) / (k - 1));
        else
            printf("%lld\n", 1 + ((n - k) + k - 2) / (k - 1));
    }

    return 0;
}
