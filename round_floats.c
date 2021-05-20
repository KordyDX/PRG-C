#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int x = 0;
void generate_items(float *ptr){
    for (int i = 0; i < 10; i++){
        ptr[i] = (float)rand() / 1000;
    }
}

void show_items(float *ptr){
    for (int i = 0; i < 10; i++){
        if (x > 0){
            printf("\n%.1f", ptr[i]);
            continue;
        }
        printf("%f\n", ptr[i]);
    }
    x++;
}

void round_items(float *ptr){
    for (int i = 0; i < 10; i++){
        ptr[i] = ceilf(ptr[i] * 100) / 100;
    }
}

int main(){
    srand(time(NULL));
    float arr[10] = {}, *ptr = NULL;
    ptr = &arr[0];
    generate_items(ptr);
    show_items(ptr);
    round_items(ptr);
    show_items(ptr);
}