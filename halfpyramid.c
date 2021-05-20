#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pyramid(int row);

int main(){
    pyramid(5);
}

void pyramid(int row)
{
    int i;

    for (i = 0; i < row; i++)
    {   
        for (int ix = 0; ix <= i; ix++)
        {
        printf("# ");
        }
        printf("\n");
    }
}