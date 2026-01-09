#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int height[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    int maxHurdle = height[0];
    for (int i = 1; i < n; i++) {
        if (height[i] > maxHurdle) {
            maxHurdle = height[i];
        }
    }

    if (k >= maxHurdle) {
        printf("0\n");
    } else {
        printf("%d\n", maxHurdle - k);
    }

    return 0;
}
