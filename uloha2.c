#include <stdio.h>

int main(){
    int hor = 8;
    int ver = 8;
    int k = 1;

    for (int i = 1; i <= ver; i++) //hor = 8
    {
        for (int j = 1; j <= hor; j++) //ver = 8
        {
            if(k == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            k*= -1;
        }
        
    
    
        if (ver % 2 == 0){
        k *= -1;
        }

        printf("\n");
    }

return 0;
}