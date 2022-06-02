//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
struct time
{
    int h,m,s;
};  


int main()
{
    struct time RTime;
        printf("enter Real time value:");
        scanf("%d:%d:%d",&RTime.h,&RTime.m,&RTime.s);
    struct time PTime;
        printf("enter Past time value:");
        scanf("%d:%d:%d",&PTime.h,&PTime.m,&PTime.s);
        int elapse_h=0;
    while(RTime.h <=24 && PTime.h <=24 ||RTime.m <=60 && PTime.m <=60 || RTime.s <=60 && PTime.s <=60 )
    {
        elapse_h = RTime.h-PTime.h;
        if (elapse_h <=0)
            elapse_h = 24 + elapse_h;
        int elapse_m=0;
        elapse_m = RTime.m-PTime.m;
        if (elapse_m <=0)
            elapse_m = 60 + elapse_m;
        int elapse_s = 0;
        elapse_s = RTime.s-PTime.s;
        if (elapse_s <=0)
            elapse_s = 60 + elapse_s;
        printf("Elapse time is: %d:%d:%d",elapse_h,elapse_m,elapse_s);
        break;
    }
    return 0;
}

