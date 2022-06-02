//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 4
//Set up a index of the words from single digits, tens-ty, hundred_thousands,teens
int main()
{
    //start of index
    const char * single_digit[10] =
    {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    const char* teens[]=
    {"", "eleven","tweleve","thirteen","fourteen","fifteen","seventeen", "eighteen","nineteen"};

    const char* tens_ty[]=
    {"","", "twenty", "thirty","forty","fifty"," sixty", "seventy","eighty", "ninety"} ;

    const char* hundred_thousand[]={"hundred","thousand"};
    //end of index
    
    printf("Enter your number (max 9999)");
    char* num;
    gets(num);
    int len= strlen(num);
    if (len ==0)
        printf("you didn't enter any numbers");
    if (len >4)
        printf("The number is to large");
    while (*num != '\0')
    {
        if (len >=3 )
        {
            if (*num - '0'!=0)
            {
                printf("%s", single_digit[*num - '0']);
                printf("%s",hundred_thousand[len-3]);
            }
        }
        else 
        {
            if(*num=='1')
            {
                int sum = *num-'0' + *(num+1) - '0';
                printf("%s",tens_ty[sum]);
            }
        
            else if(*num=='2' && *(num+1)=='0')
            {
            printf("Twenty");
            }
            else 
            {
            int i=*num-'0';
            printf("%s",i? tens_ty[i]:"");
            ++num;
            }
        }
        ++num;
    }

    return 0;
}
