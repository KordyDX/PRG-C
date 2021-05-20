#include <stdio.h>
#include <math.h>

int main(){
    float a, b;

    printf("Zadejte velikost strany a a b\n");
    scanf("%f", &a);
    scanf("%f", &b);

    a = pow(a, 2);
    b = pow(b, 2);
    printf("Vysledek je %.2f", sqrt(a + b));

    return 0;
}