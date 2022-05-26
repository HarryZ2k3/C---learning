//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXWORDS 100

int main()
{
    char words[MAXWORDS]="";
    char temp[20]="";
    char longest[20]="";
    char shortest[20]="";
    int wordIndex=0;

    printf("Enter your string of words: \n");
    fgets(words,sizeof(words),stdin);
    for (int i=0;i<strlen(words);i++)
    {
        while(i<strlen(words) && !isspace(words[i]) && isalnum(words[i]))
        {
            temp[wordIndex++] = words[i++]; //copy to temp holder for the original string
        }
        //check if a word was copied in the loop above
        if (wordIndex!=0)
        {
            //a single word was copied to temp so we remove the null character at the end of the word
            temp[i]='\0';
            // if the saved longest word is still empty, then copy the word in temp
            if (strlen(longest)==0)
            {
                strcpy(longest,temp);
            }
            // if the saved shortest word is still empty, then copy the word in tem
            if (strlen(shortest)==0)
            {
                strcpy(shortest,temp);
            }
            //if the current retrieved word is longer than the longest word saved then copy the new longest as the new longest word
            if (strlen(temp)> strlen(longest))
            {
                strcpy(longest,temp);
            }
            //if the current retrieved word is lesser than the shortest word saved then copy the new shortest as the new shortest word
            if (strlen(temp) < strlen(shortest))
            {
                strcpy(shortest,temp);
            }
            wordIndex=0;
        }
    }
    printf("Longest word: %s\n",longest);
    printf("Shortest word: %s\n",shortest);
    return 0;
}
