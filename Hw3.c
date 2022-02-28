#include <stdio.h>

int main();
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n)
    while (n==0)
        {
            temp = 10;
            n=%temp;
            printf("%d\t",n);
            temp *=10;
        }

    return 0;
}