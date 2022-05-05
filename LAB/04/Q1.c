//ITITWE21039 HUYNNH PHUONG DAI 
#include <stdio.h>
#define SIZE 3
//input the array the calculate the dot product = a1*b1 + a2*b2 + a3*b3
// so vec1[0]*vec2[0]+vec1[1]*vec2[1]+vec1[2]+vec2[2] = dot product
void DotProduct()
{
    int vector1[SIZE];
    int vector2[SIZE];
    printf("Enter the components of the first Vector:\n");
    for (int i=0;i<SIZE;i++)
    {
        scanf("%d",&vector1[i]);
    }
    printf("Enter the components of the Second Vector:\n");
    for (int i=0;i<SIZE;i++)
    {
        scanf("%d",&vector2[i]);
    }
    int Product = 0;
    Product = vector1[0]*vector2[0] + vector1[1]*vector2[1] + vector1[2]*vector2[2];
    printf("Dot vector of the two Vectors you entered is : a.b = %d",Product);
}
int main ()
{
    DotProduct();
    return 0;
}