#include <stdio.h>
#include <math.h>

    int main(){
        float x, y;
        printf("Vloz cislo:");
        scanf("%f", &x);
        y = pow(x, 3);
        printf("Treti mocnina z %.2f je %.2f", x, y);

    return 0;    
    }