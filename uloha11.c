#include <stdio.h>
//Spočtěte zbytek po dělení dvou čísel bez pomoci operace %.
int main(){
    float zbytek, cislo = 5, delitel = 2, a;
    //x / y = z,000 | z * y = a | x - a
    a = cislo / delitel;
    printf("%f\n", a);
    a *= delitel;
    zbytek = cislo - a; 
    printf("%.2f", zbytek);

return 0;    
}