//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
//input the contents of the array (-1 to end)
//Check the indcies of each number
//for example, first alteration takes the 1st number and add it with itself
//if = to the number we need of the indicies, return it and finish.
int main()
{
    int number;
    int count=1;
    int arr[30]={0};
    printf("Enter the contents of your array (-1) to end\n");
    for (int i=0;i<30;i++)
    {
        scanf("%d",&arr[i]);
        count++;
        if (arr[i]==-1)
            break;
    }
    printf("Enter the number you want to check that adds up to it:\n");
    scanf("%d",&number);
    for (int i=0;i<count;i++)
    {
        for(int j=0;j<count;j++)
            {
                if (arr[i]+arr[j]==number)
                {    
                    printf("%d and %d ",i,j);
                }
            }
    }
    return  0;
}