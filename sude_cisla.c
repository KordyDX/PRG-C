#include <stdio.h>

int main(){
    int uprange;
    int x;

    printf("Type in a number\n");
    scanf("%i", &uprange);

    for (int i = 1; i <= uprange; i++)
    {
        x = i % 2;
        if (x == 0)
        {
            printf("%i ", i);
        }
        
    }
return 0;    
}
