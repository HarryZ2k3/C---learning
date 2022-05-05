//ITITWE21039 HUYNNH PHUONG DAI 
#include <stdio.h>
//We use Passing arrays to functions, the algorithm of the function goes like this:
//Take both Arrays inputs and the first input assigned in the first addresses of the Array output
//And the second input assigned to the last few addresses of the array output

void ModifyArray(int Arr1[],size_t size1,int Arr2[],size_t size2,int Arr3[]);

int main ()
{
    int A[4],B[2],C[6];
    printf("Enter the numbers in Array A:\n");
    for (int i=0;i<4;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the numbers in Array B:\n");
    for (int i=0;i<2;i++)
    {
        scanf("%d",&B[i]);
    }
    ModifyArray(A,4,B,2,C);
    for (int i=0;i<6;i++)
    {
        if (i==0)
            printf("C[%d, ",C[i]);
        else if (i==5)
            printf("%d]",C[i]);
        else 
            printf("%d, ",C[i]);
    }
    return 0;
}

void ModifyArray(int Arr1[],size_t size1,int Arr2[],size_t size2,int Arr3[])
{
    for(int i=0;i<size1;i++)
    {
        Arr3[i]=Arr1[i];
    }
    for (int j=0;j<size2;j++)
        {
            Arr3[size1+j]=Arr2[j];
        }
}