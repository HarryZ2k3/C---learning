//Huynh Phuong Dai - ITITWE21039
/* check the interger if it's divisible by any number between 2 and that interger squareroot
*/
#include <stdio.h>
#include <math.h>
int isPrime(int);

int main ()
{
    for (int i=2;i<=10000;i++)
        if (isPrime(i) == 1)
            printf("%d ",i);
    return 0;
}

int isPrime(int x)
{
    for (int i=2;i<=sqrt(x);i++)
    {
        //if n is divisible by any number between 2 and sqrt of it it's not a prime number
        if(x%i==0)
        {
            return 0;
            break;
        }
    }
    if (x<=1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
