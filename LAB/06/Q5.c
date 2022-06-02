//Huynh Phuong Dai - ITITWE21039
#include<stdio.h>
#include<string.h>
//the algorithm works by poiting at two words at at time at a time and 
//at each letter in each word at a time

int main()
{
    int i,j,n;
    char str[100][100];
    char temp[100];
    printf("Enter number of words in your string :\n");
    scanf("%d",&n);
    printf("enter the words in random order:\n");
    for(i=0;i<n;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("The sorted:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
     }
}
