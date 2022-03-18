//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main()
{
//a)
    int x=5,y=8;
    if (x==5)
    {
        if (y==8)
        {
            printf("@@@@@\n");
        }
        else
        {
            printf("#####\n");
        }
        printf("$$$$$\n");
        printf("&&&&&\n"); 
    }
//b)
    y=8;
    if (x==8)
    {
        if (y==5)
        {
            printf("@@@@@\n");
        }
        else
        {
            printf("#####\n");
            printf("$$$$$\n");
            printf("&&&&&\n"); 
        }
    return 0;
    }
//c)
    y=8;
    if (x==8)
    {
        if (y==5)
        {
            printf("@@@@@\n");
        }
        else
        {
            printf("#####\n");
            printf("$$$$$\n");
        }
        printf("&&&&&\n");
    return 0;
    }
//d)
    y=7;
    if (x==8)
    {
        if (y==5)
        {
            printf("@@@@@\n");
        }
        else
        {
            printf("#####\n");
        }
        printf("$$$$$\n");
        printf("&&&&&\n");
    return 0;
    }
}