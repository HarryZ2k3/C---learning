#include <stdio.h>

int main ()
{
    printf("number\tsquare\tcube\n");
    for (int i=0;i<11;i++)
    {
        printf("%d\t",i);
        printf("%d\t",i*i);
        printf("%d\n",i*i*i);
    } 
    return 0;

}