#include <stdio.h>

int main() {
    int shift;
    char message[101];
    
    scanf("%d", &shift);
    scanf(" %[^\n]", message);

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' - shift + 26) % 26 + 'a';
        }
    }

    printf("%s\n", message);
    return 0;
}
