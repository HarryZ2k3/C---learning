//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    scanf("%s",a);
    if (a[0] == 'T' && a[1] == 'h')
        printf("true");
    else 
        printf("false");
    printf("\n%s",a);
    return 0;
}