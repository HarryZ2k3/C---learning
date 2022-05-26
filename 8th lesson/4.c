//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
void printNum(const int *numPrt);
int main(void)
{
    int y =5;
    printf("Intially number is %d\n",y);
    printNum(&y);
    printf("Now the number is %d",y);
    return 0;
}

void printNum(const int *numPrt)
{
    *numPrt=10;
    printf("Modified num is %d: \n",*numPrt);
}