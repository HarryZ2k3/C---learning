//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 5

typedef struct
{
    char ID[5];
    char firstname[21];
    char lastname[21];
    int age;
    char phone[10];
}Person;

void IDsearch(Person *pp,int size);
void printstaffinfo(Person *pp,int index);
void HighestAge(Person *pp);
void LowestAge(Person *pp);

int main()
{
    Person pp[SIZE];
    //5 staff member information enter
    for (int i = 0; i<SIZE;i++)
    {
        printf("Employee number %d\n",i+1);
        printf("Input Their First name: ");
        scanf("%s",pp[i].firstname);
        printf("Input Their Last name: ");
        scanf("%s",pp[i].lastname);
        printf("Input Their staff ID: ");
        scanf("%s",pp[i].ID);
        printf("Enter their age: ");
        scanf("%d",&pp[i].age);
        printf("Enter their phone number: ");
        scanf("%s",pp[i].phone);
        
    }
    //Staff search via ID
    IDsearch(pp,SIZE);
    //
    //Lowest/highest
    HighestAge(pp);
    LowestAge(pp);

    return 0;
}

void IDsearch(Person *pp,int size)
{
    printf("Enter ID: \n");
    char checkID[5];
    scanf("%s",checkID);
    int check=0;
    for (int i=0;i<SIZE;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (checkID[j] == pp[i].ID[j])
            {
                check++;
            }
            else
                check=0;
        }
        if (check==0)
        {
            continue;
        }
        else 
            printstaffinfo(pp,i);
    }
}


void printstaffinfo(Person *pp,int index)
{
    printf("FIRST NAME: %s\n",pp[index].firstname);
    printf("LAST NAME: %s\n",pp[index].lastname);
    printf("ID: %s\n",pp[index].ID);
    printf("AGE: %d\n",pp[index].age);
    printf("PHONE NUMBER: %s\n",pp[index].phone);
}

void HighestAge(Person *pp)
{
    int index=0;
    int highest = pp[0].age;
    for (int i=1;i<SIZE;i++)
    {
        if (highest < pp[i].age)
        {
            highest = pp[i].age;
            
        }
    }
    printf("Highest age is %s at %d years old\n",pp[index].firstname,highest);

}

void LowestAge(Person *pp)
{
    int index=0;
    int lowest = pp[0].age;
    for (int i=1;i<SIZE;i++)
    {
        if (lowest > pp[i].age)
        {
            lowest = pp[i].age;
            index = i;
        }
    }
    printf("Lowest age is %s at %d years old\n",pp[index].firstname,lowest);

}