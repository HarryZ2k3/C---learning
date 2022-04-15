//ITITWE21039_Huynh Phuong Dai
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    srand (time(NULL)); // setup the srand using the current time of the computer to add a pseudo randomness element
    int toss,time=100;
    int tailcount = 0;
    int headcount = 0;
    while (time!=0) // roll the coin 100 times, random num gen 0 for tail, 1 for head
    {
        toss = (1+ rand() %2) -1;
        if (toss==0)
        {
            tailcount++;
        }
        else
            headcount++;
        --time;
    }
    printf("Head: %d\n",headcount);
    printf("Tail: %d",tailcount);
    
    return 0;
}