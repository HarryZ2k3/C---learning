//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <stdlib.h>

struct CStudent
{
    char Name[50];
    char ID[20];
    int cal2;
    int OOP;
    int C;
};

float maxGPA (struct CStudent Student[3])
{
    float maxGPA=0;
    for (int i = 0; i<3;i++)
    {    
        maxGPA  = (Student[i].cal2 + Student[i].C + Student[i].OOP)/3;
        if (maxGPA < (Student[i+1].cal2 + Student[i+1].C + Student[i+1].OOP)/3)
        {
            maxGPA = (Student[i+1].cal2 + Student[i+1].C + Student[i+1].OOP)/3;
        }
    }
    return maxGPA;
}

void printStudent(struct CStudent Student[3])
{
    float GPA;
    for (int i=0;i<3;i++)
    {
        GPA = (Student[i].cal2 + Student[i].C + Student[i].OOP)/3;
        
        printf("\nNAME: %s",Student[i].Name);
        printf("\tID : %s \t",Student[i].ID);
        printf("GPA: %.2f",GPA);
    }

}

int main(void)
{
    struct CStudent CStudent[3];
    for (int i=0;i<3;i++)
    {
        printf("\nInput Name of student number %d\n",i+1);
        scanf("%s",&CStudent[i].Name);
        printf("Input ID of student number %d\n",i+1);
        scanf("%s",&CStudent[i].ID);
        printf("Input their Cal2 grade\n");
        scanf("%d",&CStudent[i].cal2);
        printf("Input their OOP grade\n");
        scanf("%d",&CStudent[i].OOP);
        printf("Input their C grade\n");
        scanf("%d",&CStudent[i].C);
        if (i<2)
        {
            printf("Next Student");
        }
        else 
            break;
    }
        printStudent(CStudent);
        printf("\nHighest GPA is %.2f",maxGPA(CStudent));
    return 0;
}

