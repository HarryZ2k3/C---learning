//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

int main()
{
    double sales[19];
    printf("Enter sales datta: \n");
    for(int i=0;i<20;i++)
    {
        double temp;
        scanf("%d",&temp);
        sales[i]= temp;
    }
    for(int i=0;i<20;i++)
    {
        printf("%d ",sales[i]);
    }
    return 0;
}