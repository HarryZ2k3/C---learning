//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
//Set up a index of the words from single digits, tens-ty, hundred_thousands,teens
int main()
{
    //start of index
    char * single_digit[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    char* teens[]
    ={"", "eleven","tweleve","thirteen","fourteen","fifteen","seventeen", "eighteen","nineteen"};

    char* tens_ty[]=
    {"","", "twenty", "thirty","forty","fifty"," sixty", "seventy","eighty", "ninety"} ;

    char* hundred_thousands[]=
    {"hundred","thousand"};
    //end of index
    
    printf("Enter your number (max 9999)");
    char num[4];
    gets(num);
    puts(num);
    return 0;
}
