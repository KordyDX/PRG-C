#include <stdio.h>

int main(){
    int computers = 20;
    int cena = 20000;
    int celkem;
    int budget;
    int scitani = 0;
    int i;
    // Dle mých výpočtu se teď může změnit jakákoliv hodnota a bude to fungovat tak i tak 
    celkem = computers * cena;

    printf("You have an office which has 20 computers.\nThese computers get old and you need to buy new ones every two years.\nEvery computer costs 10 000CZK\nThe goal of this program is to determine if the company's budget is enough to buy 10 years worth of computers.\n Please input your budget (number without currency):");
    scanf("%d", &budget);
    for (int i = 0; i < 5; i++) 
    {
    scitani += celkem;
    }
    if (budget >= scitani)
    {
        printf("The budget is enough for the next 10 years.\n");
    }
    else if (!(budget >= scitani))
    {
        printf("The budget is not enough for the next 10 years.\n");
    }
    
    return 0;
}