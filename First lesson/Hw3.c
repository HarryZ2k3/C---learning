#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    while (n==0)
        {
            int temp;
            temp = n%10;
            printf("%d\t",temp);
        }

    return 0;
}