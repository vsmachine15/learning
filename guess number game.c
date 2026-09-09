#include <stdio.h>
#include <stdlib.h>

int main() {
    int secret = 42;
    int guess;
    int attempts = 0;

    char input[100];

    printf("Guess the number (1-100): ");
    fgets(input, sizeof(input), stdin);
    guess = strtol(input, NULL, 10);

    while (guess != secret) {

        attempts++;

        if (guess < secret) {
            printf("Too low! Try again: ");
        }
        else if (guess > secret) {
            printf("Too high! Try again: ");
        }

        fgets(input, sizeof(input), stdin);
        guess = strtol(input, NULL, 10);
    }

    attempts++;

    printf("You got it!\n");
    printf("Attempts: %d\n", attempts);

    return 0;
}