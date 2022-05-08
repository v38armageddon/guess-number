#include <stdio.h>

/* Init randomization */
int randNumber;
int answer;
int count = 1;
int upper = 1600;
int lower = 1;

int main() {
    srand(time(0));
    for (int i = 0; i < count; i++){
        randNumber = (rand() % (upper - lower + 1)) + lower;
    };
    /* Ask the user to guess */
    printf("Guess a number between 1 and 1500: \n");
    scanf("%d", &answer);
    
    /* Check if it's the correct number */
    if(answer==randNumber){
        printf("You guessed it!");
        printf("The number was: %d.", randNumber);
    }

    else if(answer>randNumber){
        printf("Sorry, the number you guessed was too high.");
        printf("The number was: %d.", randNumber);
     }

    else if(answer<randNumber){
        printf("Sorry, the number you guessed was too low.");
        printf("The number was: %d.", randNumber);
     }
}
