#include <stdio.h>
#include <string.h>

void solve() {
    int n;
    scanf("%d", &n);
    char a[n + 1], b[n + 1];
    scanf("%s %s", a, b);

    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sum1 += (a[i] - '0');
            sum2 += (b[i] - '0');
        } else {
            sum1 += (b[i] - '0');
            sum2 += (a[i] - '0');
        }
    }

    long long num_b_slots1 = n / 2;
    long long num_b_slots2 = (n + 1) / 2;

    if (sum1 <= num_b_slots1 && sum2 <= num_b_slots2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}