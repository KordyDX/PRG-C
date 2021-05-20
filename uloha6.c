#include <stdio.h>

int main(){
    int x = 30, y = 80;

    for (int i = x; i <= y; i++)
    {   
        printf("%i", i);
        if (i < 80)
        {
            printf(",");
        }
    }

return 0;    
}