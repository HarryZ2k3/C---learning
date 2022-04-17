//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>
int elapse(int,int,int);//function declaration 

int main()
{
    int hour,minute,second;
    printf("Enter hours,minutes,seconds(range from 00:00:00 - 23:59:59): ");//Input from user
    scanf("%d %d %d",&hour,&minute,&second);
    while(hour > 23 || minute > 59 || second > 59)// just in case the user enters an invalid time
    {
        if (hour > 23)
        {
            printf("\nInvalid hour value~!");
        }
        else if (minute > 59)
        {
            printf("\nInvalid minute value~!");
        }
        else if (second > 59)
        {
            printf("\nInvalid second value~!");
        }
        printf("\n enter again:");
        scanf("%d %d %d",&hour,&minute,&second);// resubmission from the user in the case the input is invalid
    }
    printf("Time passed since the last time the clock hits 12 (AM or PM) is: %d",elapse(hour,minute,second));//output the ammount of seconds passed since the clock hits 12
    return 0;
}
int elapse(int h,int m,int s)//function specifier
{
    if (h>= 12)
    {
        h -=12;//if the time is over 12:00 - 12 to get the time elapse from 12
        return h*60*60 + m *60 +s;
    }
    return h*60*60 + m *60 +s;//if not return as normal
}