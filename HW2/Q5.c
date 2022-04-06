//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>
int ceil(float);

int main()
{
    float a;
    printf("Enter your number that you want to round: ");//data entries
    scanf("%f",&a);
    printf("Rounding of %f: %d",a,ceil(a));//rounding process
    return 0;
}

int ceil(float A)
{
    int temp = A; //set A to a temporary variable
    if (A>=temp+0.5)// if a is smaller that 0.5 (or in my case it's less that A rounded down +0.5)
    {
        A++; //A is plus 1 so as when forced to become interger it will round up compared to the original number
    }
    return (int)A;
}