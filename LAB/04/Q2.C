//ITITWE21039 HUYNNH PHUONG DAI 
#include <stdio.h>
//We use Passing arrays to functions

void ModifyArray(int Arr1[],int Arr2[],size_t size);

int main ()
{
    int n,p;
    puts("Enter size of Array A: \n");
    scanf("%d",&n);
    puts("Enter size of Array BL \n");
    scanf("%d",&p);
    int A[n],B[p];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=0;i<p;i++)
    {
        scanf("%d",&B[i]);
    }
    return 0;
}

void ModifyArray(int Arr1[],int Arr2[],size_t size)
{
    size = sizeof(Arr1[])+sizeof(Arr2[]);
}