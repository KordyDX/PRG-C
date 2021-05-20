#include <stdio.h>

int main(){
    int x;
    int y;
    int i;

    printf("Input x\n");
    scanf("%d", &x);
    printf("Input y\n");
    scanf("%d", &y);

        for (i = 0; i < 5; i++)
    {
        x*=y;
    }
    
    float z = (float) x;
    z = z / 8;
    printf("%.2f", z);

return 0;    
}