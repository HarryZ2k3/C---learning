//Huynh Phuong Dai - ITITWE21039

#include <stdio.h>

int main()
{
    int num=0,sum;
    int numof;
    float avg;
    do
    {   
        printf("Enter your numbers: ");
        scanf("%d",&num);
        if (num!=9999)
            sum += num;
            numof++;
    }
    while (num!=9999);
    {
        avg = sum/numof;
        printf("Average is %.2f",avg);
    }
    return 0;
}