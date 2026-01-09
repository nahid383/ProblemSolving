#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a[3], max = 0;

        for (int i = 0; i < 3; i++) {
            scanf("%d", &a[i]);
            if (a[i] > max)
                max = a[i];
        }

        int count_max = 0;
        for (int i = 0; i < 3; i++) {
            if (a[i] == max)
                count_max++;
        }

        for (int i = 0; i < 3; i++) {
            if (a[i] == max) {
                if (count_max > 1)
                    printf("1 ");
                else
                    printf("0 ");
            } else {
                printf("%d ", max - a[i] + 1);
            }
        }

        printf("\n");
    }

    return 0;
}
