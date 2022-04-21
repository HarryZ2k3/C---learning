//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>
#define ThisYear 2022
#define Max_HR 220
float heart_rate(int);

int main()
{
    int d, m, y;//intialize variable
    printf("Enter your birthday (d/m/y):\n");
    scanf("%d %d %d",&d,&m,&y);//input from user
    int age =ThisYear-y;//calculate the age of the user
    printf("at the age of %d, Target heartrate is %.2f BPM to %.2f BPM",age,heart_rate(age));
    return 0;
}

float heart_rate(int age)
{
    int max_hr= Max_HR - age;
    float target_hr_above;//target above
    float target_hr_bellow;//target bellow
    return target_hr_above=max_hr*0.85,target_hr_bellow=max_hr/2;
}