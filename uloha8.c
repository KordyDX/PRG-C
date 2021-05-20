#include <stdio.h>

int main(){
    int hodiny, dny, hodinyz;

    printf("Kolik hodin\n");
    scanf("%i", &hodiny);
    
    dny = hodiny / 24;
    hodinyz = hodiny % 24;

    printf("%i d\n", dny);
    printf("%i hrs", hodinyz);

return 0;
}