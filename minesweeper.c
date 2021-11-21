#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char cleangrid[5][5]; 
int minegrid[5][5];

void gen_cleangrid(){
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            cleangrid[x][y] = 88;
        }
    }
}

void show_grid(){
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            printf("%c  ", cleangrid[x][y]);
        }
    printf("\n");
    }
    printf("\n");
}

void gen_minegrid(){
    srand(time(NULL));
    for (int x = 0; x < 5; x++){
        for (int y = 0; y < 5; y++){
            minegrid[x][y] = rand() % 2;
        }
    }
}

void win(){
    int m_zero = 0, c_zero = 0;
    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 5; x++){
            if (cleangrid[i][x] == 32){
                c_zero += 1;
            }
            if (minegrid[i][x] == 0){
                m_zero += 1;
            } 
        }
    }
    if (m_zero == c_zero){
        printf("You won.");
        exit(0);  
    }
}

void game(){
    int x, y;
    while(1){   
        show_grid();
        scanf("%i %i", &x, &y);
        printf("\n");

        if (minegrid[x - 1][y - 1] == 0){
            cleangrid[x - 1][y - 1] = 32;
        }
        if (minegrid[x - 1][y - 1] == 1){
            printf("You lost.");
            exit(0);
        }
        win();
    }
} 

int main(){
    gen_cleangrid();
    gen_minegrid();
    game();
}