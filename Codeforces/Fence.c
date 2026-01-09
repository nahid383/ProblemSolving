#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    int min_sum = sum, min_index = 0;
    
    for (int i = 1; i <= n - k; i++) {
        sum = sum - a[i - 1] + a[i + k - 1];

        if (sum < min_sum) {
            min_sum = sum;
            min_index = i;
        }
    }

    printf("%d\n", min_index + 1);
    return 0;
}
