//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
#define SIZE 10
void bubbleSort(int *, const int);
int main()
{
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
    printf("Data items in original order\n");
    for (int i = 0 ;i<SIZE;i++)
        printf("%d ",a[i]);
    bubbleSort(a,SIZE);
    printf("\n Data items in ascending order \n");
    for (int i=0; i<SIZE;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
void swap(int *a,int *b)
{
    int z = *a;
    *a = *b;
    *b=z;
}
void bubbleSort( int * const a,const int size_t)
{
    for (int i=0;i<size_t-1;i++)
    {
        for (int j = 0; j<size_t-1;j++)
        {
            if (a[i]>a[i+1])
            {
                swap(a+i,a+i+i+1);
            }
        }
    }
}