//Huynh Phuong Dai - ITITWE21039
//input the string of characters
//index number starts at 1
//check the string for Unique series of words. Using the "WINDOW SLIDING TECHNQUIUE"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define SIZE 50
int FindLongestUniqueSS(char arr[]);
bool Uniqueness(char arr[],int i,int j);
int max (int a,int b);
int main()
{   

    char c[SIZE];
    printf("Enter the contents of the string (z to end):\n");
    for (int i=0;i<SIZE;i++)
    {   
        scanf("%c",&c[i]);
        if(c[i]=='z')
            break;
    }
    int length = FindLongestUniqueSS(c);
    printf("\nLength= %d");
    return  0;
}

int FindLongestUniqueSS(char arr[])
{
    int n = strlen(arr);
    int index;
    for (int i=0;i<n;i++)
    {
        for (int j;j<n;j++)
        {
            if (Uniqueness(arr,i,j)==true)
                index = max(index,j-i+1);
        }
    }
    return index;
}

bool Uniqueness(char arr[],int i,int j)
{
    bool visited[SIZE];
    for (int k=i;k<j;k=k+1)
    {
        if(visited[arr[k]]==true)
            return false;
        visited[arr[k]]=true;
    }
    return true;
}

int max(int a,int b)
{
    return (a>b)?a:b;
}