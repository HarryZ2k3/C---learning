#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp,remp,reverse=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    while(n!= 0)
    {
        remp=n%10;
        reverse=reverse*10+remp;
        n/=10;
    }

    while (reverse!=0)
    {
        temp = reverse %10;
        reverse = reverse/10;
        printf("%d\t",temp);
    }
    return 0;
}