//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>

int main()
{
    int n;
    printf("how many number do you want to enter: \n");
    scanf("%d",&n);//enter the size of the arry
    int arr[n];
    for (int i = 0;i<n;i++)//arry data entry
    {
        scanf("%d",&arr[i]);
    }
    int count=0;//initiallize count
    for(int i=0;i<n;i++)//check the data in the array
    {
        if(arr[i]!=arr[n-1-i])//for every data in a address in the arry, the arry check the one in the opopsite side of the arry
            count++;
    }
    if (count==0) //if the ammount of the addresses that is opposite side to each other that doesn't agree the array is assummetric 
        printf("Symmetric");
    else 
        printf("Assymmetric");
    return 0;
}