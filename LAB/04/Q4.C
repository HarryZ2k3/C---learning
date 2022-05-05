//ITITWE21039 HUYNNH PHUONG DAI 
#include <stdio.h>
//practice passing 2D arrays into functions.
//for loop to enter all variable in the 2D function that has the same coordinate 
void Diagonal(int a[][3]);
int main ()
{
    int arr[3][3]=
    {{1,2,3},
     {4,5,6},
     {7,8,9}};
    Diagonal(arr);
    return 0;
}
void Diagonal(int a[][3])
{
    for (int i=0;i<3;i++)
    {
        printf("%d ",a[i][i]);
    }
}