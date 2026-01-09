#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases
    getchar();  // To consume the newline character after reading the integer

    while (t--) {
        char c[65];  // Array to hold grid values (since 8x8 grid has 64 characters)

        // Reading the 8x8 grid into the array
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                scanf("%c", &c[i * 8 + j]);  // Store each character in the array
            }
            getchar();  // To consume the newline character after each row
        }

        // Loop through the columns (0 to 7)
        for (int col = 0; col < 8; col++) {
            char word[9] = {0};  // Array to store the vertical word
            int wordIndex = 0;

            // Traverse the column to collect letters into the word array
            for (int row = 0; row < 8; row++) {
                if (c[row * 8 + col] != '.') {  // Check if it's a letter (not a dot)
                    word[wordIndex++] = c[row * 8 + col];
                }
            }

            // If we found a word, print it and break out of the loop
            if (wordIndex > 0) {
                printf("%s\n", word);
                break;
            }
        }
    }

    return 0;
}
