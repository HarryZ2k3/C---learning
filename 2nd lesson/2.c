// Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main()
{
        float a, b, c;
        printf("Input three numbers\n");
        scanf("%f,%f,%f", &a, &b, &c);
        printf("Average %0.2f\n", (a+b+c)/3.0);

        if ((a >=b) && (a >= c)) 
        {
            printf("The maximum is %0.2f", a);
        }
        if ((b >= a) && (b >= c)) 
        {
            printf("The maximum is %0.2f", b);
        }
        if ((c >=b) && (c >= a)) 
        {
            printf("The maximum is %0.2f", c);
        }
        if ((a <=b) && (a <= c)) 
        {
            printf("The minimum is %0.2f",a);
        }
    return 0;
}