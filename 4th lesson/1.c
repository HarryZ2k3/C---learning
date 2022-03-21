//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main ()
{
    char worker;
    int fixed = 40000;
    int h,Hsal=15;
    int ComSal = 250;
    int PieceSal = 10,prod;
    float salary,gross;
    printf("Enter the type of worker(M for Managers/H for Hourly/C for Comission/P for Piece: \n");
    scanf("%c",&worker);
    
    switch (worker)
    {
    case 'M':
        salary = fixed;
        printf("Salary is :$%.2f",salary);
        break;
    case 'H':
        printf("enter the hour the worker did:\n ");
        scanf("%d",&h);
        if(h<=40)
            salary = h*Hsal;
        else
            salary = h*(1.5*Hsal);
        printf("Salary is :$%.2f",salary);
        break;
    case 'C':
        printf("Enter the gross weekly sale of the worker:\n ");
        scanf("%f",&gross);
        salary = 250 + (gross*5.7)/100;
        printf("Salary is :$%.2f",salary);
        break;
    case 'P':
        printf("Enter the ammount of product the worker made:\n ");
        scanf("%d",&prod);
        salary = prod*PieceSal;
        printf("Salary is :$%.2f",salary);
        break;
    default:
        printf("invalid type!");
        break;
    }
    return 0;
}