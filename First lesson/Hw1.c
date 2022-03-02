//Huynh phuong dai ITITWE21039

#include <stdio.h>

int main()
{
    int v,a,u,t;
    float s;
    printf("a= \n");
    scanf("%d",&a);
    printf("u= \n");  
    scanf("%d",&u);  
    printf("t= \n");
    scanf("%d",&t);
    v = u + a*t;
    s=  (float)u*t + (a*t*t)/2;
    printf("The initial velocity of the object is %d\n",v);
    printf("Distance travelled is %f",s);
    
    return 0;
}