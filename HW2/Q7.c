//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>
#include <stdbool.h>
bool CheckTriangleSides(int a, int b, int c)
{
    if (a+b<c || a+c<b || b+c<a) // The triangle is valid is all of the (a+b<c) and (a+c<b) and (b+c<a) IS ALL TRUE
        return false;
    else 
        return true;
}
int main()
{
    int a=5,b=10,c=8;//initialize the test numbers
    if (CheckTriangleSides(a,b,c)) //run the function
    {
        printf("Valid"); //if true
    }
    else
    {
        printf("Invalid"); // if false
    }
    return 0;
}


