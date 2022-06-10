//Huynh Phuong Dai - ITITWE21039

#include <stdio.h>
struct CStudent
{
    int ID;
    char name[30];
    float Cal1,Cal2,Cal3,GPA;
};


void printStudent(struct CStudent Student[3])
{
    for (int i=0;i<3;i++)
    {
        Student[i].GPA = (Student[i].Cal1 + Student[i].Cal2 + Student[i].Cal3)/3;
        printf("\nNAME: %c",Student[i].name);
        printf("\tCal1: %.2f \t",Student[i].Cal1);
        printf("\tCal2: %.2f \t",Student[i].Cal2);
        printf("\tCal3: %.2f \t",Student[i].Cal2);
        printf("\tID : %d \t",Student[i].ID);
        printf("GPA: %.2f",Student[i].GPA);
    }

}
int main()
{
    //For problem a and b
    FILE *fPtr;
    struct CStudent Student[3];
    if( (fPtr=fopen("Student.txt","w"))==NULL)
    {
        puts("File cound not be opened\n");
    }
    else
    {
    //getting the student info into the master file "student.exe"
        for (int i=0;i<3;i++)
        {
            printf("\nInput Name of student number %d\n",i+1);
            scanf("%s",&Student[i].name);
            fscanf(fPtr,"%s",&Student[i].name);
            printf("Input ID of student number %d\n",i+1);
            scanf("%d",&Student[i].ID);
            fscanf(fPtr,"%d",&Student[i].ID);
            printf("Input their Cal1 grade\n");
            scanf("%f",&Student[i].Cal1);
            fscanf(fPtr,"%f",&Student[i].Cal1);
            printf("Input their Cal2 grade\n");
            scanf("%f",&Student[i].Cal2);
            fscanf(fPtr,"%f",&Student[i].Cal2);
            printf("Input their Cal3 grade\n");
            scanf("%f",&Student[i].Cal3);
            fscanf(fPtr,"%f",&Student[i].Cal3);
            if (i<3)
            {
                printf("Next Student");
                
            }
            else 
                break;
        }
        //print to terminal (problem a)
        printStudent(Student);
        //write into the master file
        fprintf(fPtr,"THIS IS THE MASTERFILE\n");
        for (int i=0;i<3;i++)
        {
            Student[i].GPA = (Student[i].Cal1 + Student[i].Cal2 + Student[i].Cal3)/3;
            fprintf(fPtr,"\nNAME: %c",Student[i].name);
            fprintf(fPtr,"\tCal1: %.2f \t",Student[i].Cal1);
            fprintf(fPtr,"\tCal2: %.2f \t",Student[i].Cal2);
            fprintf(fPtr,"\tCal3: %.2f \t",Student[i].Cal2);
            fprintf(fPtr,"\tID : %d \t",Student[i].ID);
            fprintf(fPtr,"GPA: %.2f",Student[i].GPA);
        }
    fclose(fPtr);
    }
    if( (fPtr=fopen("StudentSorted.txt","w"))==NULL)
    {
        puts("File cound not be opened\n");
    }
    else
    {
        //sorting in increasing number
        struct CStudent Temp[1];//a temporary struct to store variables
        for (int i=0;i<3;i++)
        {
            Temp[0].ID=Student[i].ID;
            Temp[0].Cal1=Student[i].Cal1;
            Temp[0].Cal2=Student[i].Cal2;
            Temp[0].Cal3=Student[i].Cal3;
            if (Student[i+1].ID < Student[i].ID)
            {
                //Student[i]=Student[i+1];
                Student[i].ID=Student[i+1].ID;
                Student[i].Cal1=Student[i+1].Cal1;
                Student[i].Cal2=Student[i+1].Cal2;
                Student[i].Cal3=Student[i+1].Cal3;
                
                //Student[i+1]=Temp[0];
                Student[i+1].ID=Temp[0].ID;
                Student[i+1].Cal1=Temp[0].Cal1;
                Student[i+1].Cal2=Temp[0].Cal2;
                Student[i+1].Cal3=Temp[0].Cal3;
            }
            else
                continue;
        }
        fprintf(fPtr,"This is the Sorted file\n");
        //Enter the new sorted variable into a new sfile
        for (int i=0;i<3;i++)
        {
            Student[i].GPA = (Student[i].Cal1 + Student[i].Cal2 + Student[i].Cal3)/3;
            fprintf(fPtr,"\nNAME: %c",Student[i].name);
            fprintf(fPtr,"\tCal1: %.2f \t",Student[i].Cal1);
            fprintf(fPtr,"\tCal2: %.2f \t",Student[i].Cal2);
            fprintf(fPtr,"\tCal3: %.2f \t",Student[i].Cal2);
            fprintf(fPtr,"\tID : %d \t",Student[i].ID);
            fprintf(fPtr,"GPA: %.2f",Student[i].GPA);
        }
    }
    return 0;
}