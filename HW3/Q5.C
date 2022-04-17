//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

int main()
{
    double sales[20];//array declaration
    int i;
    printf("Enter sales data: \n");// use input
    for(i=0;i<20;i++) //assigning number in the array
    {
        scanf("%lf",&sales[i]);
    }

    printf("The contentes of sales are: \n");
    for(i=0;i<20;i++)//print out the variable in the array
    {
        printf("%.2lf ",sales[i]);
    }
    return 0;
}