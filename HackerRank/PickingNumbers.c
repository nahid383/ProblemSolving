#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], frequency[101] = {0}, maxLength = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        frequency[a[i]]++;
    }

    for (int i = 1; i <= 100; i++) {
        int length = frequency[i] + frequency[i - 1];
        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
