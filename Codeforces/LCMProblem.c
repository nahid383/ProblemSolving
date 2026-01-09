#include <stdio.h>

void solve() {
    int l, r;
    scanf("%d %d", &l, &r);

    if (2 * l <= r) {
        printf("%d %d\n", l, 2 * l);
    } else {
        printf("-1 -1\n");
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
