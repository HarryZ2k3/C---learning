//ITITWE21039_Huynh Phuong Dai

#include <stdio.h>
long int GetProd(int x)
{
    int temp=0 ,prod =0;
    if (x==1 || x==2) // base case
        return x;
    else
    {
        prod = GetProd(x-2)*x; // general case recursion to get the product from intial value negative -2 until it meets the number 1 or 2 and then end 
        return prod;
    }
}
int main()
{
    int n;
    printf("Enter a interger: "); //intialize the number from the user
    scanf("%d",&n);
    printf("Product = %ld",GetProd(n));
    return 0;
}