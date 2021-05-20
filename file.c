#include <stdlib.h>
#include <stdio.h>

void array (int n);

void array(int n){
  int pole[n];
  for(int i = 1; i <= n; i++)
    {
    pole[i] = i;
    printf("%i", pole[i]);
    }
}

int main(void){
  array(5);
}