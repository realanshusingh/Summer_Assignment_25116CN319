#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;
    
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;
    
    printf("Guess the number (between 1 and 100):\n");

    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } 
        else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } 
        else {
            printf("Congratulations! You guessed the number %d correctly!\n", secretNumber);
            break;
        }
    }

    return 0;
}
