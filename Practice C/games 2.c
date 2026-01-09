#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Arrays to store home and guest uniform colors
    int home[n], guest[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &home[i], &guest[i]);
    }

    int count = 0;

    // Loop through all games
    for (int i = 0; i < n; i++) { // Host team
        for (int j = 0; j < n; j++) { // Guest team
            if (i != j && home[i] == guest[j]) {
                count++;
            }
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}

