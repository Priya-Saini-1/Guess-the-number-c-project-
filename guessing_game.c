#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
   
    int random, n;
    int attempts = 0;
    srand(time(NULL));

    printf("Hey! Welcome to Guess the number game\nAre you ready? Let's start\n");
    random = rand() % 100 + 1;
    do{
        printf("\nGuess a number between(1 to 100): ");
        scanf("%d", &n );
        attempts++;
goto l1;
        if( n < random ){
            printf("Oops! You missed, try guessing a larger number. \n");
        } 
        else if( n > random ){
            printf("\nYou missed ! try guessing a smaller number.");
        }
        else { 
            printf("\nHURREY! You nailed it in just %d attempts .", attempts);
        }

    }while( n != random);
    printf("\nYOU ARE REALLY GOOD AT GUESSING.");
    printf("\nCan't wait to play with you again.");
    printf("\n\n[Developed by: Priya.");
    l1:
    return 0;

}