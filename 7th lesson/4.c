//ITITWE21039 - HUYNH PHUONG DAI
// Vo Thi Luu Phuong - ITITIU0001
#include <stdio.h>
#define SIZE 10
#define GROUP 7

// function main begins program execution
int main(void)
{
   // use initializer list to initialize array n
   int salary[SIZE] = {0};
   int count[GROUP] = {0};

//    printf("%s%13s%17s\n", "Element", "Histogram");

   for (size_t i = 0; i < SIZE; ++i) {
       int gross;
       printf("Input the gross of %d-th person: ", i);
       scanf("%d", &gross);
       salary[i] = 200 + (int)(gross*0.09);
        
        if ((salary[i] >= 200) && (salary[i] < 299))
                count[0]++;
        else if ((salary[i] >= 300) && (salary[i] < 399))
                count[1]++;
        else if ((salary[i] >= 400) && (salary[i] < 499))
                count[2]++;
        else if ((salary[i] >= 500) && (salary[i] < 599))
                count[3]++;
        else if ((salary[i] >= 600) && (salary[i] < 699))
                count[4]++;	                                      
        else if ((salary[i] >= 700) && (salary[i] < 799))
                count[5]++;
        else 
                count[6]++;
   } 

        
    for (int j = 0; j < GROUP; ++j) { 
                printf("Number of sale person in group %d is %d\n", j+1, count[j]);   
    }                               
	                                         
}

