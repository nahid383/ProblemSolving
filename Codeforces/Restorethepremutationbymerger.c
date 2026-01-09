#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[2 * n], p[n], seen[51] = {0}, index = 0;

        for (int i = 0; i < 2 * n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < 2 * n; i++) {
            if (!seen[a[i]]) {
                p[index++] = a[i];
                seen[a[i]] = 1;
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}
