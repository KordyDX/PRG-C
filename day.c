#include <stdio.h>

int main(){
    int den;

    printf("Number of the day:\n");
    scanf("%i", &den);

    switch (den)
    {
    case 1:
        printf("It's monday");
        break;

    case 2:
        printf("It's tuesday");
        break;

    case 3:
        printf("It's wednesday");
        break;

    case 4:
        printf("It's thursday");
        break;

    case 5:
        printf("It's friday");
        break;

    case 6:
        printf("It's saturday");
        break;

    case 7:
        printf("It's sunday");
        break;
    
    default:
        printf("Not a valid number");
        break;
    }

return 0;
}