//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main()
{
    FILE *cfPtr;

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
        fprintf("%s","? ");
        scanf("%d%29s%lf",&account, name, &balance);
    }
    fclose(cfPtr);
    }
}
