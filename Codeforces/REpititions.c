#include <stdio.h>
#include <string.h>

int main() {
    char dna[1000001]; // Maximum length of 1,000,000 plus one for the null terminator
    scanf("%s", &dna);

    int maxLength = 1, currentLength = 1;
    int n = strlen(dna);

    for (int i = 1; i < n; i++) {
        if (dna[i] == dna[i - 1]) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        } else {
            currentLength = 1;
        }
    }

    printf("%d\n", maxLength);
    return 0;
}
