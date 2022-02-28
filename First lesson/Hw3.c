#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    while (n==0)
        {
            int temp = 10;
            n= n % temp;
            printf("%d\t",n);
            temp *=10;
        }

    return 0;
}