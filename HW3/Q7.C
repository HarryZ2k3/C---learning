//ITITWE21039 - HUYNH PHUONG DAI
#include <stdio.h>

void towerOfHanoi(int n,char from_rod, char to_rod, char aux_rod)
{
    if (n==0)
    {
        return;
    }
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    printf("Move disk %d from rod %c to rod %c \n",n,from_rod,to_rod);

    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
    /*
    Let rod 1 = 'A', rod 2 = 'B', rod 3 = 'C'.
    An example with 2 disks : (n=2)
    Step 1 : Shift first disk from 'A' to 'B'.

    Step 2 : Shift second disk from 'A' to 'C'.

    Step 3 : Shift first disk from 'B' to 'C'.

    The algorithym follows these three rules:
    1. Only one disk can be moved at a time.
    2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
    3. No disk may be placed on top of a smaller disk.
    */
}
int main()
{
    int n=4;
    towerOfHanoi(n,'A','C','B'); //A,B,C are the names of the rods
    return 0;
}