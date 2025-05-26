#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0, maxAttempts = 10;

    srand(time(0));
    secretNumber = (rand() % 100) + 1; 
    printf("?? Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;
        if (guess==secretNumber) {
            printf("?? Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess<secretNumber) {
            printf("?? Too low! Try a higher number.\n");
        } else {
            printf("?? Too high! Try a lower number.\n");
        }
        if (attempts==maxAttempts) {
            printf("\n? You've used all your attempts. The correct number was %d.\n", secretNumber);
        }
    }
    printf("\nThanks for playing!\n");
}
/*

?? Welcome to the Number Guessing Game!
I have selected a number between 1 and 100.
You have 10 attempts to guess it.

Attempt 1: Enter your guess: 99
?? Too high! Try a lower number.
Attempt 2: Enter your guess: 100
?? Too high! Try a lower number.
Attempt 3: Enter your guess: 22
?? Too high! Try a lower number.
Attempt 4: Enter your guess: 12
?? Too low! Try a higher number.
Attempt 5: Enter your guess: 11
?? Too low! Try a higher number.
Attempt 6: Enter your guess: 18
?? Too high! Try a lower number.
Attempt 7: Enter your guess: 19
?? Too high! Try a lower number.
Attempt 8: Enter your guess: 16
?? Congratulations! You guessed the number in 8 attempts.

Thanks for playing!
*/

