#include <stdio.h>

/* Init randomization */
int randNumber;
int answer;
int guess;

int main() {
    randNumber = rand(13);
    /* Ask the user to guess */
    printf("Guess a number between 1 and 13: \n");
    scanf("%d", &answer);
    
    /* Check if it's the correct number */
    if(answer == randNumber);{
        printf("You guessed it!");
        printf("The number was %d", randNumber);
    }

    if(answer > randNumber);{
        printf("Sorry, the number you guessed was too high.");
        printf("The number was %d", randNumber);
     }

    if(answer < randNumber);{
        printf("Sorry, the number you guessed was too low.");
        printf("The number was %d", randNumber);
     }
}
