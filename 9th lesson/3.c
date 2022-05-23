//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
#include <string.h>
#define N 5
#define MAXSIZE 100
int main()
{
    char w[N][MAXSIZE] = {"The birb", "a cat", "The meaning of life", "Funny ;3"};
    for (int i=0;i<N;i++)
    {
        if(w[i][0]=='T' && w[i][1]=='h')
        {
            printf("\ntrue ");
            printf("%s",w[i]);
        }
        else 
            printf("\nfalse");
    }

    return 0;
}