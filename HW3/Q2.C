//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>
int toQualityPoints(int avg);//function protype

int main()
{   
    int avg =0;
    printf("Enter the student's average: \n"); // input from user
    scanf("%d",&avg); // assign value to variable avg
    printf("Quality point of the student is: %d",toQualityPoints(avg)); // return value Qualitypoint
    return 0;
}

int toQualityPoints(int avg)//function definition
{
    int Qual; // set a variable for the output 
    if (avg <60)  //If its less than 60 return the value as an interger type varible equal to 1
        return 0;
    if (60<= avg && avg<70) //If its less than 70 and larger or equal than 60 return the value as an interger type varible equal to 1
        return 1;
    if (70<= avg && avg<80) //If its less than 80 and larger or equal than 70 return the value as an interger type varible equal to 1
        return 2;
    if (80<= avg && avg<90) //If its less than 90 and larger or equal than 80 return the value as an interger type varible equal to 1
        return 3;
    else  // If none of the above (aka more than 90 and less or equal to 100 )
        return 4;

}