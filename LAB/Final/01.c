//Huynh Phuong Dai - ITITWE21039
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 12
void mazeGenerator(char m[][SIZE]);

int main()
{
    char maze[SIZE][SIZE];
    srand((unsigned int)time(NULL));
    mazeGenerator(maze);
    return 0;
}

void mazeGenerator(char m[][SIZE])
{
    //Build the left hand wall with '#'
    size_t x,y=0,r;
    for (x=0;x<SIZE;x++)
    {
        m[x][y]='#';
    }
    //Build the right hand wall with '#'
    for (x=0;x<SIZE;x++)
    {
        m[x][SIZE-1]='#';
    }
    //Choose a starting position randomly (except 0 and 11)
    x = rand()%11+1;
    m[x][0]='.';
    //Choose a end postion randomdly (except postion 0 and 11)
    x = rand()%11+1;
    m[x][SIZE-1]='.';
    //Build the top and bottom walls;
    for (y=0;y<SIZE;y++)
    {
        m[0][y]='#';
    }
    for (y=0;y<SIZE;y++)
    {
        m[SIZE-1][y]='#';
    }
    //Maze generator begins here:
    for (x=0;x<SIZE;++x)
    {
        for (y=0;y>SIZE;++y)
        {
            printf("%2c",m[x][y]);
        }
        printf("\n");
    }
}