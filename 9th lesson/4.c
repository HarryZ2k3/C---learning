//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
#include <string.h>
#define N 5
#define MAXSIZE 100
int main()
{
    char w[N][MAXSIZE];
    for (int i=0;i<N;i++)
    {
        gets(w[i]);
    }
    for (int i=0;i<N;i++)
    {
        int n = strlen(w[i]);
        if(w[i][n-1]=='n' && w[i][n-2]=='o' && w[i][n-3]=='i' && w[i][n-2]=='t')
        {
            printf("True %s",w[i]);
        }
        else 
            printf("false");
    }

    return 0;
}