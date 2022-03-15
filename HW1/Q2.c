//HUYNH PHUONG DAI - ITITWE21039
#include <stdio.h>

int main()
{
    float w,h,bmi;
    printf("Enter your weight kilogram \n");
    scanf("%f",&w);
    printf("Enter your height in meters \n");
    scanf("%f",&h);
    bmi = w / (h*h);
    printf("Your BMI is: %f",bmi);
    return 0;
}