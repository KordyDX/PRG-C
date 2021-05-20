#include <stdio.h>

int main(){
    int p[8] = {1,2,3,4,2};
    for (int i = 0; i < sizeof(p)/sizeof(int); i++)
    {
        p[i] *= 5;
        printf("%02i \n", p[i]);
    }
    
}