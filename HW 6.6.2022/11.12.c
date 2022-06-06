#include <stdio.h>
#include <string.h>
struct hardwareData
{
    int record;
    char toolName[50];
    int quantity;
    double cost;
};

int printlist(FILE *readPtr);
void updateList(FILE *fPtr);
void deleteRecord(FILE *fPtr);
void createRecord(FILE *fPtr);
int userInput(void);

int main (void)
{
    int answer;
    FILE *ptr;
    //initialize 100 spaces
    struct hardwareData hardware = {0,"",0,0};
    for (int i=0;i<100;i++)
    {
        fwrite(&hardware,sizeof(struct hardwareData),1,ptr);
    }
    
    if((ptr =fopen("hardware.txt","rb+"))==NULL)
    {
        printf("Cannot open file\n");
    }
    else
    {
        while((answer=userInput())!=5)
        {
            switch(answer)
            {
                case 1:
                    printlist(ptr);
                    printf("Data printed");
                    break;
                case 2:
                    updateList(ptr);
                    break;
                case 3:
                        deleteRecord(ptr);
                    break;
                case 4:
                    createRecord(ptr);
                    break;
                default:
                    printf("Wrong input\n");
                    break;
            }
        }
        fclose(ptr);
    }
}
//for printing all of the data
int printList(FILE *readPtr)
{
    int result;
    FILE *writePtr;
    struct hardwareData hardware = {0, "",0,0};
    if ((writePtr = fopen("records.txt","w"))==NULL)
        printf("Cannot open file\n");
    else
    {
        rewind(readPtr);
        fprintf(writePtr,"%-9s%-19s%-10s%-6s","Record #","Tool name","Quantity","Cost");
        while(!feof(readPtr))
        {
            result= fread(&hardware,sizeof(struct hardwareData),1,readPtr);

            if(result != 0 && hardware.record != 0) 
            {
                fprintf(writePtr, "%-9d%-19s%-10d%-6f\n", hardware.record, hardware.toolName, hardware.quantity, hardware.cost);
            }
        }
        fclose(writePtr);
    }
    return 0;
}

//for writing data into existing data in the files
void updateList(FILE *fPtr)
{
    int account;
    int newQuantity;
    int newCost;
    struct hardwareData hardware = {0,"",0,0};

    printf("Enter the record number you want to edit\n");
    scanf("%d",&account);
    fseek(fPtr, (account-1)*sizeof(struct hardwareData),SEEK_SET);
    fread(&hardware,sizeof(struct hardwareData),1,fPtr);

    if(hardware.record==0)
    {
        printf("Record %d doesn't have any information, please write it instead\n",account);
    }
    else
    {
        printf("%-9d%-19s%19d%-6f\n",hardware.record,hardware.toolName,hardware.quantity,hardware.cost);
        printf("Enter new quantity to record %d\n",account);
        scanf("%d",&hardware.quantity);
        printf("Enter new cost to record %d\n",account);

        printf("%-19d%-19s%-10d%-6f\n",hardware.record,hardware.toolName,hardware.quantity,hardware.cost);
        fseek(fPtr, (account-1)*sizeof(struct hardwareData),SEEK_SET);
        //overwriting over the old data
        fwrite(&hardware,sizeof(struct hardwareData),1,fPtr);
        fflush(fPtr);
        scanf("%d",&hardware.quantity);
    }
}

//for deleting a data in a file
void deleteRecord(FILE *fPtr)
{
    struct hardwareData hardware = {0,"",0,0};
    struct hardwareData blank = {0,"",0,0};
    int account;
    printf("Enter the record number that you want to delete\n");
    scanf("%d",&account);
    fseek(fPtr, (account - 1) * sizeof(struct hardwareData), SEEK_SET);
    fread(&hardware, sizeof(struct hardwareData), 1, fPtr);
    if(hardware.record == 0) 
        printf("Record %d does not exist\n",account);
    else
    {
        fseek(fPtr, (account-1)*sizeof(struct hardwareData),SEEK_SET);
        fwrite(&blank,sizeof(struct hardwareData),1,fPtr);
        fflush(fPtr);
    }
}

//for adding new data
void createRecord(FILE *fPtr)
{
    char str[150];
    struct hardwareData hardware = {0,"",0,0};
    int account;
    
    printf("Enter the number of new record");
    scanf("%d",&account);
    fseek(fPtr,(account -1)*sizeof(struct hardwareData),SEEK_SET);
    fread(&hardware,sizeof(struct hardwareData),1,fPtr);
    
    if(hardware.record !=0)
        printf("Record %d is already created, please eidt instead\n",account);
    else
    {
        printf("Enter new tool name for new record %d\n",account);
        scanf("%s",str);
        strcpy(hardware.toolName,str);

        printf("Enter the quantity of the new tool for new record %d\n",account);
        scanf("%d",&hardware.quantity);

        printf("Enter new tool name for new record %d\n",account);
        scanf("%lf",&hardware.cost);
        
        hardware.record=account;
        fseek(fPtr,(hardware.record-1)*sizeof(struct hardwareData),SEEK_SET);
        fwrite(&hardware,sizeof(struct hardwareData),1,fPtr);
        fflush(fPtr);
    }
}

//Main menu for User interaction
int userInput()
{
    int choice;
    printf("\n-------------------\n");
    printf("    Menu dialog\n");
    printf("-------------------\n");
    printf("1 - List all records\n");
    printf("2 - Update record\n");
    printf("3 - Delete record\n");
    printf("4 - Make a new record\n");
    printf("5 - Exit program\n");
    printf("? ");
    scanf("%d", &choice);
    return choice;
}