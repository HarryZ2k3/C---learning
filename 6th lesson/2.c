//Huynh phuong dai - ititwe21039
//this code demostrates the use of random number generator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i;
    int n;
    i = rand(); // any ran number
    printf("%f",i);
    i = 1 + (rand()%n); // any ran number from 1 to n
    printf("%f",i);
    return 0;
}
