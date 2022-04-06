//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

void printDigit(int N) //function to print out indivual digit of the number
{
    int r;
    if(N==0)
    {
        return;
    }
    r=N%10;
    printDigit(N/10);
    printf("%d^3 ",r);
}

void ArmstrongCheck(int A) //main function to check Armstrong number
{
    int altnum,check=0;
    if(A==0)
    {
        printf("INVALID NUMBER~! >:3");
        return;
    }
    altnum=A;//assign the number to an alternative variable
    while (altnum != 0) 
    {
        int temp = altnum%10; //cycle through and take the last digit of the alternative variable mention before then assign it to a temp variable act as a separate digit
        check+=temp*temp*temp; //start adding the numbers into the variable check.
        altnum/=10;//start over with the next digit
    }
    if(check==A) //if the variable check is equal to the originnal number => it's an Armstrong
    {
        printf("It's an Armstrong number~! ");
        printf("Sum of (");
        printDigit(A);
        printf(") is equal to %d",A);
        
    }
    else //if it's not, it's not an Armstrong
    {
        printf("It's not an Armstrong number :(");
    }
}

int main()
{
    int num;
    printf("Enter the number to check: ");//data entry point
    scanf("%d",&num);//scan
    ArmstrongCheck(num);//intialize the function
    return 0;
}