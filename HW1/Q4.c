#include <stdio.h>
//Huynh Phuong Dai - ititwe21039
int main()
{
    int s, second;
    printf("Enter the amount of seconds you want to convert into proper time: ");
    scanf("%d",&s);
    int h,m;
    h = s/3600;
    m = (s - 3600*h)/60;
    second = s - 3600*h - m*60;
    printf("Hours:minutes:seconds is %d:%d:%d",h,m,second);
    return 0;
}