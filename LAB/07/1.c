//Huynh Phuong Dai - ITITWE21039
//How this program works is firstly, user inputs the array and program checks if user 
//enters "-1", terminated the input
//Go through the "sort function", checking with 2 flags, if the number after is smaller
//than after, move the smaller number to the left
//median check with the "iseven" and 
//if the number of values  is odd, the median number is the middle one (input[count/2])
//if the number of values  is even, we calculate the median as the average of two middle value
//Mean Value calculations is (the average of all number)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 40
void sort(int Arr[],size_t size);
void print(int Arr[],size_t size);
int iseven(int a);
int main(void)
{
    int count=0;
    int Input[SIZE];
    //User input
    printf("Enter your array of number (-1 to stop)\n");
    for (int i=0;i<SIZE; i++)
    {
        scanf("%d",&*(Input+i));
        count ++;
        if(*(Input+i)==-1)
        {
            *(Input+i)=0;
            count--;
            break;
        }
    }
    //
    //Sorting (a)
    printf("the number of variables %d\n",count);//debugging
    sort(Input,count);//part a
    printf("Sorted array: ");
    //
    print(Input,count);//for debugging
    //Median value (b)
    if (iseven(count)==0)
    {
        printf("\nThe median value is: %d\n",Input[count/2]);
    }
    else
    {
        float median = (*(Input + (count/2))+*(Input+((count/2)+1)))/2;
        printf("\nThe median value is: %.2f\n", median);
    }

    //Mean value of the Array (c)
    printf("Mean value of the array is: ");
    float total=0;
    for (int i=0; i<count;i++)
    {
        total+= Input[i];
    }
    float meanvalue=total/count;
    printf("%.2f\n",meanvalue);
    //
    //standard deviation
    float Standard_deviation;
    float temp=0;
    for (int dai=0;dai<count;dai++)
    {
        temp += (Input[dai]-meanvalue)*(Input[dai]-meanvalue);
    }
    Standard_deviation = sqrt((temp)/count-1);
    printf("Standard deviation is %.2f \n",Standard_deviation);
    //
    return 0;
}

void sort(int Arr[],size_t count)
{
    int i,j;
    int temp;
    for (i=0;i<count-1;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp = Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
}

void print(int Arr[],size_t size)
{
    int i;
    for (i=0;i<size;i++)
    {
        printf("%d ",Arr[i]);
    }
}

int iseven(int a)
{
    if (a%2==0)
        return 1;
    else
        return 0; 

}