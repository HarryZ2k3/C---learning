//ITITWE21039 - Huynh Phuong dai
#include <stdio.h>

int intergerPower(int,int);

int main()
{
    long long int base,exponent; 
    printf("enter base ");
    scanf("%d",&base);
    printf("enter exponent ");
    scanf("%d",&exponent);
    printf("%d ^ %d = %d",base,exponent,intergerPower(base,exponent));
    return 0;
}

int intergerPower(int x,int y)
{
    int power=1;
    for (int i = 1;i<y;++i)
    {
        power = power*x;
    }
    return power;
}