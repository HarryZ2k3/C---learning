//Huynh Phuong Dai - ITITWE21039
/* check the interger if it's divisible by any number between 2 and that interger divided by 2 
*/
#include <stdio.h>
#include <math.h>

int main ()
{
    int n,i,check=1;
    printf("enter your number: ");
    scanf("%d",&n);
    //input the prime number n
    for (i=2;i<=sqrt(n);i++)
    {
        //if n is divisible by any number between 2 and n/2 it's not a prime number
        if(n%i==0)
        {
            check = 0;
            break;
        }
    }
    if (n<=1)
    {
        check = 0;
    }
    if (check ==1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}
