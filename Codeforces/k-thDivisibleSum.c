#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        long long min_max_element = (n + k - 1) / k * k / n;
        if ((min_max_element * n) % k != 0) {
            min_max_element++;
        }

        printf("%lld\n", min_max_element);
    }
    return 0;
}
