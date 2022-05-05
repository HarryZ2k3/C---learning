//ITITWE21039 HUYNNH PHUONG DAI 
/*
Algorithm works by intializing 2 identical size arrays, one for input, one for output
Using for loop with a stopping condition, we enter the input array.
The insert and remove functions works by calling in 2 arrays, the index number and the number to replace.

Insert function: Assign variables of each adress of input array to output array until the address hits the index number, then replace the variable of the index adress of the input array 
to the number to replace, then assign the variable of input array as normal but shift to the right (+1) the output array's adress to make room for the newly inserted variable

Remove function: Assign variables of each adress of input array to output array until the address hits the index number,
then assign the variable of input array as normal but shift to the right (+1) the input array's adress to ignore the variable in the index adress to remove it in the final output

*/
#include <stdio.h>
void insert(int arr1[],int a,int b,int arr2[]);
void remove(int arr1[],int a,int b,int arr2[]);
int main ()
{
    int A[30]={0},B[30]={0},id;
    printf("Enter the index number:\n");
    scanf("%d",&id);
    printf("Enter the numbers in the array: (-1 to stop)\n");
    for (int i =0;i<30;i++)
    {
        scanf("%d",&A[i]);
        if (A[i]==-1)
        {
            break;
        }
    }
    insert(A,id,5,B);
    printf("\n");
    remove(A,id,3,B);
    return 0;
}
void insert(int arr1[],int a,int b,int arr2[])
{
    //insert
    a-=1;
    for (int i=0;i<a;i++)
    {
        arr2[i]=arr1[i];   
    }
    arr2[a]=b;
    for (int i=a;i<30;i++)
    {
        arr2[i+1]=arr1[i];
    }
    //print
    for (int i = 0; i<30;i++)
    {
        if (arr2[i+1]==-1)
        {   
            printf("%d]",arr2[i]);
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
    a-=1;
    //remove
    for (int i=0;i<a;i++)
    {
        arr2[i]=arr1[i];   
    }
    for (int i=a;i<30;i++)
    {
        arr2[i]=arr1[i+1];
    }
    //print
    for (int i = 0; i<30;i++)
    {
        if (arr2[i+1]==-1)
        {   
            printf("%d]",arr2[i]);

            break;
        }
        else if(i==0)
            printf("[%d, ",arr2[i]);
        else 
            printf("%d, ",arr2[i]);
    }
}