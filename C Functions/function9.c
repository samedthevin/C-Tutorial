#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Guess the Number Game!
int main() {
    int guessNumber, randomNumber, count = 0, score = 100;
    srand(time(NULL));// We are declaring it to make not equal random numbers!!
    randomNumber = (rand() % 100) + 1;
    
    while (guessNumber!=-1) {
        printf("Enter a number between 1 and 100 (-1 to quit): ");
        scanf("%d", &guessNumber);
        
        if (guessNumber == -1) {
            break;
        }
        
        if (guessNumber < 0 || guessNumber > 100) {
            printf("Invalid Number\n");
            continue;
        }
        
        count++; // Increment count for each valid guess
        
        if (guessNumber == randomNumber) {
            printf("Congratulations! You found the number in %d tries.\n", count);
            break;
        } else {
            if (guessNumber > randomNumber) {
                printf("You must decrease your number!\n");
            } else {
                printf("You must increase your number!\n");
            }
            score -= 10;
        }
    }
    
    printf("Your score is %d\n", score<0 ? 0: score);
    return 0;
}
