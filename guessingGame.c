#include <stdio.h>
#include <stdlib.h>

int main (){

    int secretNumber = rand();
    int guess;
    int guessCount = 0;
    int guessLimit = 10;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else{
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("You Lost!\n");
    } else{
    printf("You Win!\n");
    }
    return 0;
}