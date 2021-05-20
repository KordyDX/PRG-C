#include <stdio.h>
#define MAX_AMOUNT (10)

int main(){
    int znamky[MAX_AMOUNT], celkem = 0, i;

    printf("Zadej 10 znamek oddelenych mezerou\n");

    for (int s = 0; s < MAX_AMOUNT; s++)
    {
        scanf("%i", &znamky[s]);
    }

    for (i = 0; i < sizeof(znamky) / sizeof(int); i++)
    {
        celkem += znamky[i];
    }
    printf("%.2f", (float)celkem / i);

return 0;
}