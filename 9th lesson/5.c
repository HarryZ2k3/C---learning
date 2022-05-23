//Huynh Phuong Dai - ITITWE21039    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000


int main()
{
    char script[N];
    gets(script);
    int n = strlen(script);
    int freq[N];
    memset(freq,0,sizeof(freq));
    for (int i = 0;i<n;i++)   
        freq[script[i]-'a']++; 
    for (int i =0;i<n;i++)
    {
        if(freq[script[i]-'a'!=0])
        {
            printf("%s%s ",script[i],freq[script[i]-'a']);
        }
        freq[script[i]-'a']=0;
    }
    return 0;
}