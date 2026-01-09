#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char string[n + 1]; // Extra space for null terminator
    scanf("%s", string);

    int length_X = 0, remove_X = 0;

    for (int i = 0; i < n; i++) {
        if (string[i] == 'x') {
            length_X++;
        } else {
            if (length_X > 2) {
                remove_X += length_X - 2;
            }
            length_X = 0;
        }
    }

    
    if (length_X > 2) {
        remove_X += length_X - 2;
    }

    printf("%d\n", remove_X);
    return 0;
}
