//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

int main()
{
    int arr[20];//declaring the array (I'm only using one :3)
    printf("Enter the first ten numbers\n");//getting the user input
    for (int i=0;i<20;++i)//take 20 input from the user in 2 sets of 10 number each.
    {
        if (i==10)//the start of the second set of 10 numbers
        {
            printf("Enter the next 10 numbers\n");
            scanf("%d",&arr[i]);//assigning variables into the array
        }
        else
        scanf("%d",&arr[i]);//assigning variables into the array
    }
    //Checking the numbers out, for the address 0 (first number of the first set of number), compare it with the address 0+10 (first number in the second set of numbers)
    //so on and so forth: 1 compare with 11, 2 compare with 12, 3 compare with 13...., compare it with 19 (The last number is at 19 only because the address starts at 0)
    printf("\nSimilarities are: ");
    for (int i = 0;i <10;++i)
    {
        if (arr[i] == arr[i+10])
        {
            printf(" %d ; ", arr[i]);//print out the simliarilarites
            arr[i]=0;
            arr[i+10]=0;
            //assigning the similar numbers with the number 0
        }
    }
    printf("\n Unique elements in the collection of both sets of numbers are: ");
    //Since that all of the similarites are turned into zero, to get the unique elements out, we simply don't take the ones that is equal to zero
    for (int i = 0; i<20;i++)
    {
        if (arr[i]!=0)
        {
            printf("%d; ",arr[i]);
        }
    }
    return 0;
}