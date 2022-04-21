//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>
#define ThisYear 2022
int main()
{
    int d, m, y;//intialize variable
    printf("Enter your birthday (d/m/y):\n");
    scanf("%d %d %d",&d,&m,&y);//input from user
    int max_hr=220;//setup max hearate
    int age =ThisYear-y;
    max_hr-= age;//user's max heartrate 
    float target_hr_above;//target above
    float target_hr_bellow;//target bellow
    target_hr_above=max_hr*0.85;
    target_hr_bellow=max_hr/2;
    printf("at the age of %d max heart rate is: %d BPM. Target heartrate is %.2f BPM to %.2f BPM",age,max_hr,target_hr_above,target_hr_bellow);
    return 0;
}
