//ITITWE21039 - HUYNH PHUONG DAI
//Pre-increment: Before assigning the value to the variable, the value is incremented by one.
//post-increment: After assigning the value to the variable, the value is incremented
#include <stdio.h>

int main()
{
    int x=10,a;
    a=++x;
    printf("Pre-increment values\n");
    //value of a changes
    printf("a=%d\n",a);
    //Value of x change BEFORE a=++x;
    printf("x=%d\n",x);
    int y=10,b; 
    b=x++;
    printf("Post-increment values\n");
    //Value of b doesn't change
    printf("b=%d\n",b);
    //value of x change AFTER b=x+++;
    printf("x=%d\n",y);
    return 0;
}