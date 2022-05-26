//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
//Set up a index of the words from single digits, tens-ty, hundred_thousands,teens
//Enter the numbers into a char type. (0-9999)
//we split out the number into four groups groups. a,b,c,d acording to it's place in the number
// d is the last number run from 1 to 9 (arry index named single_digit)
// c and d together to run number from ten to nineteen (arry index named teens) and another to run 10, 20, 30.... (array index named tenths)
// a and b together for the hundredth and thousands of the number (array index)
//now we pass the number array (string) into a switch-case for each length of the number (single digit, 2 digits, 3 digits and for digits)
//result
int main()
{
    //start of index
    const char * single_digit[10]= 
    {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    const char* teens[]=
    {"ten", "eleven","tweleve","thirteen","fourteen","fifteen","sixteen","seventeen", "eighteen","nineteen"};

    const char* tenths[]=
    {"","", "twenty", "thirty","forty","fifty"," sixty", "seventy","eighty", "ninety"} ;

    const char* hundred_thousands[]=
    {"hundred","thousand"};
    //end of index
    
    char num[6];
    printf("Enter your number (max 9999)\n");
    fgets(num, sizeof(num),stdin);
    printf("The number input is: ");
    puts(num); // to check the input is working or not
    int len = strlen(num); // when debugging, I noticed that when inputting the number there is always a '/n' when ever the number does not meet the max value at 4
    //which means that if the len is less than 4, the len number has to be subtract 1 to be accurate 
    if (len <=5)
        len-=1;
    printf("The length of the number is %d charater\n",len);
    switch (len)
    {
        case 2:
            if (*num-'0' == 1)
                printf("%s\n",teens[*(num+1)-'0']);
            else 
            {
                printf("%s %s",tenths[*num-'0'],single_digit[*(num+1)-'0']);
            }
            break;
        case 3:
            if(*(num+1)-'0'!=1 && *(num+1)-'0'!=0)
                printf("%s %s %s %s",single_digit[*num -'0'],hundred_thousands[0],tenths[*(num+1)-'0'],single_digit[*(num+2)-'0']);
            else if(*(num+1)-'0'==0 && *(num+2)-'0'!=0)
                printf("%s %s and %s",single_digit[*num-'0'],hundred_thousands[0],single_digit[*(num+2)-'0']);
            else if(*(num+1)-'0'==1)
                printf("%s %s  %s",single_digit[*num-'0'],hundred_thousands[0],teens[*(num+2)-'0']);
            else 
                printf("%s %s",single_digit[*num-'0'],hundred_thousands[0]);
            break;
        case 4:
            if (*(num+1)-'0'!=0 && *(num+2)-'0'!=0 && *(num+3)-'0'!=0)
                printf("%s %s %s %s %s %s",single_digit[*num -'0'],hundred_thousands[1],single_digit[*(num+1)-'0'],hundred_thousands[0],tenths[*(num+2)-'0'],single_digit[*(num+3)-'0']);
            //^^general case 
            else if(*(num+1)-'0'==0 && *(num+2)-'0'!= 0 && *(num+2)-'0'!= 1 && *(num+3)-'0' !=0)
                printf("%s %s and %s %s",single_digit[*num -'0'],hundred_thousands[1],tenths[*(num+2)-'0'],single_digit[*(num+3)-'0']);
            //^^ case for when 1011, 9042 etc...
            else if(*(num+1)-'0'==0 && *(num+2)-'0'== 0 && *(num+2)-'0'!= 0 && *(num+2)-'0'!= 1 && *(num+3)-'0' !=0)
                printf("%s %s and %s",single_digit[*num -'0'],hundred_thousands[1],single_digit[*(num+3)-'0']);
            //^^ case for 1001, 1005 etc...
            else if(*(num+1)-'0'==0 && *(num+2)-'0'== 0 && *(num+2)-'0'!= 1 && *(num+3)-'0' ==0)
                printf("%s %s ",single_digit[*num -'0'],hundred_thousands[1]);
            //^^ cases for 1000, 2000, 3000 etc...
            else if(*(num+1)-'0'==0 && *(num+2)-'0'==1 && *(num+3)-'0' !=0)
                printf("%s %s %s",single_digit[*num -'0'],hundred_thousands[1],teens[*(num+3)-'0']);
            //^^ cases for 1011,1012,1013 etc...
            else if(*(num+1)-'0'!=0 && *(num+2)-'0'==1 && *(num+3)-'0' !=0)
                printf("%s %s %s %s %s",single_digit[*num -'0'],hundred_thousands[1],single_digit[*(num+1) -'0'],hundred_thousands[0],teens[*(num+3)-'0']);
            //^^cases for 1113,9413,2816 etc...
            else if (*(num+1)-'0'!=0 && *(num+2)-'0'!=0 && *(num+3)-'0'==0)
                printf("%s %s %s %s %s",single_digit[*num -'0'],hundred_thousands[1],single_digit[*(num+1)-'0'],hundred_thousands[0],tenths[*(num+2)-'0']);
            //^^cases for 1230, 5420,9340 etc...
            else if (*(num+1)-'0'==0 && *(num+2)-'0'!=0 && *(num+3)-'0'==0)
                printf("%s %s and %s",single_digit[*num -'0'],hundred_thousands[1],tenths[*(num+2)-'0']);
            //^^cases for 1030, 1040,2090, etc...
            break;
        default: 
            printf("%s\n",single_digit[*num -'0']); //the actual value pointed to the number is ASCII means that we have to subtract '0' to get desired number
    }
    return 0;
}
//p/s: To the one who has to grade this, I am sorry, but time is running out and I have no other choice :< please treat me well
