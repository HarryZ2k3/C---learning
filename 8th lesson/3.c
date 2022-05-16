//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
void doubling (int *number)
{
    *number *=2;
}
int main()
{
    int y=6;
    int *yPtr;
    yPtr = &y;
    printf("Adress of y and its pointer:\n%p %p\n",&y,yPtr);
    printf("Value of y and its pointer:\n%d %d\n",y,*yPtr);
    *yPtr = 5;
    printf("Adress of y and its pointer:\n%p %p\n",&y,yPtr);
    printf("Value of y and its pointer:\n%d %d\n",y,*yPtr);
    doubling(&y);
    printf("doubling\n%d",y);
    printf("Adress of y and its pointer:\n%p %p\n",&y,yPtr);
    printf("Value of y and its pointer:\n%d %d\n",y,*yPtr);
    return 0;
}