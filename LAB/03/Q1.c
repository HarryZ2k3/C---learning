//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>
void printDiamond(int n)
{
    int i,j;//intialize the variable i,j to use for loop
    for(i=1;i<=n;i++)//loop until i=n
    {
	    for(j=1;j<=n-i;j++)
        //loop to print the spaces before the diamond 
        //E.g: n=4, row one will have 4-row = 4-1 =3 spaces before
        {
            printf(" ");
        }
 
        for(j=1;j<=i*2-1;j++)
        //loop to print the diamond shape as the row_number*2-1.
        // E.g: n=4, row 1 will print 1 star, row two will print 3 stars as (2*2-1=3)
                
        {
            printf("*");
        }
        printf("\n");
        //go down 1 line after each row
	    
    }            
    //same algorithm but in reverse
	for(i=n-1;i>0;i--)
    //Loop from n-1 to 1 wit i--; 
    //so the total number of row will be the number of row above ^^ plus n-1. So in total equal to n*2-1
    {
	    for(j=1;j<=n-i;j++)// same loop for the intial spaces
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)//same loop as printing the diamond shape
        {
            printf("*");
        }
        printf("\n");
    }  
}
int main()
{
    int n;
    printf("INPUT: ");
    scanf("%d",&n);
    printDiamond(n);
    return 0;
}