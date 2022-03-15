//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the first integer \n");
    scanf("%d",&a);
    printf("Enter the second integer \n");
    scanf("%d",&b);
    if (b%a==0)
    {
        printf("The first interger is a multiple of the second integer!");
    }
    else
    {
        printf("The first interger is NOT a multiple of the second integer!");
    }
    return 0;
}