/*

Let's two largest numbers are max1, max2.

- Input the first number num, assign max1 = max2 = num

- repeat :

    + Input a new number num

    + if num > max1, then max2 = max1 and max1 = num;

    + if num < max1 and num > max2, max2 = num

 until the number of inputs reach the limit

- print max1 and max2

*/



#include <stdio.h>



int main(){

    int max1, max2, num;

    int limit = 5;



    printf("Input first number: ");

    scanf("%d", &num);

    max1 = num;

    max2 = num;



    int count = 1;

    while (count < limit) {

        printf("Input a number: ");

        scanf("%d", &num);

        if (num > max1){

            max2 = max1;

            max1 = num;

        }

        if ((num < max1) && (num > max2)){

            max2 = num;

        }

        // ++count;

        count += 1;

    }



    printf("Max1 is %d, max2 is %d\n", max1, max2);

}