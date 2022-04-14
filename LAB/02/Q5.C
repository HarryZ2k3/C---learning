//ITITWE21039_Huynh Phuong Dai

#include <stdio.h>
int lcm(int a, int b)
{
    int gcd,lcm; //intialize the variable
    for (int i=1;i<=a && i <=b;i++) //find GCD (greatest common divisor)
    {
        if (a%i==0 && b%i==0)
            gcd=i;
    }
    lcm = (a*b)/gcd; // find lowest common divisor by dividing a time b to the greatest common divisor
    return lcm;
}
int main()
{
    int a,b;
    printf("Enter 2 interger: "); //intialize the number from the user
    scanf("%d%d",&a,&b);
    printf("THE LCM OF %d and %d is %d",a,b,lcm(a,b));
    return 0;
}