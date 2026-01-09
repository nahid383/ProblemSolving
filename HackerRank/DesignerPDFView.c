#include <stdio.h>
#include <string.h>

int main() {
    int h[26];
    for (int i = 0; i < 26; i++) {
        scanf("%d", &h[i]);
    }

    char word[101];
    scanf("%s", word);

    int maxHeight = 0;
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        int index = word[i] - 'a';
        if (h[index] > maxHeight) {
            maxHeight = h[index];
        }
    }

    printf("%d\n", maxHeight * length);
    return 0;
}
