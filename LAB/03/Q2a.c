//ITITWE21039-HUYNH PHUONG DAI
#include <stdio.h>
#define MAX_SIDE 500

int main()
{
    int result;
    int side1,side2,hypotenuse;
    for(side1=1;side1<MAX_SIDE;side1++) //side 1 from 1 to 499
        {
            for (side2=1;side2<MAX_SIDE;side2++) //side 2 from 1 to 499 checking per side 1
            {
                for(hypotenuse=1;hypotenuse<MAX_SIDE;hypotenuse++) //hypotenuse from 1 to 499 per side 2 
                {
                    result=(side1*side1)+(side2*side2); //hypotenuse per case then compare to the actual hypotenuse^2 

                if(result==(hypotenuse*hypotenuse))
                    printf("%d %d %d\n",side1,side2,hypotenuse);//print out the correct case
                }
            }
        }
    return 0;
}