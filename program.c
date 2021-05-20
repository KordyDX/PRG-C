//program ktery hleda nasobky 5 v poli a pote secte
#include <stdio.h>

int main(){
    int array[10] = {5, 10, 13, 4, 79, 51, 60, 45, 125, 47};
    int total = 0;

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (array[i] % 5 == 0)
        {
            printf("%i\n", array[i]);
            total += array[i];
        }
    }
    printf("\nTotal = %i", total);
}