#include <stdio.h>

long long maxMonkeysSeated(long long m, long long a, long long b, long long c)
{
    long long row1 = (a < m) ? a : m;
    long long row2 = (b < m) ? b : m;

    long long remainingRow1 = m - row1;
    long long remainingRow2 = m - row2;

    long long additionalFromC = (remainingRow1 + remainingRow2 < c) ? (remainingRow1 + remainingRow2) : c;

    return row1 + row2 + additionalFromC;
    }

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        printf("%lld\n", maxMonkeysSeated(m, a, b, c));
    }

    return 0;
}
