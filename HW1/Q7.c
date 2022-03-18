//Huynh Phuong Dai ITITWE21039
#include <stdio.h>

int main()
{
    int a=0;
    int b,c,d;
    printf("A\tA+3\tA+6\tA+9\n");
    for(int i=1;i<=5;i++)
    {
        a=+7*i;
        b=a+3;
        c=a+6;
        d=a*9; // mistake in the question i guess???
        printf("%d\t%d\t%d\t%d\n",a,b,c,d);
    }
    return 0;
}