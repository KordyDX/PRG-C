#include <stdio.h>

int main(){
    int a;

    printf("Insert a number\n");
    scanf("%i", &a);

    a %= 2;

    if (a == 0)
    {
        printf("The number is even");
    } else {
        printf("The number is odd");}
    
}