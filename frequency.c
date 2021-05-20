#include <stdio.h>
//kolikrát se jaký číslo vyskytuje v array
int main(){
    int array[10] = {1, 1, 2, 4, 5, 5, 4, 3, 2, 2};
    int a = 0, b = 0, c = 0, d = 0, e = 0;

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        switch (array[i])
        {
        case 1:
            a += 1;
            break;
        
        case 2:
            b += 1;
            break;

        case 3:
            c += 1;
            break;

        case 4:
            d += 1;
            break;

        case 5:
            e += 1;
            break;

        default:
            break;
        }
        
    }
    printf("1 = %i\n2 = %i\n3 = %i\n4 = %i\n5 = %i", a, b, c, d, e);

return 0;
}