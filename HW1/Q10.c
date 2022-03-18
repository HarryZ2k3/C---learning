//Huynh Phuong Dai - ITITWE20139
#include <stdio.h>

int main ()
{
    printf("Here are the two digit numbers that are divisible by 17: ");
    for (int i=1;i<100;i++)
    {
        if(i%17==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}