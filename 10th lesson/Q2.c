//Huynh Phuong Dai - ITITWE21039
//question 2 quiz

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char val[5];
    char *eptr;
    printf("enter 5 floating point number");
    for (int i=0;i<5;i++)
    {
        gets(val);
    }
    //convert each into double values
    for (int i=0;i<5;i++)
    {
        double str= strtod(val,&eptr);
        printf("%f ",str);
    }
    return 0;
}
