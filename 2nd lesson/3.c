//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main()
{
    int x,y,z,max,min;
    printf("Enter three different intergers: ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    printf("Sum is %d\n",x+y+z);
    printf("Product is: %d\n",x*y*z);
    max=x;
    min=x;
    if (max<y)
    {
        max=y;
    }
    if (max<z)
    {
        max=z;
    }
    printf("Biggest is %d\n",max);
    if (min>y)
    {
        min=y;
    }
    if (min>z)
    {
        min=z;
    }
    printf("Smallest is %d",min);
    return 0;
    
}