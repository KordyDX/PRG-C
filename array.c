#include <stdio.h>

int main(){
    int x[5] = {10, 5, 7, 9, 10};
    
    for (int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
       printf("%i\n", x[i]); 
    }
    
}