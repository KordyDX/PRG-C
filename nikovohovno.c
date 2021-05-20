#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int a[5] = {};

void generuj(){
srand(time(0));

 for(int i = 0; i < 5; i++){
     a[i] = 1 + rand() % (99 + 1);
 }
}

void vypis(){
    for(int i = 0; i < 5; i++){
 printf("%i\n", a[i]);
    }
}

void analyzuj(){
int min = a[0];
int max = a[0];
int sou = 0;
int sou2 = 0;

for (int i = 0; i < 5; i++)
    {
        sou += a[i];
    }

for(int i = 1; i < 5; i++){
    
    if(a[i] > max){
        max = a[i];
    }
    if (a[i] < min){
        min = a[i];
    }
}
    printf("min. hodnota = %d\n", min);
    printf("max. hodnota = %d\n", max);
    printf("sou. hodnot = %d\n", sou);
    printf("prum. hodnota = %f\n", sou / 5.);
    
    for(int q = 0; q < 5; q++){
        if(a[q] == min){
            a[q] = 0;
        }
         if(a[q] == max){
            a[q] = 0;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sou2 += a[i];
    }
    printf("prum. hodnota = %f\n", sou2 / 3.);
  
  
  
  
  

  

}

int main(){
generuj();
vypis();
analyzuj();

return 0;
}