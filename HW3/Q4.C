//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>
#include <math.h>
int QuadEquroot1(int,int,int);
int QuadEquroot2(int,int,int);

int main()
{
    int a,b,c; 
    printf("Enter your quadratic equation to find roots (ax^2+bx+c=0): ");
    scanf("%d %d %d",&a,&b,&c);
    while (a==0)
    {
        if(a==0)
        {
            printf("Invalid quadratic equation\n");
        }
        printf("Enter your quadratic equation to find roots (ax^2+bx+c=0): ");
        scanf("%d %d %d",&a,&b,&c);
    }
    int delta = b*b-4*a*c;
    if (delta < 0)
    {
        printf("All roots are imaginary number~!");
    }
    printf("%d \n %d",QuadEquroot1(a,b,c),QuadEquroot2(a,b,c));
    return 0;
}

int QuadEqroot1(int a,int b,int c)
{
    float x1=0,delta;
    delta = b*b-4*a*c;
    if (delta == 0)
    {
        return x1 = -b/(2*a);
    }
    else 
    {
        return x1 = ((-b+sqrt(delta))/2*a);
    }
}
int QuadEquroot2(int a,int b,int c)
{
    float x2=0,delta;
    delta = b*b-4*a*c;
    if (delta == 0)
    {
        return x2 = -b/(2*a);
    }
    else 
    {
        return x2 = ((-b-sqrt(delta))/2*a);
    }
}