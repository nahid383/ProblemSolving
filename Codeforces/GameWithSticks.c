#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n < m) {
        if (n % 2 == 1) {
            printf("Akshat\n");
        } else {
            printf("Malvika\n");
        }
    } else {
        if (m % 2 == 1) {
            printf("Akshat\n");
        } else {
            printf("Malvika\n");
        }
    }

    return 0;
}
