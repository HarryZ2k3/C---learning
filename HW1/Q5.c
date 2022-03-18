//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main()
{
    int total=0,i,j;
    for (i=2;i<=1000;i++)
    {
        for (j=2;j<=(i/2);j++)
        {
            if (i%j==0)
            {
                j=i;
                break;
            }
        }
        if(j!=i)
        {
            total+=i;
        }
    }
    printf("%d",total);
    return 0;
}