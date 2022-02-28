#include <stdio.h>

int main()
{
    int x,y,z;
    int sum;
    
    printf("Enter your first interger x= \n");
    scanf("%d", &x);
    printf("Enter your 2nd interger y= \n");
    scanf("%d", &y);
    printf("Enter your 3rd interger z= \n");
    scanf("%d", &z);
    sum = x+y+z;
    printf("Sum of x,y,z is %d\n",sum);

    return 0;
}+