//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

int main()
{
    int i=0;
    do
    {
        //this do...while loop print out the numbers from 0 to 4
        printf("%i\t",i);
        i++;
    } while (i<5);
    i=0;
    //transform to while loop only:
    printf("\n");
    while (i<5)
    {
        printf("%i\t",i);
        i++;
    }
        //same premise, different loop
    return 0;
}