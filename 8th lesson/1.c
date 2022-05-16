//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>

int main()
{
    printf("original \t pointer\n");
    int a=7;
    int *aprt;
    aprt = &a;
    printf("before\n%d \t\t %d",a,*aprt);
    *aprt = 9;
    printf("\nafter\n%d \t\t %d",a,*aprt);
    return 0;
}