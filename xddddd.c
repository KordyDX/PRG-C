#include <stdio.h>

int main(){
    int a = 2;
    
     while (a == 1024)
    {
        printf("%i", a);
        a *= a;
    }

return 0;
}