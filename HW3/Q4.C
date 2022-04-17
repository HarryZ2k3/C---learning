//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>
#include <math.h>
int QuadEquroot1(int,int,int);//
int QuadEquroot2(int,int,int);//function declaration

int main()
{
    int a,b,c,delta; 
    printf("Enter your quadratic equation to find roots (ax^2+bx+c=0): ");//Input from User
    scanf("%d %d %d",&a,&b,&c);
    while (a==0) // check validity of the coefficiennts
    {
        if(a==0)
        {
            printf("Invalid quadratic equation\n");
        }
        printf("Enter your quadratic equation to find roots (ax^2+bx+c=0): ");
        scanf("%d %d %d",&a,&b,&c);
    }
    delta = b*b-4*a*c;
    if (delta < 0)//check for imaginary root
    {
        printf("All roots are imaginary number~!");
    }
    else
    printf("%d\n%d",QuadEquroot1(a,b,c),QuadEquroot2(a,b,c));//fuctions call
    return 0;
}

int QuadEquroot1(int a,int b,int c)
{
    float x1=0,delta;//setup variable
    delta = b*b-4*a*c;//calculate discriminant
    if (delta == 0)
    {
        return x1 = -b/(2*a);//case when discriminant is equal to zero, both roots are the same with x1=x2=-b/(2*a)
    }
    else 
    {
        return x1 = ((-b+sqrt(delta))/2*a);//Calculate root with standard case
    }
}
int QuadEquroot2(int a,int b,int c)
{
    float x2=0,delta;//setup variable
    delta = b*b-4*a*c;//calculate discriminant
    if (delta == 0)
    {
        return x2 = -b/(2*a);//case when discriminant is equal to zero, both roots are the same with x1=x2=-b/(2*a)
    }
    else 
    {
        return x2 = ((-b-sqrt(delta))/2*a);//Calculate root with standard case
    }
}