#include <stdio.h>

int rows = 5;

int main() {
   int i;
   for (i = 1; i <= rows; ++i) {
      for (int j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}