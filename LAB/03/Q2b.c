//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>
#define MAX_SIDE 500

int main()
{
    int result;
    int side1,side2,hypotenuse=0;
    int m=2;
    //This algorithm will be reduced using the correlation of the three sides of a right triagle that I found on the internet
    //Goes something like this: with a,b,c are the numbers in the pythagorean triple and m,n 
    /*
        a = m^2 - n^2
        b = 2 * m * n
        c  = m^2 + n^2
    because,
        a^2 = m^4 + n^4 – 2 * m^2 * n^2
        b^2 = 4 * m^2 * n^2
        c^2 = m4 + n4 + 2* m^2 * n^2
    */
    while(hypotenuse < MAX_SIDE) //checking all possible hypotenuse from 0 to 500
    {
        for(int n=1;n<m;++n)//for loop to run from n=1 to n<m while m is constantly increasing from 2 to 500
        {
            side1=m*m-n*m;//the correlation mentioned above
            side2=2*m*m;
            hypotenuse=m*m+n*n;

            if(hypotenuse>MAX_SIDE) //only take the number when hypo tenuse is less than 500
                break;

            printf("%d %d %d\n",side1,side2,hypotenuse);//print out the numbers
        }
        m++;
    }
    return 0;
}