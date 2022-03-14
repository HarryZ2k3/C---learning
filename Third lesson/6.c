//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main(){

    int n = 10;
    float e = 1;
    for (int i=1; i <=n; i++){
        int factorial = 1;
        for (int j = 1; j<=i; j++){
            factorial *= j;
        }
        e += 1.0/factorial;
        printf("error = %f \n", e - 2.71828);
    }
    return 0;
}
