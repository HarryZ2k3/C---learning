//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <math.h>

int main()
{
    int x=0;
    int position=1;
    printf("Enter your five digits number: ");
    scanf("%d",&x);
    if (x<10000)
    {
        printf("This number is not a five-digit number.");
    }
    else
    {
        int temp,remp,reverse=0;
    while(x!= 0)
    {
        remp=x%10;
        reverse=reverse*10+remp;
        x/=10;
    }

    while (reverse!=0)
    {
        temp = reverse %10;
        reverse = reverse/10;
        printf("%d\t",temp);
    }
    }
    

    return 0;
}