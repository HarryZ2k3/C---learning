//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main(void)
{
    FILE *cfPtr;
    FILE *transaction;
    

    if ((cfPtr = fopen("client.txt","w"))==NULL)
    {
        puts("File could not be opened");
    }
    else 
    {
        puts("Enter the account, name, and balance");
        puts("Enter EOF to end input");
        printf("%s","?");
    
    unsigned int account;
    char name[30];
    double balance;

    scanf("%d%29s%lf",&account, name, &balance);
    while (!feof(stdin))
    {
        fprintf(cfPtr,"%d %s %f\n",account, name, balance);
        printf("%s","? ");
        scanf("%d%29s%f",&account, name, &balance);
    }
    fclose(cfPtr);
    }

//11.7
    if ((cfPtr = fopen("dollar_amount.txt","w"))==NULL)
    {
        puts("File could not be opened");
    }
    else 
    {
        puts("Enter the account and dollar amount");
        puts("Enter EOF to end input");
        printf("%s","? ");
    
    unsigned int account_name;
    double available_balance;

    scanf("%d%29s%lf",&account_name, &available_balance);
    while (!feof(stdin))
    {
        fprintf(transaction,"%d %.2f\n",account_name, available_balance);
        printf("%s","? ");
        scanf("%d%29s%lf",&account_name, &available_balance);
    }
    fclose(transaction);
    }
}
