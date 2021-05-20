#include <stdio.h>

int main(){
    int x, y, a ,b;

    printf("Insert values x and y\n");
    scanf("%i", &x);
    scanf("%i", &y);
    //4x + 3 < 5y - 1
    a = 4 * x + 3;
    b = 5 * y - 1;

    printf("a = %i\n", a);
    printf("b = %i\n", b);
    
    
    if (a < b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    

return 0;
}