//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
//Function takes in 2 arrays, one 2D and one 1D
//Initialize 3 arrays, 1 empty 2D array as the product.
// Calculate by taking the dot product of the each row of the first array and the second vetor array
// assign the the results in the first and second row of the 3rd empty array
int main()
{
    int arr1[2][3]=
    {{1,2,3},
     {4,5,6}};
    int arr2[3]={7,8,9};
    int arr3[2][3]=0;
    for (int i;i<2;i++)
    {
        for (int j;k<3;j++)
        {
            arr3[i][j]=arr1[i][j]*arr[j];
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (i==0&&j==0)
                printf("C={&d;",arr3[i][j]);
            if (i==1&&j==2)
                printf("%d}",arr3[i][j]);
            if (i==1&&j==0)
                printf("}{%d;",arr3[i][j]);
            else
                printf("%d;",arr3[i][j])
        }
    }

    
    return  0;
}