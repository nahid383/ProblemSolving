#include <stdio.h>

int main() {
    int t, n, m, l, r;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d", &n, &m, &l, &r);
        int k;
        if (m <= -l) {
            k = m;
        } else {
            k = -l;
        }
        printf("%d %d\n", -k, m - k);
    }
    return 0;
}
