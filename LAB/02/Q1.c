//ITITWE21039_Huynh Phuong Dai

#include <stdio.h>
int GetSum (int x)
{
    int sum;
    while(x!=0) //go through every number of the interger and adding it into a variable name Sum
    {
        sum += x%10;
        x/=10;
    }
    return sum; // return the interger sum 
}

int main()
{   
    int a;
    printf("Enter a interger: "); //intialize the number from the user
    scanf("%d",&a);              
    printf("%d",GetSum(a));//print the number out :3
    return 0;
}

