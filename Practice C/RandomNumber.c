#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Variables
    int sum = 0;
    int count = 1000;

    // Generate 1000 random numbers and calculate the sum
    for (int i = 0; i < count; i++) {
        int num = rand();  // Generate a random number
        sum += num;        // Add the number to the sum
    }

    // Calculate and print the average
    double average = sum / (double)count;
    printf("Average of 1000 random numbers: %lf\n", average);

    return 0;
}
