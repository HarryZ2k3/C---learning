//Huynh Phuong Dai _ ITITWE21039
#include <stdio.h>
#include <math.h>

int main()
{
    const float PI1=3.14;
    int n = 1;
    float error=1, pi_approx = 0;

    // for (int n = 1; n <= N; n+=2){
    //     if ((n%4) == 1)
    //         pi_approx += 4.0/n;
    //     if ((n%4) == 3)    
    //         pi_approx -= 4.0/n;
        
    //     printf("n %d, pi_prrox. = %f\n", n, pi_approx);

    // }

    while (error > 0.001){
        if ((n%4) == 1)
            pi_approx += 4.0/n;
        if ((n%4) == 3)    
            pi_approx -= 4.0/n;

        error = fabs(pi_approx - PI1);
        printf("n, Pi_approx, Error: %d, %0.6f, %0.6f \n", n, pi_approx, error);
        n = n+2;
    }
    return 0;
}