/*
Huynh Phuong Dai - ITITWE21039
*/
#include <stdio.h>
struct clientData
    {
        int acctNum;
        char last_name[15];
        char first_name[10];
        double balance;
    };


int main(void)
{
    int i;
    struct clientData blankClient = {0,"","",0.0};
    FILE *cfPtr;
    if ( (cfPtr=fopen("user.txt","wb"))==NULL)
        printf("File count not be opened.\n");
    else 
    {
        for (i=0;i<5;i++)
            fwrite(&blankClient, sizeof(struct clientData),1,cfPtr);
        
    fclose(cfPtr);
    }

    return 0;
}