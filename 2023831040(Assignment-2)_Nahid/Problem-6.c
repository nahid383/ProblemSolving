#include <stdio.h>
#include <string.h>

int main() {
    char string[10001];
    printf("Enter a string: ");
  gets(string);
    int length = strlen(string);
    int vowel = 0;

    for (int i = 0; i < length; i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            vowel++;
        }
    }

    printf("Number of vowels: %d\n", vowel);

    return 0;
}

