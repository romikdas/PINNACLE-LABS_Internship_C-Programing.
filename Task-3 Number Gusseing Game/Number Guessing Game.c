#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        srand(time(NULL));

    int secretNumber = rand() % 100 + 1;
    int guess, numGuesses = 0;

    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    while (guess != secretNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        numGuesses++;

        if (guess < secretNumber) {
            printf("Too low. Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high. Try again.\n");
        }
    }

    printf("You guessed it! The number was %d. It took you %d guesses.\n", secretNumber, numGuesses);

    return 0;
}
