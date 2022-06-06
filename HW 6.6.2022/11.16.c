//Huynh Phuong Dai - ITITWE21039

#include <stdio.h>

int main()
{
    //Type intialization
    int intType;
    unsigned int unsignedintType;
    short int shortintType;
    unsigned short int unsignedshortintType;
    long int longintType;
    unsigned long int unsignedlongintType;
    
    char charType;
    unsigned char unsignedcharType;

    float floatType;

    double doubleType;

    long double longdoubleType;
    //
    FILE *fPtr;
    if ((fPtr = fopen("size.txt","w"))==NULL)
    {
        puts("File could not be opened");
    }
    else 
    {
        fprintf(fPtr,"%s%16s\n","Data Type","Size");
        printf("%s%16s\n\n","Data Type","Size");

        fprintf(fPtr,"%s%21d\n","char",sizeof(charType));
        printf("%s%21d\n","char",sizeof(charType));

        fprintf(fPtr,"%s%12d\n","Unsigned char",sizeof(unsignedcharType));
        printf("%s%12d\n","unsigned char",sizeof(unsignedcharType));

        fprintf(fPtr,"%s%16d\n","Short int",sizeof(shortintType));
        printf("%s%16d\n","Short int",sizeof(shortintType));

        fprintf(fPtr,"%s%7d\n","Unsigned short int",sizeof(unsignedshortintType));
        printf("%s%7d\n","Unsigned short int",sizeof(unsignedshortintType));

        fprintf(fPtr,"%s%22d\n","Int",sizeof(intType));
        printf("%s%22d\n","Int",sizeof(intType));     

        fprintf(fPtr,"%s%13d\n","Unsigned int",sizeof(unsignedintType));
        printf("%s%13d\n","Unsigned int",sizeof(unsignedintType));     

        fprintf(fPtr,"%s%17d\n","Long int",sizeof(longintType));
        printf("%s%17d\n","Long int",sizeof(longintType));     

        fprintf(fPtr,"%s%8d\n","unsigned long int",sizeof(unsignedlongintType));
        printf("%s%8d\n","unsigned long int",sizeof(unsignedlongintType));     

        fprintf(fPtr,"%s%20d\n","Float",sizeof(floatType));
        printf("%s%20d\n","Float",sizeof(floatType));     

        fprintf(fPtr,"%s%19d\n","Double",sizeof(doubleType));
        printf("%s%19d\n","Double",sizeof(doubleType));     

        fprintf(fPtr,"%s%14d\n","Long double",sizeof(longdoubleType));
        printf("%s%14d\n","Long double",sizeof(longdoubleType));     
    fclose(fPtr);
    }
    return 0;
}