//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

void PrintRec(int n, int m) //function to print a rectangle
{
    int i,j;
    printf("Rectangle(%d %d):\n",n,m);
    for (i=0;i<n;i++)//For loop for set the amount of rows aka height of the rectangle
    {
        for(j=0;j<m;j++) // For loop for set the amount of colimn aka the width of the rectangle
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    PrintRec(3,2);//Rectangle of 3 height and 2 width
    printf("\n");
    PrintRec(5,4);//Rectangle of 5 height and 4 width
    printf("\n");
    PrintRec(10,16);//Rectangle of 10 height and 16 width
    
    return 0;
}

