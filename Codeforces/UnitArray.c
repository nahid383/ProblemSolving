#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int minus = 0, plus = 0, x;

        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x < 0) minus++;
            else plus++;
        }

        if (minus <= plus) {
            if (minus % 2 == 0) {
                printf("0\n");
            } else {
                printf("1\n");
            }
        } else {
            if (((minus + plus) / 2) % 2 == 0) {
                printf("%d\n", minus - (minus + plus) / 2);
            } else {
                printf("%d\n", minus - (minus + plus) / 2 + 1);
            }
        }
    }

    return 0;
}
