//Huynh Phuong Dai - ITITWE21039

#include <stdio.h>

int roundToInterger(double);
int roundToTenth(double);

int main()
{
    double num;
    printf("enter the number\n ");
    scanf("%f",&num);
    printf("%f%f",roundToInterger(num),roundToTenth(num));//print out the result
    return 0;
}

int roundToTenth(double x)
{
    x=(int)x;//force number in to an integer
    int last_digit;
    int digit = log10(x); //find the number of digit of the interger
    last_digit = x/pow(10,digit); // find the last digit
    if(last_digit > 0)
        x= (x-last_digit);// remove the last digit
        return x;
}

int roundToInterger(double x)
{
    x=(int) x;//force the number into an interger
    return x;
}