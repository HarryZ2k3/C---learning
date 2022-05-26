//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>

int main()
{
    char a[30];
    gets(a);
    if (a[0] == 'T' && a[1] == 'h')
        printf("true");
    else 
        printf("false");
    printf("\n%s",a);
    return 0;
}