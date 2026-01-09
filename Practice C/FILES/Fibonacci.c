#include <stdio.h>

int main() {
    // Declare the first two Fibonacci numbers
    long long int a = 0, b = 1, c;
    int i;

    // Open a text file for writing
    FILE *file = fopen("fibonacci.txt", "w");
    
    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the first Fibonacci number to the file
    fprintf(file, "%lld\n", a);
    fprintf(file, "%lld\n", b);

    // Generate and write the next 8 Fibonacci numbers to the file
    for (i = 3; i <= 10; i++) {
        c = a + b;  // Fibonacci formula
        fprintf(file, "%lld\n", c);

        // Update a and b for the next Fibonacci number
        a = b;
        b = c;
    }

    // Close the file
    fclose(file);

    printf("The first 10 Fibonacci numbers have been written to 'fibonacci.txt'.\n");

    return 0;
}
