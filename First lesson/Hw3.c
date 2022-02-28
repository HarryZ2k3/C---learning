#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp;
    printf("Enter your number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        temp = n %10;
        n = n/10;
        
        printf("%d\t",temp);
    }
    return 0;
}