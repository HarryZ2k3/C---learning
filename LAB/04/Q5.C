//ITITWE21039 HUYNNH PHUONG DAI 
#include <stdio.h>
void insert(int arr1[],int a,int b,int arr2[]);
void remove(int arr1[],int a,int b,int arr2[]);
int main ()
{
    int A[30],B[30],id;
    printf("Enter the index number:\n");
    scanf("%d",&id);
    printf("Enter the numbers in the array: (-1 to stop)");
    for (int i =0;i<30;i++)
    {
        scanf("%d",&A[i]);
        if (A[i]==-1)
        {
            break;
        }
    }
    insert(A,id,5,B);
    remove(A,id,3,B);
    return 0;
}
void insert(int arr1[],int a,int b,int arr2[])
{
    for (int i=0;i<30;i++)
    {
        arr2[i]=arr1[i];
        if (i==a)
        {
            arr2[i]=b;
            break;
        }
    }
    for (int i=a+1;i<30;i++)
    {
        if (arr1[i]==0)
        {
            break;
        }
        else 
            arr2[i]=arr1[i];
    }
    for (int i = 0; i<30;i++)
    {
        if (arr2[i]==0)
        {   
            printf("]");
            break;
        }
        else if(i==0)
            printf("[%d, ",arr2[i]);
        else 
            printf("%d, ",arr2[i]);
    }
}

void remove(int arr1[],int a,int b,int arr2[])
{
    for (int i=0;i<30;i++)
    {
        arr2[i]=arr1[i];
        if (i==a)
        {
            break;
        }
    }
    for (int i=a+1;i<30;i++)
    {
        if (arr1[i]==0)
        {
            break;
        }
        else 
            arr2[i]=arr1[i];
    }
    for (int i = 0; i<30;i++)
    {
        if (arr2[i]==0)
        {   
            printf("]");
            break;
        }
        else if(i==0)
            printf("[%d, ",arr2[i]);
        else 
            printf("%d, ",arr2[i]);
    }
}