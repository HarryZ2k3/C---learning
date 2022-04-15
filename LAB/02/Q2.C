//ITITWE21039_Huynh Phuong Dai

#include <stdio.h>
#include <math.h>
void GetProd(int x)
{
    int temp;
    while (x%2==0) // I notice that there is a general form product will equal to 2 times the number of the integer can be divided by 2 then times several prime numbers
    {
        printf("%d ",2 ); // this is the code to get the 2 to the power of the number of time the integer can be divided by 2
        x/=2;
    }
    for (int i=3;i<=sqrt(x);i+=2) //run through all of the prime nunmber from 3 to integer in question
    {
        while (x%i==0) //since the integer is a odd number, we'll check if it can be devided by which number to be the last several prime number
        {
            printf("%d ",i);
            x/=i;
        }
    }
    if (x>2)
        printf("%d ",x); //this for the case of the integer is a prime number larger than 2
    
    
}
int main()
{
    int n;
    printf("Enter a interger: "); //intialize the number from the user
    scanf("%d",&n);
    printf("%d = ",n);
    GetProd(n); //run through the void 
    return 0;
}