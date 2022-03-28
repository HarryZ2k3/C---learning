// ITITWE21039 - Huynh Phuong Dai

#include<stdio.h>
#include<math.h>
double hypotenuse(double, double);
int main(){
    printf("hypotenuse(3.0, 4.0) = %0.2f\n", hypotenuse(3.0, 4.0));
    printf("hypotenuse(5.0, 12.0) = %0.2f\n", hypotenuse(5.0, 12.0));
    return 0;

}
double hypotenuse(double side1, double side2){
    return sqrt(side1 * side1 + side2 * side2);
}