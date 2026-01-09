#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int sorted = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                sorted = 0;
                break;
            }
        }

        if (!sorted) {
            printf("0\n");
            continue;
        }

        int min_diff = 1000000000;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] < min_diff) {
                min_diff = a[i] - a[i - 1];
            }
        }

        if (min_diff == 0) {
            printf("1\n");
        } else {
            printf("%d\n", (min_diff / 2) + 1);
        }
    }

    return 0;
}
