//ITITWE21039 HUYNNH PHUONG DAI 
//The algorithm of function to sort the array work by scaning all the numbers side by side 
//E.g: address 0 compare with address 1, then assign the larger one to address 0 and the smaller one to address 1
//rinse and repeat through out address 1 and address 2 so on and so forth till the end
//Larger number will get push to the front and the smaller ones will get push to the back
#include <stdio.h>
void Sorting(int Arr[],size_t size);

int main ()
{
    int n;
    int numbers[30];
    printf("How many numbers do you want to sort? ");
    scanf("%d",&n);
    printf("Enter the numbers in your series\n");

    for (int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }

    Sorting(numbers,n);
    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
            printf("Sorted numbers[");
        }
        if (i==n-1)
        {
            printf("%d",numbers[i]);
            printf("]");
        }
        else
        {
            printf("%d, ",numbers[i]);
        }
    }
    return 0;
}

void Sorting(int Arr[],size_t size)
{
    int i,j;
    int temp;
    for (i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(Arr[i]<Arr[j])
            {
                temp = Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
    }
}