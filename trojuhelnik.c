#include <stdio.h>

void trojuhelnik(int h){

    for (int i = 1; i <= h; i++)
    {
        for (int x = h; x > i; x--)
        {
            printf(" ");
        }

        for (int y = 1; y <= i; y++)
        {
            printf("* ");
        }
    printf("\n");
    }
     
}

int main(){
    trojuhelnik(3);
    printf("\n");
    trojuhelnik(5);
    printf("\n");
    trojuhelnik(7);
    printf("\n");
    trojuhelnik(10);
    printf("\n");
    trojuhelnik(12);
}
