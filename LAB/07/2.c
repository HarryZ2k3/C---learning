//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Person 
{
    char ID[5];
    char firstname[21];
    char lastname[21];
    int age;
    int phone[10];
};
void IDsearch(struct Person pp[5])
{
    printf("Enter ID: \n");
    char checkID[5];
    scanf("%s",checkID);
    int check=0;
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if (pp[i].ID[j] == checkID[j])
                check++;
        }
        if (check ==5)
        {
            printf("ID: %s\n",pp[i].ID);
            printf("First name: %s\n",pp[i].firstname);
            printf("Last name: %s\n",pp[i].lastname);
            printf("Age: %d\n",pp[i].age);
            printf("Phone number %s\n",pp[i].phone);
        }
        else
        {
            check=0;
            continue;
        }
    }
}
int main()
{
    struct Person pp[5];
    //5 staff member information enter
    for (int i = 0; i<5;i++)
    {
        printf("\nInput The First Name of staff member number %d: ",i+1);
        scanf("%s",&pp[i].firstname);
        printf("\nInput Their Last name: ");
        scanf("%s",&pp[i].lastname);
        printf("\nInput Their staff ID (with spaces between the characters): ");
        scanf("%s",pp[i].ID);
        printf("\nEnter their age: ");
        scanf("%d",&pp[i].age);
        printf("\nEnter their phone number: ");
        for (int j=0;j<10;j++)
        {
            scanf("%d",&pp[i].phone[j]);
        }
    }
    //Staff search via ID
    IDsearch(pp);
    //

    return 0;
}

