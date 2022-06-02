//HUynh Phuong Dai ITITWE21039
#include <stdio.h>

struct rectangle {
double width; 
double height; 
};
int main(void)
{

    struct rectangle aRec; 

    aRec.width = 5.5;
    aRec.height = 10.7;

    printf("Width of the rectangle %.2f",aRec.width);
    printf("\nThe Height of the rectangle %.2f",aRec.height);
    double area = (float)(aRec.width * aRec.height);
    double perimeter = 2.0*(aRec.width + aRec.height);
    printf("\nperimeter: %.2f",perimeter);
    printf("\nArea: %.2f",area);
}


