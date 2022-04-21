//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>
void checkpythag(int side1,int side2,int side3)
{
    int temp_hypo=0;//setup the hypotenuse variable
    int temp_result;
    if (side1 >= side2 && side1 >= side3)
    {
        temp_hypo = side1*side1;//set hyptenuse as the largest number of the tree sides
        temp_result =  (side2*side2)+(side3*side3);//calculation to check the hyptenuse
        if(temp_result==temp_hypo)//if both are equal, then it's a pythagorean triplet
            printf("The three sides are the Pytagorean triple");
        else
            printf("The three sides are not the Pytagorean triple");
    }
    if (side2 >= side1 && side2 >= side3)
    {
        temp_hypo = side2*side2;//set hyptenuse as the largest number of the tree sides
        temp_result =  (side1*side1)+(side3*side3);//calculation to check the hyptenuse
        if(temp_result==temp_hypo)//if both are equal, then it's a pythagorean triplet
            printf("The three sides are the Pytagorean triple");
        else
            printf("The three sides are not the Pytagorean triple");
    }
    if (side3 >= side1 && side3 >= side2)
    {
        temp_hypo = side3*side3;//set hyptenuse as the largest number of the tree sides
        temp_result =  (side1*side1)+(side2*side2);//calculation to check the hyptenuse
        if(temp_result==temp_hypo)//if both are equal, then it's a pythagorean triplet
            printf("The three sides are the Pytagorean triple");
        else
            printf("The three sides are not the Pytagorean triple");
    }
}
int main()
{   
    int s1,s2,s3;
    printf("Enter the 3 sides of a triagle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    checkpythag(s1,s2,s3);
    return 0;
}