//Huynh Phuong Dai - ITITWE21039
//Quiz 30/5/2022
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //character string array initialization
    char s1[50]="jack";
    char s2[50]="jill";
    char s3[50];
    //print to upper
    printf("%c%s",toupper(s1[0]),toupper(s1[1]));
    //copy string
    printf("%s",strcpy(s3,s2));
    //strcat
    printf("%s",strcat(strcat(strcpy(s3,s1),"and"),s2));
    //string length
    printf("%s",strlen(s1)+strlen(s2));
    printf("%u",strlen(s3));
    return 0;
}
