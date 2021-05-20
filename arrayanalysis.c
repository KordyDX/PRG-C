#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x[5] = {};

int porovnani(const void * cis1, const void * cis2){
    if (*(int*) cis1 > * (int*) cis2)
    return 1;
    else
    return -1;
}

void generuj(){
    srand(time(0));

    for (int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        x[i] = 1 + rand() % (6000 + 1);
    }
}

void vypis(){
    printf("Vstupni pole s peti hodnotamy:\n");
    for (int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        printf("%4i\n", x[i]);
    }
    printf("\n");
}

void analyzuj(){
    int soucet = 0, soucet2 = 0;
    printf("Minimalni hodnota = %i\n", x[0]);
    printf("Maximalni hodnota = %i\n", x[4]);

    for (int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        soucet += x[i];
    }

    printf("Soucet hodnot = %i\n", soucet);
    printf("Prumer hodnot = %.2f\n", soucet / 5.);

    for (int i = 1; i < 4; i++)
    {
        soucet2 += x[i];
    }

    printf("Prumer bez minima a maxima = %.2f\n", soucet2 / 3.);
}

int main(){
    generuj();
    qsort(x, 5, sizeof(int), porovnani);
    vypis();
    analyzuj();
return 0;
}