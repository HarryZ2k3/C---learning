//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
//Function takes in 2 arrays, one 2D and one 1D
//Initialize 3 arrays, 1 empty 2D array as the product.
// Calculate by taking the dot product of the each row of the first array and the second vetor array
// assign the the results in the first and second row of the 3rd empty array
//then print the resulting  array out
//then calculate the dot product of the product array.
#define SIZE1  2
#define SIZE2  3
int main()
{
    int temp1=0,temp2=0;
    int arr1[SIZE1][SIZE2]=
    {{1,2,3},
     {4,5,6}};
    int arr2[SIZE2]={7,8,9};
    int arr3[SIZE1][SIZE2]={0};
    for (int i=0;i<SIZE1;i++)
    {
        for (int j=0;j<SIZE2;j++)
        {
            arr3[i][j]=arr1[i][j]*arr2[j];
        }
    }
    printf("Answer is:\n");
    for (int i=0;i<SIZE1;i++)
    {
        for (int j=0;j<SIZE2;j++)
        {
            if (i==0&&j==0)
                printf("C={%d;",arr3[i][j]);
            else if (i==1&&j==SIZE1)
                printf("%d}",arr3[i][j]);
            else if (i==1&&j==0)
                printf("  {%d;",arr3[i][j]);
            else if (i==0&&j==SIZE1)
            {
                printf("%d}\n",arr3[i][j]);
            }
            else
                printf("%d;",arr3[i][j]);
        }
    }
    printf("\nThe final product is:\n");
    for (int i=0;i<SIZE1;i++)
    {
        for (int j=0;j<SIZE2;j++)
        {
            if (i==0)
                temp1 += arr3[i][j];
            else
                temp2 += arr3[i][j];
        }
    }
    printf("%d %d",temp1,temp2);
    return  0;
}