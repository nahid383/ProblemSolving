#include <stdio.h>

int generateRandomNumber() {
    srand(time(0));
    return (rand() % 100) + 1;
}

int main() {
    int randomNumber = generateRandomNumber();
    int userGuess, attempts = 5;

    printf("Guess the number (between 1 and 100):\n");

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: ", i);
        scanf("%d", &userGuess);

        if (userGuess == randomNumber) {
            printf("Correct! You guessed the number in %d attempts.\n", i);
            return 0;
        } else if (userGuess > randomNumber) {
            printf("Too High!\n");
        } else {
            printf("Too Low!\n");
        }
    }

    printf("Better luck next time! The correct number was %d.\n", randomNumber);
    return 0;
}
