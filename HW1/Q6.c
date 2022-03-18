//Huynh Phuong Dai - ITITWE21039
/*
The algorithm works by constantly running a while loop and checking for the input for -1 to stop
simply take the input, run it through the calculation of salary = $200 + 9%* sales and outputting the result 
*/
#include <stdio.h>

int main()
{
    int defaultsal = 200;
    double sales = 0, salary = 1;
    int check;
    while(salary !=0)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf",&sales);
        if(sales == -1)
        {
            break;
        }
        salary = (defaultsal + (sales*9)/100);
        printf("Salary is: $%.2lf\n",salary);
        printf("\n");
    }
    return 0;
}