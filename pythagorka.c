#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    double c;

    printf("Zapis velikost strany a & b. Oddel mezerou\n");
    scanf("%i %i", &a, &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("c = %.2f", c);

    return 0;
}