#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHABET_COUNT 26

int main() {
    int n;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);

    bool letters[ALPHABET_COUNT] = {false};
    int distinct_count = 0;

    for (int i = 0; i < n; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (!letters[index]) {
                letters[index] = true;
                distinct_count++;
            }
        }
        if (distinct_count == ALPHABET_COUNT) {
            break;
        }
    }

    if (distinct_count == ALPHABET_COUNT) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
