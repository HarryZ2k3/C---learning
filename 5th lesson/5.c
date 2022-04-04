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
        //run from 1 to less than y to times x y ammount of times
        power = power*x;
    }
    return power;
}