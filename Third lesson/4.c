//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>

int main ()
{
    int x;
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d",&x);
    for (int i=1; i<=x;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}