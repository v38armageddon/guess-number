long randNumber;
int answer;

randNumber = random(13);
printf("Guess a number between 1 and 13:");
scanf("%d", &answer);
if (answer == randNumber) {
    printf("You guessed it!");
    printf("The number was %d", randNumber);
} 

elif (answer > randNumber) {
    printf("Sorry, the number you guessed was too high.");
    printf("The number was %d", randNumber);
}

elif (answer < randNumber) {
    printf("Sorry, the number you guessed was too low.");
    printf("The number was %d", randNumber);
}