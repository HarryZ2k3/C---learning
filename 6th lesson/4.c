//Huynh Phuong Dai - ITITWE21039
//Number guesser

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    srand (time(NULL));
    int number;
    number = 1+ rand() %1000;
    printf("Here we have a number between 1-1000, enter your first guess\n");
    scanf("%d",&guess);
    while (guess!=number)
    {
        if (guess < number)
        {
            printf("number is too low, guess again :3 \n");
            scanf("%d",&guess);
        }
        else if(guess >number)
        {
            printf("number is too high, guess again :3 \n");
            scanf("%d",&guess);
        }
    }
    printf("your guess is correct~! Congratulation");
    return 0;
}