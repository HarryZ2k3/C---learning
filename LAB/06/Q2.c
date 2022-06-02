//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
#define N 10
int main()
{
    char words[MAXSIZE][N];
    for (int i=0;i<MAXSIZE;i++)
    {
        gets(words[i]);
    }
    int max = strlen(words[0]);
    for (int i=0;i<MAXSIZE;i++)
    {
        if (strlen(words[i]) <= strlen(words[i+1]))
            max =strlen(words[i+1]);
        else
            max =strlen(words[i]);
    }
    printf("%d",max);
    return 0;
}
