#include <stdio.h>

int main(){
    int dny, hodiny, celkem;

    printf("Zadej pocet:\n");
    printf("Dnu = ");
    scanf("%i", &dny);
    printf("Hodin = ");
    scanf("%i", &hodiny);
    celkem = (dny * 24) + hodiny;

    printf("Celkem hodin %i", celkem);

return 0;
}