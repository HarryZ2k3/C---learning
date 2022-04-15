//ITITWE21039 - HUYNH PHUONG DAI
#include <stdlib.h>
#include <stdio.h>

//a fix
double cube(float);

double cube(float number)
{   
    return number * number * number;
}

//b fix
int randomNumber = rand();

//c fix 
double y = 123.45678;
double x;
x = y;
printf("%f\n", x);

//d fix
double square(double number)
{
    return number * number;
}

//e fix
int sum(int n)
{
if (0 == n) {
    return 0;
    }
    else {
        return n + sum(n-1);
    }
}

