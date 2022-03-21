//Huynh Phuong Dai ITITWE21039
#include <stdio.h>

int main(){
    int grade = 75;

    if (grade >=90)
        printf("A");
    if ((grade >=80) && (grade < 90))
            printf("B");
    if ((grade >= 70) && (grade < 80))
                printf("C");
    else
        printf("D or E or F");
    return 0;
}