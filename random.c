#include <stdio.h>

int main(){
    int a; //číslo 1
    int b; //číslo 2
    int c; //výsledek
    int d; //násobitel
    int e; //výsledek dělení
        printf("Napis prvni cislo\n");
            scanf("%d", &a);
        printf("Napis druhe cislo\n");
            scanf("%d", &b);
    c = a + b;
        printf("Napis cislo kterym vynasobis vysledek\n");
            scanf("%d", &d);
    e = c * d;
        printf("%i", e);
return 0;    
}