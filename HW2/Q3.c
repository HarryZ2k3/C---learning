//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

int main()
{
    int count=0; //set the dollar sign count by 0
    for (int i=0;i<=500;i++) //set the loop to run 500 times.
    {
        if (count <15) // check the number of signs each loop 
        {
            printf("$ ");
            count++;
        }
        else
        {
            printf("\n"); //when the ammount of signs reach over 15, go to a new line and reset the sign count to zero
            count=0;
        }
    }
    return 0;
}